package com.moziqi.ndklearn;

import java.util.concurrent.Executors;

import android.app.Activity;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends Activity {

	static {
		System.loadLibrary("NDKLearn");
	}

	private AsyncTask<Void, Void, String> mAsyncTask = null;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		mAsyncTask = new AsyncTask<Void, Void, String>() {

			@Override
			protected String doInBackground(Void... params) {
				String str = JniTest.AddStr("test", "test");
				return str;
			}

			@Override
			protected void onPostExecute(String result) {
				super.onPostExecute(result);
				Toast.makeText(getApplicationContext(), result + "", Toast.LENGTH_SHORT).show();
			}
		};
		mAsyncTask.executeOnExecutor(Executors.newCachedThreadPool());
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		// Handle action bar item clicks here. The action bar will
		// automatically handle clicks on the Home/Up button, so long
		// as you specify a parent activity in AndroidManifest.xml.
		int id = item.getItemId();
		if (id == R.id.action_settings) {
			return true;
		}
		return super.onOptionsItemSelected(item);
	}
}
