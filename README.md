FrontEnd Boilerplate
===================

Been using this boilerplate setup for a while now and it enables me to hit the ground running when creating a new template. File structure is pretty self-explanatory, which makes it easy to find your sources and keeps things tidy. 

The boilerplate includes a stripped down version of the HTML5 boilerplate, a CSS reset and the latest version of jQuery. Header, footer, main navigation and secondary navigation are found in the _inc folder, for your include happiness.

In the header of your page, just declare two variables:

	<?php
		$ttl = 'Home';
		$loc = array(0,0,0,0);
	?>
	
The former being the page title and the second being the location of where the current page lives within the site. (0 being the first occurance on that level). So for example if we take this simple sitemap:

* Home (0)
* Energy Drinks (1)
	* Monster (0)
	* Red Bull (1)
		* Normal (0)
		* **Light** (1)
	* Relentless (2)
* Cigarettes (2)
	* Chesterfield (0)
	* PallMall (1)
	
The page that would live at Red Bull Light would have $loc  = array(1,1,1,0);