<?php

class gsb_hook_xray_drupal7_core_hooks {
  public static function get_hooks_names() {
    // list of Drupal 7 hooks
    // https://api.drupal.org/api/drupal/includes%21module.inc/group/hooks/7
    $core_hooks = array(
      'hook_actions_delete',
      'hook_action_info',
      'hook_action_info_alter',
      'hook_admin_paths',
      'hook_admin_paths_alter',
      'hook_aggregator_fetch',
      'hook_aggregator_fetch_info',
      'hook_aggregator_parse',
      'hook_aggregator_parse_info',
      'hook_aggregator_process',
      'hook_aggregator_process_info',
      'hook_aggregator_remove',
      'hook_ajax_render_alter',
      'hook_archiver_info',
      'hook_archiver_info_alter',
      'hook_batch_alter',
      'hook_block_configure',
      'hook_block_info',
      'hook_block_info_alter',
      'hook_block_list_alter',
      'hook_block_save',
      'hook_block_view',
      'hook_block_view_alter',
      'hook_block_view_MODULE_DELTA_alter',
      'hook_boot',
      'hook_comment_delete',
      'hook_comment_insert',
      'hook_comment_load',
      'hook_comment_presave',
      'hook_comment_publish',
      'hook_comment_unpublish',
      'hook_comment_update',
      'hook_comment_view',
      'hook_comment_view_alter',
      'hook_contextual_links_view_alter',
      'hook_countries_alter',
      'hook_cron',
      'hook_cron_queue_info',
      'hook_cron_queue_info_alter',
      'hook_css_alter',
      'hook_custom_theme',
      'hook_dashboard_regions',
      'hook_dashboard_regions_alter',
      'hook_date_formats',
      'hook_date_formats_alter',
      'hook_date_format_types',
      'hook_date_format_types_alter',
      'hook_delete',
      'hook_disable',
      'hook_drupal_goto_alter',
      'hook_element_info',
      'hook_element_info_alter',
      'hook_enable',
      'hook_entity_delete',
      'hook_entity_info',
      'hook_entity_info_alter',
      'hook_entity_insert',
      'hook_entity_load',
      'hook_entity_prepare_view',
      'hook_entity_presave',
      'hook_entity_query_alter',
      'hook_entity_update',
      'hook_entity_view',
      'hook_entity_view_alter',
      'hook_entity_view_mode_alter',
      'hook_exit',
      'hook_field_access',
      'hook_field_attach_create_bundle',
      'hook_field_attach_delete',
      'hook_field_attach_delete_bundle',
      'hook_field_attach_delete_revision',
      'hook_field_attach_form',
      'hook_field_attach_insert',
      'hook_field_attach_load',
      'hook_field_attach_prepare_translation_alter',
      'hook_field_attach_preprocess_alter',
      'hook_field_attach_presave',
      'hook_field_attach_purge',
      'hook_field_attach_rename_bundle',
      'hook_field_attach_submit',
      'hook_field_attach_update',
      'hook_field_attach_validate',
      'hook_field_attach_view_alter',
      'hook_field_available_languages_alter',
      'hook_field_create_field',
      'hook_field_create_instance',
      'hook_field_delete',
      'hook_field_delete_field',
      'hook_field_delete_instance',
      'hook_field_delete_revision',
      'hook_field_display_alter',
      'hook_field_display_ENTITY_TYPE_alter',
      'hook_field_extra_fields',
      'hook_field_extra_fields_alter',
      'hook_field_extra_fields_display_alter',
      'hook_field_formatter_info',
      'hook_field_formatter_info_alter',
      'hook_field_formatter_prepare_view',
      'hook_field_formatter_view',
      'hook_field_info',
      'hook_field_info_alter',
      'hook_field_info_max_weight',
      'hook_field_insert',
      'hook_field_is_empty',
      'hook_field_language_alter',
      'hook_field_load',
      'hook_field_prepare_translation',
      'hook_field_prepare_view',
      'hook_field_presave',
      'hook_field_purge_field',
      'hook_field_purge_instance',
      'hook_field_read_field',
      'hook_field_read_instance',
      'hook_field_schema',
      'hook_field_storage_create_field',
      'hook_field_storage_delete',
      'hook_field_storage_delete_field',
      'hook_field_storage_delete_instance',
      'hook_field_storage_delete_revision',
      'hook_field_storage_details',
      'hook_field_storage_details_alter',
      'hook_field_storage_info',
      'hook_field_storage_info_alter',
      'hook_field_storage_load',
      'hook_field_storage_pre_insert',
      'hook_field_storage_pre_load',
      'hook_field_storage_pre_update',
      'hook_field_storage_purge',
      'hook_field_storage_purge_field',
      'hook_field_storage_purge_field_instance',
      'hook_field_storage_query',
      'hook_field_storage_update_field',
      'hook_field_storage_write',
      'hook_field_update',
      'hook_field_update_field',
      'hook_field_update_forbid',
      'hook_field_update_instance',
      'hook_field_validate',
      'hook_field_widget_error',
      'hook_field_widget_form',
      'hook_field_widget_form_alter',
      'hook_field_widget_info',
      'hook_field_widget_info_alter',
      'hook_field_widget_properties_alter',
      'hook_field_widget_properties_ENTITY_TYPE_alter',
      'hook_field_widget_WIDGET_TYPE_form_alter',
      'hook_filetransfer_info',
      'hook_filetransfer_info_alter',
      'hook_file_copy',
      'hook_file_delete',
      'hook_file_download',
      'hook_file_insert',
      'hook_file_load',
      'hook_file_mimetype_mapping_alter',
      'hook_file_move',
      'hook_file_presave',
      'hook_file_update',
      'hook_file_url_alter',
      'hook_file_validate',
      'hook_filter_format_disable',
      'hook_filter_format_insert',
      'hook_filter_format_update',
      'hook_filter_info',
      'hook_filter_info_alter',
      'hook_flush_caches',
      'hook_form',
      'hook_forms',
      'hook_form_alter',
      'hook_form_BASE_FORM_ID_alter',
      'hook_form_FORM_ID_alter',
      'hook_help',
      'hook_hook_info',		
      'hook_hook_info_alter',
      'hook_html_head_alter',
      'hook_image_default_styles',
      'hook_image_effect_info',
      'hook_image_effect_info_alter',
      'hook_image_styles_alter',
      'hook_image_style_delete',
      'hook_image_style_flush',
      'hook_image_style_save',
      'hook_image_toolkits',
      'hook_info',		
      'hook_init',
      'hook_insert',
      'hook_install',
      'hook_install_tasks',
      'hook_install_tasks_alter',
      'hook_js_alter',
      'hook_language_fallback_candidates_alter',
      'hook_language_init',
      'hook_language_negotiation_info',
      'hook_language_negotiation_info_alter',
      'hook_language_switch_links_alter',
      'hook_language_types_info',
      'hook_language_types_info_alter',
      'hook_library',
      'hook_library_alter',
      'hook_load',
      'hook_locale',
      'hook_mail',
      'hook_mail_alter',
      'hook_menu',
      'hook_menu_alter',
      'hook_menu_breadcrumb_alter',
      'hook_menu_contextual_links_alter',
      'hook_menu_delete',
      'hook_menu_get_item_alter',
      'hook_menu_insert',
      'hook_menu_link_alter',
      'hook_menu_link_delete',
      'hook_menu_link_insert',
      'hook_menu_link_update',
      'hook_menu_local_tasks_alter',
      'hook_menu_site_status_alter',
      'hook_menu_update',
      'hook_modules_disabled',
      'hook_modules_enabled',
      'hook_modules_installed',
      'hook_modules_uninstalled',
      'hook_module_implements_alter',
      'hook_multilingual_settings_changed',
      'hook_node_access',
      'hook_node_access_records',
      'hook_node_access_records_alter',
      'hook_node_delete',
      'hook_node_grants',
      'hook_node_grants_alter',
      'hook_node_info',
      'hook_node_insert',
      'hook_node_load',
      'hook_node_operations',
      'hook_node_prepare',
      'hook_node_presave',
      'hook_node_revision_delete',
      'hook_node_search_result',
      'hook_node_submit',
      'hook_node_type_delete',
      'hook_node_type_insert',
      'hook_node_type_update',
      'hook_node_update',
      'hook_node_update_index',
      'hook_node_validate',
      'hook_node_view',
      'hook_node_view_alter',
      'hook_openid',
      'hook_openid_discovery_method_info',
      'hook_openid_discovery_method_info_alter',
      'hook_openid_normalization_method_info',
      'hook_openid_normalization_method_info_alter',
      'hook_openid_response',
      'hook_overlay_child_initialize',
      'hook_overlay_parent_initialize',
      'hook_page_alter',
      'hook_page_build',
      'hook_page_delivery_callback_alter',
      'hook_path_delete',
      'hook_path_insert',
      'hook_path_update',
      'hook_permission',
      'hook_prepare',
      'hook_query_alter',
      'hook_query_TAG_alter',
      'hook_ranking',
      'hook_rdf_mapping',
      'hook_rdf_namespaces',
      'hook_registry_files_alter',
      'hook_requirements',
      'hook_schema',
      'hook_schema_alter',
      'hook_search_access',
      'hook_search_admin',
      'hook_search_execute',
      'hook_search_info',
      'hook_search_page',
      'hook_search_preprocess',
      'hook_search_reset',
      'hook_search_status',
      'hook_shortcut_default_set',
      'hook_simpletest_alter',
      'hook_stream_wrappers',
      'hook_stream_wrappers_alter',
      'hook_system_info_alter',
      'hook_system_themes_page_alter',
      'hook_system_theme_info',
      'hook_taxonomy_term_delete',
      'hook_taxonomy_term_insert',
      'hook_taxonomy_term_load',
      'hook_taxonomy_term_presave',
      'hook_taxonomy_term_update',
      'hook_taxonomy_term_view',
      'hook_taxonomy_term_view_alter',
      'hook_taxonomy_vocabulary_delete',
      'hook_taxonomy_vocabulary_insert',
      'hook_taxonomy_vocabulary_load',
      'hook_taxonomy_vocabulary_presave',
      'hook_taxonomy_vocabulary_update',
      'hook_test_finished',
      'hook_test_group_finished',
      'hook_test_group_started',
      'hook_theme',
      'hook_theme_registry_alter',
      'hook_tokens',
      'hook_tokens_alter',
      'hook_token_info',
      'hook_token_info_alter',
      'hook_translated_menu_link_alter',
      'hook_trigger_info',
      'hook_trigger_info_alter',
      'hook_uninstall',
      'hook_update',
      'hook_updater_info',
      'hook_updater_info_alter',
      'hook_update_dependencies',
      'hook_update_index',
      'hook_update_last_removed',
      'hook_update_N',
      'hook_update_projects_alter',
      'hook_update_status_alter',
      'hook_url_inbound_alter',
      'hook_url_outbound_alter',
      'hook_username_alter',
      'hook_user_cancel',
      'hook_user_cancel_methods_alter',
      'hook_user_categories',
      'hook_user_delete',
      'hook_user_insert',
      'hook_user_load',
      'hook_user_login',
      'hook_user_logout',
      'hook_user_operations',
      'hook_user_presave',
      'hook_user_role_delete',
      'hook_user_role_insert',
      'hook_user_role_presave',
      'hook_user_role_update',
      'hook_user_update',
      'hook_user_view',
      'hook_user_view_alter',
      'hook_validate',
      'hook_verify_update_archive',
      'hook_view',
      'hook_watchdog',
      'hook_xmlrpc',
      'hook_xmlrpc_alter',
    );
    return $core_hooks;
  }
}
