	@ src/data/script_menu.h:543 script_menu_line_543
	.globl sScriptMenuText_BecomeLeader
sScriptMenuText_BecomeLeader: @ 0x085CAE8C
	.string "リーダーになる{EOS}"
	.if (. - sScriptMenuText_BecomeLeader) > 0x8
	.error "sScriptMenuText_BecomeLeader may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BecomeLeader) < 0x8
	.space 0x8 - (. - sScriptMenuText_BecomeLeader)
	.endif

	@ src/data/script_menu.h:542 script_menu_line_542
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_JoinGroup
sScriptMenuText_JoinGroup: @ 0x085CAE94
	.string "グループにはいる{EOS}"
	.if (. - sScriptMenuText_JoinGroup) != 0x9
	.error "sScriptMenuText_JoinGroup must retain its original byte length"
	.endif
