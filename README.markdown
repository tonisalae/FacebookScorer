## FacebookScorer - Post highscores to user's Facebook Wall

With FacebookScorer you can post scores for your game on Facebook Wall on user's behalf in a **single line of code**.

![image](http://indiedevstories.files.wordpress.com/2011/08/facebook_post1.png)

More about me at [IndieDevStories.com](http://indiedevstories.com)

## Features

FacebookScorer offers the following **features**:

* Publish scores to Facebook Wall with the Facebook Dialog
* Handles automatically login and authorize on Facebook


## Deployment

1 - Add the *FacebookScorer* folder to your Xcode project.

2 - Add the following methods to your app Delegate: (remember to include `FacebookScorer.h`) 

	- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
    	return [[[FacebookScorer sharedInstance] facebook] handleOpenURL:url];
	}

	// For 4.2+ support
	- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    	return [[[FacebookScorer sharedInstance] facebook] handleOpenURL:url];
	}
	
3 - Add *URL Types* array as shown on the image below to your *Info.plist* file

![image](http://indiedevstories.files.wordpress.com/2011/08/plist_facebook.png)


## Usage

There is a **simple Demo app** within the project.

On top of the `FacebookScorer.m` file you will find the constants to be customized, including your Facebook app ID:

	static NSString* kAppId = @"000000000000000"; // Your Facebook app ID here

	#define kAppName        @"Your App's name"
	#define kCustomMessage  @"I just got a score of %d in %@, an iPhone/iPod Touch game by me!"
	#define kServerLink     @"http://indiedevstories.com"
	#define kImageSrc       @"http://indiedevstories.files.wordpress.com/2011/08/newsokoban_icon.png"

Then, simply add this line of code where you want the Facebook dialog to appear:

	[[FacebookScorer sharedInstance] postToWallWithDialogNewHighscore:123];

Done! As usual, very easy to use ;)

## Licence

Copyright (c) 2012 Toni Sala

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.