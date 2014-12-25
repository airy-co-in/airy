<?php
/**
 * @file
 * st_medicom_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function st_medicom_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About Us - members';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_about_us';
  $fe_block_boxes->body = '<div class="container">
<h1 class="light">meet the <span>perfect specialists</span> team</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat nibh euismod tincidunt ut laoreet dolore magna.</p>
<img alt="" src="/sites/default/files/doctors.jpg" style="width: 1048px; height: 586px;" /></div>
';

  $export['block_about_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About us header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_about_us_header';
  $fe_block_boxes->body = '<h1 class="entry-title">Contact us</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_about_us_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'After booking';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_after_booking';
  $fe_block_boxes->body = '<div class="container">
<h1>After Booking</h1>

<p class="lead">Hi fill in the details and submit the form. We will contact you via phone or email and fix a time schedule. These are the thing you need to carry with you when you come in for the appointment wit the doctor.</p>

<ul class="medicom-feature-list list-inline text-left">
	<li><i class="fa fa-check medicom-check">&nbsp;</i>We offer a no obligation a free initial consultation.</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>Enlisted Previous Numbers</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>Previous Medical History</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>Make sure you are feeling good</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>Uncover many web sites still in their infancy.</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>Uncover many web sites still in their infancy Various versions.</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>you need to be sure there isn\'t anything embarrassing.</li>
	<li><i class="fa fa-check medicom-check">&nbsp;</i>you need to be sure there isn\'t anything embarrassing.</li>
</ul>
</div>
';

  $export['block_after_booking'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Appointment form';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'block_appointment_form';
  $fe_block_boxes->body = '<div class="container">
  <h1>Make an appointment</h1>
  <p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>
  <div class="row">
    <div class="col-md-6">
        <figure><img src="<?php print drupal_get_path(\'theme\', \'medicom\'); ?>/images/appointment-img.jpg" alt="image" title="Appointment image" class="img-responsive lady1"></figure>
    </div>
    <div class="col-md-6">
        <div class="appointment-form clearfix">
	<?php	  
	  $form = drupal_get_form(\'medicom_appointment_form\');
	  print drupal_render($form);
	?>
  </div>
</div>
</div>
</div>';

  $export['block_appointment_form'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Appointment form - front3';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'block_appointment_form_front3';
  $fe_block_boxes->body = '<h2 class="light bordered">make an <span>appointment</span></h2>
<div class="appointment-sec2 clearfix">
  <?php	  
    $form = drupal_get_form(\'medicom_appointment_form\');
    print drupal_render($form);
  ?>
</div>';

  $export['block_appointment_form_front3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Appointment header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_appointment_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Make an appointment</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_appointment_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'blog detail header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_blog_detail_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">BLOG DETAIL</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_blog_detail_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'blog header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_blog_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">blog</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_blog_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'contact header map';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_contact_header_map';
  $fe_block_boxes->body = '<h2 class="light bordered">Get<span>Directions</span></h2>

<div class="row">
<div class="col-md-12">
<div class="map"><iframe src="https://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=Envato+Pty+Ltd,+Elizabeth+Street,+Melbourne,+Victoria,+Australia&amp;aq=0&amp;oq=envato+&amp;sll=37.0625,-95.677068&amp;sspn=39.235538,86.572266&amp;ie=UTF8&amp;hq=Envato+Pty+Ltd,&amp;hnear=Elizabeth+St,+Melbourne+Victoria+3000,+Australia&amp;ll=-37.817942,144.964977&amp;spn=0.01918,0.008866&amp;t=m&amp;output=embed"></iframe></div>

<div class="get-directions">
<form action="http://maps.google.com/maps" method="get" target="_blank"><input name="saddr" placeholder="Enter Your Address" type="text" /> <input name="daddr" type="hidden" value="Envato Pty Ltd, Elizabeth Street, Melbourne, Victoria, Australia" /> <input class="direction-btn" type="submit" value="Get directions" />&nbsp;</form>
</div>
</div>
</div>
';

  $export['block_contact_header_map'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'contact header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_contact_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Contact us</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_contact_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'contact one right';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_contact_one_right';
  $fe_block_boxes->body = '<h2 class="light bordered">get in <span>touch</span></h2>

<div class="get-in-touch-widget">
<ul class="list-unstyled">
	<li><i class="fa fa-phone">&nbsp;</i>(+09) 0323 750 4561</li>
	<li><i class="fa fa-envelope">&nbsp;</i><a href="#.">quickhelp@medicom.com</a></li>
	<li><i class="fa fa-globe">&nbsp;</i><a href="#.">www.medicom-clinic.com</a></li>
	<li><i class="fa fa-clock-o">&nbsp;</i>Mon - Sat 9:00am - 6:00 pm</li>
	<li><i class="fa fa-map-marker">&nbsp;</i>Envato Marketplace Melbourne Farlane St Sydney TF - 123456</li>
</ul>
</div>

<ul class="social-rounded">
	<li><a href="#."><i class="fa fa-facebook">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-twitter">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-google-plus">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-dribbble">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-youtube">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-vimeo-square">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-linkedin">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-rss">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-pinterest">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-android">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-flickr">&nbsp;</i></a></li>
</ul>
';

  $export['block_contact_one_right'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_copyright';
  $fe_block_boxes->body = '<p class="copyright text-center">Copyright © 2014 Medicom. All right reserved.</p>
';

  $export['block_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'department header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_department_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Medical departments</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_department_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Error 404 body';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_error_404_body';
  $fe_block_boxes->body = '<div class="sub-page-content">
<div class="container">
<div class="error-text">
<p><span><strong>404</strong> Something went wrong here!</span> Oops! Sorry, an error has occured. Requested page not found!</p>
<a class="btn btn-default btn-rounded" href="/">go back to home</a></div>
</div>

<div class="clr">&nbsp;</div>
</div>
<!--end sub-page-content-->';

  $export['block_error_404_body'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Error 404 header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_error_404_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">404 Error</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_error_404_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Features';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_features';
  $fe_block_boxes->body = '<section class="medicom-awesome-features-sec" data-stellar-background-ratio="0.3">
<div class="container">
<div class="text-center">
<h1 class="light">Medicom is <span>Incredibly Awesome</span> Design.</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Nam vitae felis pretium, euismod ipsum nec</p>
</div>

<ul class="awesome-features list-unstyled pull-left text-right">
	<li><i class="pull-right img-circle fa fa-ambulance">&nbsp;</i><span>Emergency</span>If you need a doctor for to consectetuer</li>
	<li class="middle"><i class="pull-right img-circle fa fa-eye">&nbsp;</i><span>eye specialist</span>If you need a service</li>
	<li><i class="pull-right img-circle fa fa-flask">&nbsp;</i><span>Robot therapy</span>If you need a doctor for to consectetuere</li>
</ul>

<div class="tab-slider">
<div class="carousel slide" data-ride="carousel" id="carousel-example-generic">
<div class="carousel-inner">
<div class="item active text-center"><img alt="" src="/sites/default/files/tab-slider-img.jpg" title="" /></div>

<div class="item"><img alt="" src="/sites/default/files/tab-slider-img.jpg" title="" /></div>

<div class="item"><img alt="" src="/sites/default/files/tab-slider-img.jpg" title="" /></div>
</div>
</div>
</div>

<ul class="awesome-features list-unstyled pull-right text-left">
	<li><i class="pull-left img-circle fa fa-user-md">&nbsp;</i><span>Emergency</span>If you need a doctor for to consectetuer</li>
	<li class="middle"><i class="pull-left img-circle fa fa-heart">&nbsp;</i><span>eye specialist</span>If you need a service</li>
	<li><i class="pull-left img-circle fa fa-tint">&nbsp;</i><span>Robot therapy</span>If you need a doctor for to consectetuer</li>
</ul>
</div>
</section>
';

  $export['block_features'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Features2  front5';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_features2_front5';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-6">
<div class="feature"><i class="pull-left feature-icon fa fa-user-md">&nbsp;</i>
<div class="feature-content">
<h5><a href="#.">Creative doctors</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>
</div>

<div class="col-md-6">
<div class="feature"><i class="pull-left feature-icon fa fa-clock-o">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">24/7 Live Support</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>
</div>
</div>

<div class="row">
<div class="col-md-6">
<div class="feature"><i class="pull-left feature-icon fa fa-tint">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">cancer care</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>
</div>

<div class="col-md-6">
<div class="feature"><i class="pull-left feature-icon fa fa-phone-square">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">emergency services</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>
</div>
</div>
</div>
';

  $export['block_features2_front5'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_links';
  $fe_block_boxes->body = '<div class="footer-widget">
                        <h4><span>Medicom</span></h4>
                        <ul class="footer-nav list-unstyled clearfix">
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Home</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Doctors</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>About US</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Departments</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Services</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Blog</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Why US</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Medical Care</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Specilaties</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Timetable</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Events</a></li>
                            <li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Contact Us</a></li>
                        </ul>
                    </div>';

  $export['block_footer_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Gallery header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_gallery_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">gallery</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_gallery_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Get in touch';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_get_in_touch';
  $fe_block_boxes->body = '<div class="footer-widget">
<h4><span>get in touch</span></h4>
<p>Medico Bibendum auctor, nisi elit consequat ipsum, nec sagittis sem</p>
<div class="contact-widget"><i class="fa fa-home">&nbsp;</i>
<p>Medicom Ltd, Manhattan 1258, New York, USA Lahore</p>
<i class="fa fa-globe">&nbsp;</i>
<p><a href="#.">www.medicom.com</a></p>
<i class="fa fa-mobile">&nbsp;</i>
<p class="phone-number">(+1) 234 567 8901</p>
</div>
</div>';

  $export['block_get_in_touch'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Medicom app';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_medicom_app';
  $fe_block_boxes->body = '<div class="container">
<div class="row">
<div class="col-md-5"><img alt="" class="app-img" src="/sites/default/files/mobile-hand.gif" title="" /></div>

<div class="col-md-7">
<div class="medicom-app-content">
<h1>medicom App Available</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. <span>AVAILABLE ON STORES</span></p>

<ul class="list-unstyled app-buttons">
	<li><a href="#."><img alt="" src="/sites/default/files/app-store-btn.png" title="App Store" /></a></li>
	<li><a href="#."><img alt="" src="/sites/default/files/google-play-btn.png" title="Google App" /></a></li>
</ul>
</div>
</div>
</div>
</div>
';

  $export['block_medicom_app'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Medicom benefits';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_medicom_benefits';
  $fe_block_boxes->body = '<h2 class="light bordered">Benefits from <span>medicom</span></h2>

<div class="feature"><i class="pull-left feature-icon fa fa-user-md">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">Creative doctors</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>

<div class="feature"><i class="pull-left feature-icon fa fa-tint">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">cancer care</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>

<div class="feature"><i class="pull-left feature-icon fa fa-phone-square">&nbsp;</i>

<div class="feature-content">
<h5><a href="#.">emergency services</a></h5>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.</p>
<a href="#."><dfn>- Learn more</dfn></a></div>
</div>
';

  $export['block_medicom_benefits'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Medicom footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_medicom_footer';
  $fe_block_boxes->body = '<div class="container">
        	<div class="row">
            	<div class="col-md-2"><a href="#."><img src="/sites/default/files/footer-logo.jpg" alt="" title="Medicom Logo"></a></div>
            	<div class="col-md-10">
                	<p class="footer-bottom-text">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing.</p>
                </div>
            </div>
        </div>';

  $export['block_medicom_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Medicom tour static';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_medicom_tour_static';
  $fe_block_boxes->body = '<h2 class="light bordered">medicom <span>tour</span></h2>

<div class="panel-group accordian-style2" id="accordion2">
<div class="panel panel-default">
<div class="panel-heading">
<h4 class="panel-title active"><a data-parent="#accordion2" data-toggle="collapse" href="#collapseOne"><i class="fa fa-medkit">&nbsp;</i>our responsibility<i class="fa pull-right fa-angle-up">&nbsp;</i> </a></h4>
</div>

<div class="panel-collapse collapse in" id="collapseOne">
<div class="panel-body">Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br />
<br />
veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde sed quia consequuntur. Page Maker including versions.</div>
</div>
</div>

<div class="panel panel-default">
<div class="panel-heading">
<h4 class="panel-title"><a data-parent="#accordion2" data-toggle="collapse" href="#collapseTwo"><i class="fa fa-heart">&nbsp;</i>heart specialist<i class="fa fa-angle-down pull-right">&nbsp;</i> </a></h4>
</div>

<div class="panel-collapse collapse" id="collapseTwo">
<div class="panel-body">Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br />
<br />
veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde sed quia consequuntur. Page Maker including versions.</div>
</div>
</div>

<div class="panel panel-default">
<div class="panel-heading">
<h4 class="panel-title"><a data-parent="#accordion2" data-toggle="collapse" href="#collapseThree"><i class="fa fa-eye">&nbsp;</i>eye specialist<i class="fa fa-angle-down pull-right">&nbsp;</i> </a></h4>
</div>

<div class="panel-collapse collapse" id="collapseThree">
<div class="panel-body">Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br />
<br />
veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde sed quia consequuntur. Page Maker including versions.</div>
</div>
</div>

<div class="panel panel-default">
<div class="panel-heading">
<h4 class="panel-title"><a data-parent="#accordion2" data-toggle="collapse" href="#collapseFour"><i class="fa fa-mobile">&nbsp;</i>responsive design<i class="fa fa-angle-down pull-right">&nbsp;</i> </a></h4>
</div>

<div class="panel-collapse collapse" id="collapseFour">
<div class="panel-body">Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br />
<br />
veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets. Sed ut perspiciatis unde sed quia consequuntur. Page Maker including versions.</div>
</div>
</div>
</div>
';

  $export['block_medicom_tour_static'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Meet team';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_meet_team';
  $fe_block_boxes->body = '<h1 class="entry-title">meet team</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_meet_team'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Member detail header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_member_detail_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Member Detail</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_member_detail_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OPENING HOURS';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_opening_hours';
  $fe_block_boxes->body = '<div class="home-box opening-hours clearfix">
  <span class="glyphicon glyphicon-time">&nbsp;</span>
  <h3>Opening Hours</h3>
  <p>If you need a doctor for to the consectetuer
	consectetur adipiscing Graphic Design is elit.</p>
	<ul class="list-unstyled">
		<li class="clearfix">
		<span>
			Monday - Friday
		</span>
		<div class="value">
			8.00 - 16.00
		</div>
		</li>
		<li class="clearfix">
		<span>
			Saturday
		</span>
		<div class="value">
			9.30 - 15.30
		</div>
		</li>
		<li class="clearfix">
		<span>
			Sunday
		</span>
		<div class="value">
			9.30 - 17.00
		</div>
		</li>
	</ul>
</div>';

  $export['block_opening_hours'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Piechart section';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_piechart_section';
  $fe_block_boxes->body = '<section class="text-center" id="pie-charts">
<div class="container">
<h1 class="light">Successful <span>Fatality</span> Cases</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat nibh euismod tincidunt ut laoreet dolore magna.</p>
<span class="chart first" data-percent="95"><span class="percent">&nbsp;</span> <span class="year">2010</span> </span> <span class="chart" data-percent="85"> <span class="percent">&nbsp;</span> <span class="year">2011</span> </span> <span class="chart" data-percent="90"> <span class="percent">&nbsp;</span> <span class="year">2012</span> </span> <span class="chart" data-percent="75"> <span class="percent">&nbsp;</span> <span class="year">2013</span> </span> <span class="chart" data-percent="95"> <span class="percent">&nbsp;</span> <span class="year">2014</span> </span></div>
</section>
';

  $export['block_piechart_section'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Portfolio header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_portfolio_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Portfolio</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_portfolio_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Procedures header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_procedures_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Procedures</h1>

<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>
';

  $export['block_procedures_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'product detail header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_product_detail_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Shop Detail</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>
';

  $export['block_product_detail_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Research footer 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_research_footer1';
  $fe_block_boxes->body = '<div class="reserch-bottom-nav clearfix">        
<div class="container">
<div class="row">
<div class="col-md-4">
<h4>Program Directors</h4>

<ul class="list-nav">
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Allison Cosford, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>J.Gaby Bravo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Francesca Riedl, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Daniel Zoilo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>John smith, M.D., Ph.D.</a></li>
</ul>
</div>

<div class="col-md-4">
<h4>Primary Appointments</h4>

<ul class="list-nav">
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Allison Cosford, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>J.Gaby Bravo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Francesca Riedl, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Daniel Zoilo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>John smith, M.D., Ph.D.</a></li>
</ul>
</div>

<div class="col-md-4">
<h4>Secondary Appointments</h4>

<ul class="list-nav">
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Allison Cosford, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>J.Gaby Bravo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Francesca Riedl, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>Daniel Zoilo, Ph.D.</a></li>
	<li><a href="#."><i class="fa fa-long-arrow-right">&nbsp;</i>John smith, M.D., Ph.D.</a></li>
</ul>
</div>
</div>
</div>
</div>';

  $export['block_research_footer1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Research footer 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_research_footer2';
  $fe_block_boxes->body = '<div class="tri-sec-bg">
<div class="container">
<div class="tri-sec text-center"><i class="feature-icon fa fa-plus-square">&nbsp;</i>
<h4>medicom trials</h4>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.<br />
<a href="#.">- Learn more</a></p>
</div>

<div class="tri-sec text-center"><i class="feature-icon fa fa-tint">&nbsp;</i>

<h4>Cancer</h4>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.<br />
<a href="#.">- Learn more</a></p>
</div>

<div class="tri-sec text-center"><i class="feature-icon fa fa-stethoscope">&nbsp;</i>

<h4>Children\'s Health</h4>

<p>It has survived not only five centuries, but also the leap into electronic typesetting, remaining popularised only five Power of centuries.<br />
<a href="#.">- Learn more</a></p>
</div>
</div>
</div>';

  $export['block_research_footer2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Research header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_research_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">research</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_research_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service box four';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_service_box_four';
  $fe_block_boxes->body = '<p><span class="icon img-circle"><i class="fa fa-phone">&nbsp;</i></span></p>

<h4><a href="#.">creative doctors</a></h4>

<p>If you need a doctor for to consectetuer Lorem ipsum dolor, consectetur adipiscing elit. Ut volutpat eros adipiscing elit Ut volutpat. cancer care is power of dummy for all business.</p>
';

  $export['block_service_box_four'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service box one';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_service_box_one';
  $fe_block_boxes->body = '<p><span class="icon img-circle"><i class="fa fa-lightbulb-o">&nbsp;</i></span></p>

<h4><a href="#.">creative doctors</a></h4>

<p>If you need a doctor for to consectetuer Lorem ipsum dolor, consectetur adipiscing elit. Ut volutpat eros adipiscing elit Ut volutpat. cancer care is power of dummy for all business.</p>
';

  $export['block_service_box_one'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service box three';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_service_box_three';
  $fe_block_boxes->body = '<p><span class="icon img-circle"><i class="fa fa-tint">&nbsp;</i></span></p>

<h4><a href="#.">creative doctors</a></h4>

<p>If you need a doctor for to consectetuer Lorem ipsum dolor, consectetur adipiscing elit. Ut volutpat eros adipiscing elit Ut volutpat. cancer care is power of dummy for all business.</p>
';

  $export['block_service_box_three'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service box two';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_service_box_two';
  $fe_block_boxes->body = '<p><span class="icon img-circle"><i class="fa fa fa-flask">&nbsp;</i></span></p>

<h4><a href="#.">creative doctors</a></h4>

<p>If you need a doctor for to consectetuer Lorem ipsum dolor, consectetur adipiscing elit. Ut volutpat eros adipiscing elit Ut volutpat. cancer care is power of dummy for all business.</p>
';

  $export['block_service_box_two'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_service_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">services</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_service_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shopping cart header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shopping_cart_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Shopping cart</h1>

<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>
';

  $export['block_shopping_cart_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes column styles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_column_styles';
  $fe_block_boxes->body = '<h2 class="bordered light">Column <span>styles</span></h2>
<h4>1/2 Column</h4>
<div class="row">
    <div class="col-md-6">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-6">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
</div>

<h4>1/3 Column</h4>
<div class="row">
    <div class="col-md-4">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-4">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-4">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
</div>

<h4>1/4 Column</h4>
<div class="row">
    <div class="col-md-3">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim.</p>
    </div>
    <div class="col-md-3">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim.</p>
    </div>
    <div class="col-md-3">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim.</p>
    </div>
    <div class="col-md-3">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim.</p>
    </div>
</div>

<h4>2/3 + 1/3 Column</h4>
<div class="row">
    <div class="col-md-8">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. uis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum.</p>
    </div>
    <div class="col-md-4">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
</div>';

  $export['block_shortcodes_column_styles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">shortcodes</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_shortcodes_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes heading style';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_heading_style';
  $fe_block_boxes->body = '<h2 class="light bordered main-title">Heading <span>styles</span></h2>           
<div class="row">
    <div class="col-md-6">
        <h1>heading h1</h1>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-6">
        <h2>heading h2</h2>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
 </div>
 
 <div class="row">
    <div class="col-md-6">
        <h3>heading h3</h3>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-6">
        <h4>heading h4</h4>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
 </div>

<div class="row">
    <div class="col-md-6">
        <h5>heading h5</h5>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-6">
        <h6>heading h6</h6>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
 </div>';

  $export['block_shortcodes_heading_style'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes list styles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_list_styles';
  $fe_block_boxes->body = '<h2 class="bordered light">List <span>styles</span></h2>
<div class="row">
    <div class="col-md-6">
        <ul class="list-unstyled medicom-feature-list">
            <li><i class="fa fa-check medicom-check"></i>Contrary to popular belief, Lorem Ipsum is not simply text.</li>
            <li><i class="fa fa-check medicom-check"></i>Contrary to popular belief, Lorem Ipsum is not simply.</li>
            <li><i class="fa fa-check medicom-check"></i>Contrary to popular not simply random text.</li>
            <li><i class="fa fa-check medicom-check"></i>Lorem Ipsum is not simply random text.</li>
            <li><i class="fa fa-check medicom-check"></i>Contrary to  Lorem Ipsum is not simply random text.</li>
            <li><i class="fa fa-check medicom-check"></i>Contrary to popular belief, Lorem Ipsum is not simply text.</li>
        </ul>
    </div>
    <div class="col-md-6">
        <ol>
            <li>Contrary to popular belief, Lorem Ipsum is not simply random text.</li>
            <li>Contrary to popular belief, Lorem Ipsum is not simply.</li>
            <li>Contrary to popular not simply random text.</li>
            <li>Lorem Ipsum is not simply random text.</li>
            <li>Contrary to  Lorem Ipsum is not simply random text.</li>
            <li>Contrary to popular belief, Lorem Ipsum is not simply text.</li>
        </ol>
    </div>
</div>';

  $export['block_shortcodes_list_styles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes piechart styles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_piechart_styles';
  $fe_block_boxes->body = '<h2 class="light bordered">successful <span>fatality</span></h2>

<div id="pie-charts"><span class="chart first" data-percent="95"><span class="percent">&nbsp;</span> <span class="year">2010</span> </span> <span class="chart" data-percent="85"> <span class="percent">&nbsp;</span> <span class="year">2011</span> </span> <span class="chart" data-percent="90"> <span class="percent">&nbsp;</span> <span class="year">2012</span> </span> <span class="chart" data-percent="75"> <span class="percent">&nbsp;</span> <span class="year">2013</span> </span> <span class="chart" data-percent="95"> <span class="percent">&nbsp;</span> <span class="year">2014</span> </span></div>
';

  $export['block_shortcodes_piechart_styles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes table styles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_table_styles';
  $fe_block_boxes->body = '<h2 class="light bordered">table <span>style 2</span></h2>

<div class="row">
<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2 highlight">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-default btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>
</div>

<div>
<ul class="list-unstyled pricing-table first">
	<li class="table-heading"><span>Treatments</span> <span class="text-right">price</span></li>
	<li class="list-dark"><span>Tummy Tuck</span> <span class="text-right">$155</span></li>
	<li class="list-light"><span>Liposuction</span> <span class="text-right">$120</span></li>
	<li class="list-dark"><span>Cardiac ablation</span> <span class="text-right">$100 - $180</span></li>
	<li class="list-light"><span>Trunk Liposuction</span> <span class="text-right">$135</span></li>
	<li class="list-dark"><span>Colonoscopy</span> <span class="text-right">$600</span></li>
	<li class="list-light"><span>Heart Patient</span> <span class="text-right">$1900</span></li>
</ul>

<ul class="list-unstyled pricing-table">
	<li class="table-heading"><span>Treatments</span> <span class="text-right">price</span></li>
	<li class="list-dark"><span>Body Lift</span> <span class="text-right">$155</span></li>
	<li class="list-light"><span>Thigh Lift</span> <span class="text-right">$120</span></li>
	<li class="list-dark"><span>Arm Lift</span> <span class="text-right">$100 - $180</span></li>
	<li class="list-light"><span>Facelift</span> <span class="text-right">$135</span></li>
	<li class="list-dark"><span>Cardiac ablation</span> <span class="text-right">$600</span></li>
	<li class="list-light"><span>Chin Implant</span> <span class="text-right">$1900</span></li>
</ul>
</div>
';

  $export['block_shortcodes_table_styles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes text style';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_text_style';
  $fe_block_boxes->body = '<h2 class="bordered light">text <span>styles</span></h2>
<div class="row">
    <div class="col-md-4">
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</p>
    </div>
    <div class="col-md-4">
        <p><b>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</b></p>
    </div>
    <div class="col-md-4">
        <p><i>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec nec eros eget nisl fringilla commodo. Maecenas ornare, augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna. Donec eu dolor  augue ut ultricies tristique, enim lectus pretium quam, quis bibendum metus tellus sed magna.</i></p>
    </div>
</div>';

  $export['block_shortcodes_text_style'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcodes toggle styles';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_shortcodes_toggle_styles';
  $fe_block_boxes->body = '<h2 class="light bordered">Toggle Style<span>One</span></h2>
<div class="panel-group accordian-style2" id="accordion2">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title active">
        <a data-toggle="collapse" data-parent="#accordion2" href="#collapse1">
          <i class="fa fa-medkit"></i>our responsibility<i class="fa fa-angle-up pull-right"></i>
        </a>
      </h4>
    </div>
    
    <div id="collapse1" class="panel-collapse collapse in">
      <div class="panel-body">
        Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br /><br />veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde 
sed quia consequuntur.
Page Maker including versions.
      </div>
    </div>
  </div>
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" data-parent="#accordion2" href="#collapse2">
          <i class="fa fa-heart"></i>heart specialist<i class="fa fa-angle-down pull-right"></i>
        </a>
      </h4>
    </div>
    <div id="collapse2" class="panel-collapse collapse">
      <div class="panel-body">
       Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br /><br />veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde 
sed quia consequuntur.
Page Maker including versions.
      </div>
    </div>
  </div>
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" data-parent="#accordion2" href="#collapse3">
          <i class="fa fa-eye"></i>eye specialist<i class="fa fa-angle-down pull-right"></i>
        </a>
      </h4>
    </div>
    <div id="collapse3" class="panel-collapse collapse">
      <div class="panel-body">
        Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br /><br />veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde 
sed quia consequuntur.
Page Maker including versions.
      </div>
    </div>
  </div>
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" data-parent="#accordion2" href="#collapse4">
          <i class="fa fa-mobile"></i>responsive design<i class="fa fa-angle-down pull-right"></i>
        </a>
      </h4>
    </div>
    <div id="collapse4" class="panel-collapse collapse">
      <div class="panel-body">
        Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam.<br /><br />veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit nemo minima rerums unsers sadips amets.  Sed ut perspiciatis unde 
sed quia consequuntur.
Page Maker including versions.
      </div>
    </div>
  </div>
</div>
';

  $export['block_shortcodes_toggle_styles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price header page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_tables_price_header_page';
  $fe_block_boxes->body = '<h1 class="entry-title">Tables</h1>
<p>Etharums ser quidem rerum facilis dolores nemis omnis fugats vitaes nemo minima rerums unsers sadips amets.</p>';

  $export['block_tables_price_header_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_tables_price_table2';
  $fe_block_boxes->body = '<h2 class="light bordered">Table <span>2</span></h2>
<div class="row">
<div class="col-md-6">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-6">
<div class="pricing-table2 highlight">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-default btn-rounded" href="#.">sign up</a></div>
</div>
</div>';

  $export['block_tables_price_table2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_tables_price_table3';
  $fe_block_boxes->body = '<h2 class="light bordered">Table <span>3</span></h2>
<div class="row">
<div class="col-md-4">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-4">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-4">
<div class="pricing-table2 highlight">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-default btn-rounded" href="#.">sign up</a></div>
</div>
</div>';

  $export['block_tables_price_table3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table 4';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_tables_price_table4';
  $fe_block_boxes->body = '<h2 class="light bordered">Table <span>4</span></h2>
<div class="row">
<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2 highlight">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-default btn-rounded" href="#.">sign up</a></div>
</div>

<div class="col-md-3">
<div class="pricing-table2">
<div class="table-heading">
<p class="price"><span>$</span><strong>15</strong>.99</p>

<h3>standard<span>monthly plan</span></h3>
</div>

<ul class="list-unstyled">
	<li>Theme Update</li>
	<li>Most Wanted</li>
	<li>Layerd Photoshop PSD</li>
	<li>5 e-mail Account</li>
	<li>70MB Monthly Traffic</li>
	<li>24/7 Live Support</li>
</ul>
<a class="btn btn-dark btn-rounded" href="#.">sign up</a></div>
</div>
</div>';

  $export['block_tables_price_table4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tables price table style 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_tables_price_table_style2';
  $fe_block_boxes->body = '<h2 class="light bordered">Table <span>style 2</span></h2>

<ul class="list-unstyled pricing-table first">
	<li class="table-heading"><span>Treatments</span> <span class="text-right">price</span></li>
	<li class="list-dark"><span>Tummy Tuck</span> <span class="text-right">$155</span></li>
	<li class="list-light"><span>Liposuction</span> <span class="text-right">$120</span></li>
	<li class="list-dark"><span>Cardiac ablation</span> <span class="text-right">$100 - $180</span></li>
	<li class="list-light"><span>Trunk Liposuction</span> <span class="text-right">$135</span></li>
	<li class="list-dark"><span>Colonoscopy</span> <span class="text-right">$600</span></li>
	<li class="list-light"><span>Heart Patient</span> <span class="text-right">$1900</span></li>
</ul>

<ul class="list-unstyled pricing-table">
	<li class="table-heading"><span>Treatments</span> <span class="text-right">price</span></li>
	<li class="list-dark"><span>Body Lift</span> <span class="text-right">$155</span></li>
	<li class="list-light"><span>Thigh Lift</span> <span class="text-right">$120</span></li>
	<li class="list-dark"><span>Arm Lift</span> <span class="text-right">$100 - $180</span></li>
	<li class="list-light"><span>Facelift</span> <span class="text-right">$135</span></li>
	<li class="list-dark"><span>Cardiac ablation</span> <span class="text-right">$600</span></li>
	<li class="list-light"><span>Chin Implant</span> <span class="text-right">$1900</span></li>
</ul>
';

  $export['block_tables_price_table_style2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top section info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_top_section_info';
  $fe_block_boxes->body = '<div class="top-sec-detail" id="top-sec-detail">
<div class="container">
<div class="row">
<div class="col-md-6">
<ul class="contact-info">
	<li><i class="fa fa-mobile">&nbsp;</i> (+01) 112 345 6789</li>
	<li><i class="fa fa-envelope">&nbsp;</i> <a href="#.">info@medicom.com</a></li>
</ul>
</div>

<div class="col-md-6">
<ul class="social2">
	<li><a href="#."><i class="fa fa-facebook">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-twitter">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-google-plus">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-skype">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-youtube">&nbsp;</i></a></li>
	<li><a href="#."><i class="fa fa-dribbble">&nbsp;</i></a></li>
</ul>
</div>
</div>
</div>
</div>

<p><a class="toggle-btn" href="#." id="toggle-btn"><i class="fa fa-plus">&nbsp;</i></a></p>
';

  $export['block_top_section_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Value';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_value';
  $fe_block_boxes->body = '<div class="about-sec text-center" data-stellar-background-ratio="0.3">
<div class="container">
<h1>about Medicom</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>

<div class="row text-center" id="counters">
<div class="col-md-3">
<div class="counter"><span class="quantity-counter1 highlight">0</span>

<h6 class="counter-details">AWARD SHOWS</h6>
</div>
</div>

<div class="col-md-3">
<div class="counter"><span class="quantity-counter2 highlight">0</span>

<h6 class="counter-details">our staff</h6>
</div>
</div>

<div class="col-md-3">
<div class="counter"><span class="quantity-counter3 highlight">0</span>

<h6 class="counter-details">clinic rooms</h6>
</div>
</div>

<div class="col-md-3">
<div class="counter"><span class="quantity-counter4 highlight">0</span>

<h6 class="counter-details">machines</h6>
</div>
</div>
</div>
</div>
</div>
';

  $export['block_value'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Video block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_video_block';
  $fe_block_boxes->body = '<div class="video-overlay">&nbsp;</div>

<figure><iframe height="225" src="http://player.vimeo.com/video/25708134?autoplay=1?title=0&amp;byline=0&amp;portrait=0" width="400"></iframe></figure>

<div class="container">
<div class="video-inner-content text-center">
<h1>looking for professional design</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod Donec ipsum diam, pretium mollis laoreet dolore magna aliquam erat volutpat.</p>
<a class="btn btn-default btn-rounded" href="#.">Buy now</a></div>
</div>
';

  $export['block_video_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Why choose medicom';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_why_choose_medicom';
  $fe_block_boxes->body = '<div class="container">
<div class="text-center">
<h1 class="light">Why Medicom is so Awesome?</h1>

<p class="lead">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Nam vitae felis pretium, euismod ipsum nec</p>
</div>

<div class="creative-sec-thumb one">
<figure><img alt="" class="img-circle img-thumbnail img-responsive" src="sites/default/files/5.jpg" style="width: 154px; height: 155px;" title="" />
<figcaption>Outpatient Surgery</figcaption>
</figure>
</div>

<div class="creative-sec-thumb two">
<figure><img alt="" class="img-circle img-thumbnail img-responsive" src="sites/default/files/5.jpg" style="width: 266px; height: 266px;" title="" />
<figcaption>Pediatric Clinic</figcaption>
</figure>
</div>

<div class="creative-sec-thumb three">
<figure><img alt="" class="img-circle img-thumbnail img-responsive" src="sites/default/files/5.jpg" style="width: 162px; height: 162px;" title="" />
<figcaption>Primery Health Care</figcaption>
</figure>
</div>

<div class="creative-sec-thumb four">
<figure><img alt="" class="img-circle img-thumbnail img-responsive" src="sites/default/files/5.jpg" style="width: 305px; height: 305px;" title="" />
<figcaption>Cardiac Clinic</figcaption>
</figure>
</div>
</div>
';

  $export['block_why_choose_medicom'] = $fe_block_boxes;

  return $export;
}
