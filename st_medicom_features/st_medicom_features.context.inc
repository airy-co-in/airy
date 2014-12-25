<?php
/**
 * @file
 * st_medicom_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function st_medicom_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = 'About Us';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-clinic-block' => array(
          'module' => 'views',
          'delta' => 'clinic-block',
          'region' => 'news_content',
          'weight' => '-10',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'news_content_right',
          'weight' => '-10',
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('about');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us_2';
  $context->description = 'About Us 2';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us-2' => 'about-us-2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'news_content',
          'weight' => '-10',
        ),
        'block-25' => array(
          'module' => 'block',
          'delta' => '25',
          'region' => 'news_content_right',
          'weight' => '-10',
        ),
        'views-members-block' => array(
          'module' => 'views',
          'delta' => 'members-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us 2');
  t('about');
  $export['about_us_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'appointment';
  $context->description = '';
  $context->tag = 'Appointment';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'appointment' => 'appointment',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Appointment');
  $export['appointment'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_2_column';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog-2-column' => 'blog-2-column',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-52' => array(
          'module' => 'block',
          'delta' => '52',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog_2_column'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detaill';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-53' => array(
          'module' => 'block',
          'delta' => '53',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blog_detaill'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blogs';
  $context->description = '';
  $context->tag = 'blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs' => 'blogs',
        'blog-single-post' => 'blog-single-post',
        'post-by-date/*' => 'post-by-date/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-52' => array(
          'module' => 'block',
          'delta' => '52',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-categories-block_2' => array(
          'module' => 'views',
          'delta' => 'categories-block_2',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-22',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blogs');
  $export['blogs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cart';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'cart' => 'cart',
        'cart/*' => 'cart/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-60' => array(
          'module' => 'block',
          'delta' => '60',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['cart'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = 'contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-57' => array(
          'module' => 'block',
          'delta' => '57',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-56' => array(
          'module' => 'block',
          'delta' => '56',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-58' => array(
          'module' => 'block',
          'delta' => '58',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact');
  $export['contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'department';
  $context->description = '';
  $context->tag = 'department';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'department' => 'department',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-55' => array(
          'module' => 'block',
          'delta' => '55',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-home_info-block' => array(
          'module' => 'views',
          'delta' => 'home_info-block',
          'region' => 'content_top_2',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content_top_2',
          'weight' => '-9',
        ),
        'views-home_info-block_1' => array(
          'module' => 'views',
          'delta' => 'home_info-block_1',
          'region' => 'content_top_2',
          'weight' => '-8',
        ),
        'views-department-block_1' => array(
          'module' => 'views',
          'delta' => 'department-block_1',
          'region' => 'content',
          'weight' => '45',
        ),
        'views-department_price-block' => array(
          'module' => 'views',
          'delta' => 'department_price-block',
          'region' => 'content',
          'weight' => '46',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('department');
  $export['department'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'error404';
  $context->description = '';
  $context->tag = 'error';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'error404' => 'error404',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-32' => array(
          'module' => 'block',
          'delta' => '32',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('error');
  $export['error404'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery';
  $context->description = '';
  $context->tag = 'gallery';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gallery' => 'gallery',
        'gallery2' => 'gallery2',
        'gallery3' => 'gallery3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-50' => array(
          'module' => 'block',
          'delta' => '50',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('gallery');
  $export['gallery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-front-banner-header' => array(
          'module' => 'md_slider',
          'delta' => 'front-banner-header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-home_info-block' => array(
          'module' => 'views',
          'delta' => 'home_info-block',
          'region' => 'content',
          'weight' => '-5',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-home_info-block_1' => array(
          'module' => 'views',
          'delta' => 'home_info-block_1',
          'region' => 'content',
          'weight' => '-2',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content',
          'weight' => '-1',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'news_content',
          'weight' => '-10',
        ),
        'views-doctor-block' => array(
          'module' => 'views',
          'delta' => 'doctor-block',
          'region' => 'news_content_right',
          'weight' => '-10',
        ),
        'views-treatment_list-block' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block',
          'region' => 'news_content_right',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-patients_say-block' => array(
          'module' => 'views',
          'delta' => 'patients_say-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home2';
  $context->description = 'Home page 2';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'front2' => 'front2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'top_sec',
          'weight' => '-10',
        ),
        'md_slider-md-slider-537e221301b82' => array(
          'module' => 'md_slider',
          'delta' => 'md-slider-537e221301b82',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-patients_say-block' => array(
          'module' => 'views',
          'delta' => 'patients_say-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page 2');
  t('home');
  $export['home2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home3';
  $context->description = 'Home page 3';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'front3' => 'front3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-md-slider-53816b3050406' => array(
          'module' => 'md_slider',
          'delta' => 'md-slider-53816b3050406',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'content_top',
          'weight' => '-27',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'content_top',
          'weight' => '-26',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content_top',
          'weight' => '-25',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'content_top',
          'weight' => '-24',
        ),
        'views-clinic-block' => array(
          'module' => 'views',
          'delta' => 'clinic-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'news_content',
          'weight' => '-10',
        ),
        'views-patients_say-block_1' => array(
          'module' => 'views',
          'delta' => 'patients_say-block_1',
          'region' => 'news_content',
          'weight' => '-9',
        ),
        'block-20' => array(
          'module' => 'block',
          'delta' => '20',
          'region' => 'news_content_right',
          'weight' => '-10',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => '19',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page 3');
  t('home');
  $export['home3'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home4';
  $context->description = 'Home page 4';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'front4' => 'front4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-md-slider-53816b3050406' => array(
          'module' => 'md_slider',
          'delta' => 'md-slider-53816b3050406',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-patients_say-block' => array(
          'module' => 'views',
          'delta' => 'patients_say-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page 4');
  t('home');
  $export['home4'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home5';
  $context->description = 'Home page 5';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'front5' => 'front5',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'md_slider-md-slider-53816b3050406' => array(
          'module' => 'md_slider',
          'delta' => 'md-slider-53816b3050406',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'views-home_info-block' => array(
          'module' => 'views',
          'delta' => 'home_info-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-home_info-block_1' => array(
          'module' => 'views',
          'delta' => 'home_info-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'views-members-block' => array(
          'module' => 'views',
          'delta' => 'members-block',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'news_content',
          'weight' => '-10',
        ),
        'views-doctor-block' => array(
          'module' => 'views',
          'delta' => 'doctor-block',
          'region' => 'news_content_right',
          'weight' => '-10',
        ),
        'views-treatment_list-block' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block',
          'region' => 'news_content_right',
          'weight' => '-9',
        ),
        'views-patients_say-block' => array(
          'module' => 'views',
          'delta' => 'patients_say-block',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page 5');
  t('home');
  $export['home5'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'meet_team';
  $context->description = '';
  $context->tag = 'team';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'meet-team' => 'meet-team',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('team');
  $export['meet_team'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'memeber_detail';
  $context->description = '';
  $context->tag = 'Member';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'member-detail' => 'member-detail',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-46' => array(
          'module' => 'block',
          'delta' => '46',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Member');
  $export['memeber_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'patients_families';
  $context->description = 'Patients and families';
  $context->tag = 'patient';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'patients-and-families' => 'patients-and-families',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Patients and families');
  t('patient');
  $export['patients_families'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'portfolio' => 'portfolio',
        'portfolio2' => 'portfolio2',
        'portfolio3' => 'portfolio3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-51' => array(
          'module' => 'block',
          'delta' => '51',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');
  $export['portfolio'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'procedures';
  $context->description = '';
  $context->tag = 'procedures';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'procedures' => 'procedures',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-54' => array(
          'module' => 'block',
          'delta' => '54',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'procedures-procedures_list' => array(
          'module' => 'procedures',
          'delta' => 'procedures_list',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('procedures');
  $export['procedures'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-59' => array(
          'module' => 'block',
          'delta' => '59',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-shop-block_1' => array(
          'module' => 'views',
          'delta' => 'shop-block_1',
          'region' => 'content',
          'weight' => '40',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'uc_cart-cart' => array(
          'module' => 'uc_cart',
          'delta' => 'cart',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-categories-block_3' => array(
          'module' => 'views',
          'delta' => 'categories-block_3',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'poll-recent' => array(
          'module' => 'poll',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['product'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'research';
  $context->description = '';
  $context->tag = 'research';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'research' => 'research',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-48' => array(
          'module' => 'block',
          'delta' => '48',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-47' => array(
          'module' => 'block',
          'delta' => '47',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-49' => array(
          'module' => 'block',
          'delta' => '49',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('research');
  $export['research'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services';
  $context->description = '';
  $context->tag = 'service';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services' => 'services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'content_bottom2',
          'weight' => '-10',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'content_bottom2',
          'weight' => '-9',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content_bottom2',
          'weight' => '-8',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'content_bottom2',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('service');
  $export['services'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shop';
  $context->description = '';
  $context->tag = 'shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shop' => 'shop',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shop-block_2' => array(
          'module' => 'views',
          'delta' => 'shop-block_2',
          'region' => 'content_top_2',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-54',
        ),
        'uc_cart-cart' => array(
          'module' => 'uc_cart',
          'delta' => 'cart',
          'region' => 'sidebar_second',
          'weight' => '-53',
        ),
        'views-categories-block_3' => array(
          'module' => 'views',
          'delta' => 'categories-block_3',
          'region' => 'sidebar_second',
          'weight' => '-52',
        ),
        'views-60ee814145657eab1441f678c7dd5a9d' => array(
          'module' => 'views',
          'delta' => '60ee814145657eab1441f678c7dd5a9d',
          'region' => 'sidebar_second',
          'weight' => '-51',
        ),
        'poll-recent' => array(
          'module' => 'poll',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),
        'views-treatment_list-block_1' => array(
          'module' => 'views',
          'delta' => 'treatment_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-49',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shop');
  $export['shop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shortcodes';
  $context->description = '';
  $context->tag = 'shortcodes';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shortcodes' => 'shortcodes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-34' => array(
          'module' => 'block',
          'delta' => '34',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-35' => array(
          'module' => 'block',
          'delta' => '35',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-37' => array(
          'module' => 'block',
          'delta' => '37',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-38' => array(
          'module' => 'block',
          'delta' => '38',
          'region' => 'content',
          'weight' => '-6',
        ),
        'block-39' => array(
          'module' => 'block',
          'delta' => '39',
          'region' => 'content',
          'weight' => '-5',
        ),
        'block-40' => array(
          'module' => 'block',
          'delta' => '40',
          'region' => 'content',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shortcodes');
  $export['shortcodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tables_price';
  $context->description = 'Tables price page';
  $context->tag = 'tables';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tables' => 'tables',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'block-42' => array(
          'module' => 'block',
          'delta' => '42',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-43' => array(
          'module' => 'block',
          'delta' => '43',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-44' => array(
          'module' => 'block',
          'delta' => '44',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-45' => array(
          'module' => 'block',
          'delta' => '45',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tables price page');
  t('tables');
  $export['tables_price'] = $context;

  return $export;
}
