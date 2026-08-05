	@ src/strings.c:742 gText_IfLeaderLeavesChatEnds
	.globl gText_Rom_5CC749
gText_Rom_5CC749: @ 0x085CC749
	.string "リーダーが やめると かいさん\nになりますが よろしいですか?$"
	.if (. - gText_Rom_5CC749) > 0x20
	.error "gText_Rom_5CC749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC749) < 0x20
	.space 0x20 - (. - gText_Rom_5CC749)
	.endif
