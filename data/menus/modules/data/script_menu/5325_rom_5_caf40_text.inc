	@ src/data/script_menu.h:689 gText_BasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BasicRules
sScriptMenuText_BasicRules: @ 0x085CAF40
	.string "きほんルール{EOS}"
	.if (. - sScriptMenuText_BasicRules) != 0x7
	.error "sScriptMenuText_BasicRules must retain its original byte length"
	.endif
