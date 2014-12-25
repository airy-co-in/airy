<?php
/**
 * @file
 * st_medicom_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function st_medicom_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function st_medicom_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function st_medicom_features_image_default_styles() {
  $styles = array();

  // Exported image style: clinic_458x242_.
  $styles['clinic_458x242_'] = array(
    'name' => 'clinic_458x242_',
    'label' => 'Clinic(458x242)',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 458,
          'height' => 242,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: department_image_width_400.
  $styles['department_image_width_400'] = array(
    'name' => 'department_image_width_400',
    'label' => 'Department image (width 400)',
    'effects' => array(
      24 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: doctor_170x170.
  $styles['doctor_170x170'] = array(
    'name' => 'doctor_170x170',
    'label' => 'Doctor(170x170)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_portfolio_264x201.
  $styles['gallery_portfolio_264x201'] = array(
    'name' => 'gallery_portfolio_264x201',
    'label' => 'gallery portfolio(264x201)',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 264,
          'height' => 201,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_portfolio_363x276.
  $styles['gallery_portfolio_363x276'] = array(
    'name' => 'gallery_portfolio_363x276',
    'label' => 'gallery portfolio(363x276)',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 363,
          'height' => 276,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_portfolio_553x276.
  $styles['gallery_portfolio_553x276'] = array(
    'name' => 'gallery_portfolio_553x276',
    'label' => 'gallery portfolio(553x276)',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 553,
          'height' => 276,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: md_slider_10_thumb.
  $styles['md_slider_10_thumb'] = array(
    'name' => 'md_slider_10_thumb',
    'label' => 'md_slider_10_thumb',
    'effects' => array(
      23 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_2_thumb.
  $styles['md_slider_2_thumb'] = array(
    'name' => 'md_slider_2_thumb',
    'label' => 'md_slider_2_thumb',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_3_thumb.
  $styles['md_slider_3_thumb'] = array(
    'name' => 'md_slider_3_thumb',
    'label' => 'md_slider_3_thumb',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_4_thumb.
  $styles['md_slider_4_thumb'] = array(
    'name' => 'md_slider_4_thumb',
    'label' => 'md_slider_4_thumb',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_5_bg.
  $styles['md_slider_5_bg'] = array(
    'name' => 'md_slider_5_bg',
    'label' => 'md_slider_5_bg',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 474,
          'height' => 331,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_6_bg.
  $styles['md_slider_6_bg'] = array(
    'name' => 'md_slider_6_bg',
    'label' => 'md_slider_6_bg',
    'effects' => array(
      18 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 474,
          'height' => 331,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_6_thumb.
  $styles['md_slider_6_thumb'] = array(
    'name' => 'md_slider_6_thumb',
    'label' => 'md_slider_6_thumb',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_8_thumb.
  $styles['md_slider_8_thumb'] = array(
    'name' => 'md_slider_8_thumb',
    'label' => 'md_slider_8_thumb',
    'effects' => array(
      21 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_9_thumb.
  $styles['md_slider_9_thumb'] = array(
    'name' => 'md_slider_9_thumb',
    'label' => 'md_slider_9_thumb',
    'effects' => array(
      22 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: member_234x271_.
  $styles['member_234x271_'] = array(
    'name' => 'member_234x271_',
    'label' => 'Member(234x271)',
    'effects' => array(
      19 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 234,
          'height' => 271,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: member_350.
  $styles['member_350'] = array(
    'name' => 'member_350',
    'label' => 'Member(350x350)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: member_531x470_.
  $styles['member_531x470_'] = array(
    'name' => 'member_531x470_',
    'label' => 'Member(531x470)',
    'effects' => array(
      20 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 531,
          'height' => 470,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_720.
  $styles['news_720'] = array(
    'name' => 'news_720',
    'label' => 'News(720)',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_96x96.
  $styles['news_96x96'] = array(
    'name' => 'news_96x96',
    'label' => 'news(96x96)',
    'effects' => array(
      25 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 96,
          'height' => 96,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: patient_83x83.
  $styles['patient_83x83'] = array(
    'name' => 'patient_83x83',
    'label' => 'Patient(83x83)',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 83,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_list_224x268.
  $styles['product_list_224x268'] = array(
    'name' => 'product_list_224x268',
    'label' => 'Product List (224x268)',
    'effects' => array(
      26 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 236,
          'height' => 282,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_slideshow_554x456.
  $styles['product_slideshow_554x456'] = array(
    'name' => 'product_slideshow_554x456',
    'label' => 'Product Slideshow (554x456)',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 554,
          'height' => 456,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_blog_recent_post.
  $styles['thumbnail_blog_recent_post'] = array(
    'name' => 'thumbnail_blog_recent_post',
    'label' => 'thumbnail blog recent post(71x64)',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 71,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_blog_single_post_555x399.
  $styles['thumbnail_blog_single_post_555x399'] = array(
    'name' => 'thumbnail_blog_single_post_555x399',
    'label' => 'thumbnail_blog_single_post(555x399)',
    'effects' => array(
      15 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 399,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_blog_single_post_750.
  $styles['thumbnail_blog_single_post_750'] = array(
    'name' => 'thumbnail_blog_single_post_750',
    'label' => 'thumbnail_blog_single_post(750x372)',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 372,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_user_picture.
  $styles['thumbnail_user_picture'] = array(
    'name' => 'thumbnail_user_picture',
    'label' => 'thumbnail_user_picture',
    'effects' => array(
      27 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 78,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_install().
 */
