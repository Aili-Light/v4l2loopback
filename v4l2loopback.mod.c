#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0xde4c1a24, "param_ops_charp" },
	{ 0xededc3c3, "param_ops_bool" },
	{ 0xa3bf6975, "param_array_ops" },
	{ 0x5ab5b891, "param_ops_int" },
	{ 0x8905d75f, "video_ioctl2" },
	{ 0x944a1bf0, "v4l2_event_unsubscribe" },
	{ 0xcd5bfa2c, "nonseekable_open" },
	{ 0x484ece0d, "noop_llseek" },
	{ 0x38e946e0, "misc_deregister" },
	{ 0xe582fa0, "misc_register" },
	{ 0xb061a98a, "mutex_lock_killable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe6257e29, "_dev_err" },
	{ 0xebcd9457, "device_create_file" },
	{ 0x282da2ef, "__video_register_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x42933ccd, "v4l2_ctrl_handler_setup" },
	{ 0x5caede96, "v4l2_ctrl_new_custom" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf5d6462f, "v4l2_ctrl_handler_init_class" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe6f74edf, "video_device_release" },
	{ 0x54677b1a, "video_device_alloc" },
	{ 0xe8f4e12b, "v4l2_device_register" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd9f20cff, "vm_insert_page" },
	{ 0xcc78395e, "vmalloc_to_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5d114f, "v4l2_fh_add" },
	{ 0x45dfa4f6, "v4l2_fh_init" },
	{ 0xf5cb25c8, "kmem_cache_alloc_trace" },
	{ 0x35216b26, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7d108ab9, "v4l2_event_pending" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcf5f55e0, "v4l2_fh_exit" },
	{ 0xa7ff5619, "v4l2_fh_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x30b7bde1, "video_devdata" },
	{ 0x630014ec, "v4l2_ctrl_subscribe_event" },
	{ 0x36e58bcd, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xb12f10e5, "v4l2_ctrl_handler_free" },
	{ 0x57c32fc7, "v4l2_device_unregister" },
	{ 0xd5b2a1ae, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x86c4adbd, "device_remove_file" },
	{ 0x999e8297, "vfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "448225F86E5949CD720F598");
