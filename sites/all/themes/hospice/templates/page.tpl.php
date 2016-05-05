<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<div class="page-wrap">

	<header id="wrapper--header" class="clearfix" role="header">
		 
		  <div role="banner" class="logo-section clearfix">
		  	<?php print render($page['logo']); ?>
		  </div>
		  <nav id="nav" class="navigation main-navigation clearfix">
		  	<?php print render($page['menu']); ?>
		  </nav> 

	</header> <!-- End Header Section -->

		<?php if ($page['preface']): ?>
		    <div id="preface" role="banner" class="clearfix">
		      <?php print render($page['preface']); ?>
		    </div>
	    <?php endif; ?>

<div class="wrapper--content clearfix <?php if(empty ($page['sidebar']) ): ?>no-sidebar<?php endif; ?>">
	
		<?php if ($page['sidebar']): ?>
	    	<aside id="sidebar" role="sidebar" class="sidebar clearfix">
				<?php print render($page['sidebar']); ?>
			</aside>
		<?php endif; ?>
	  
	  
		<?php if ($page['content']): ?>
		    <main id="main" role="main">
		      <?php print render($page['content']); ?>
		    </main>
	    <?php endif; ?>
	 
</div>

  <footer role="footer" class="footer clearfix">
  	<?php print render($page['footer']); ?>
  </footer>
  
  <div class="bottom-footer clearfix">
     <div class="copy footer-left">
	     	<p>Hospice of Northern Colorado &copy; <?php echo date("Y") ?> All rights reserved. <a href="/privacy" title="Our Privacy Practices">Privacy</a> | <a href="/sites/default/files/2014-HNC-990-FInal-Public-Disclosure.pdf">990</a></p>
	     	
	    </div>
      <div class="site-by footer-right">
	      	<p>Site By: <a href="http://www.variantstudios.com" target="_blank">Variant Studios</a></p>
	     </div>
 </div>

</div> <!-- End Full Page Wrapper -->