function st_medicom_features_install() {
$sliders = array(
  1 => array(
    'slid' => 1,
    'title' => 'Front banner header',
    'description' => '',
    'machine_name' => 'front-banner-header',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1320";s:6:"height";s:3:"682";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:62:"http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,700";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  2 => array(
    'slid' => 2,
    'title' => 'Front 2',
    'description' => '',
    'machine_name' => 'md-slider-537e221301b82',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1320";s:6:"height";s:3:"682";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"2";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:62:"http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,700";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  4 => array(
    'slid' => 4,
    'title' => 'Front 3',
    'description' => '',
    'machine_name' => 'md-slider-53816b3050406',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1320";s:6:"height";s:3:"682";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"2";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:62:"http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,700";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  5 => array(
    'slid' => 5,
    'title' => 'About slider',
    'description' => 'About slider',
    'machine_name' => 'about-slider',
    'settings' => 'a:27:{s:10:"full_width";i:0;s:5:"width";s:3:"474";s:6:"height";s:3:"331";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"2";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:1;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  6 => array(
    'slid' => 6,
    'title' => 'Patients & families',
    'description' => '',
    'machine_name' => 'md-slider-5387cf1508589',
    'settings' => 'a:27:{s:10:"full_width";i:0;s:5:"width";s:3:"474";s:6:"height";s:3:"331";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"2";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:1;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
  10 => array(
    'slid' => 10,
    'title' => 'Research',
    'description' => '',
    'machine_name' => 'md-slider-53897c9c380be',
    'settings' => 'a:27:{s:10:"full_width";i:1;s:5:"width";s:4:"1140";s:6:"height";s:3:"408";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:0;s:9:"auto_play";i:1;s:11:"show_bullet";i:1;s:15:"bullet_position";s:1:"2";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:62:"http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,700";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
);
foreach ($sliders as $slider) {
	$slider = (object)$slider;
	$slider = _md_slider_recast('MDSlider',$slider);
	$slider->slid = NULL;

	$slider->save();
}
}

/**
 * Implements hook_node_info().
 */
function st_medicom_features_node_info() {
  $items = array(
    'appointment' => array(
      'name' => t('Appointment'),
      'base' => 'node_content',
      'description' => t('Make an appointment'),
      'has_title' => '1',
      'title_label' => t('First Name'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'clinic' => array(
      'name' => t('Clinic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => t('Make an department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'doctor' => array(
      'name' => t('Doctor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'empty_page' => array(
      'name' => t('Empty page'),
      'base' => 'node_content',
      'description' => t('Create empty page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'member' => array(
      'name' => t('Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'node_slideshow' => array(
      'name' => t('Node slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'node_video' => array(
      'name' => t('Node video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patient' => array(
      'name' => t('Patient'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Make portfolio'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'procedures' => array(
      'name' => t('Procedures'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_uc_product_default_classes().
 */
function st_medicom_features_uc_product_default_classes() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'uc_product',
      'description' => t('Use <em>products</em> to represent items for sale on the website, including all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
