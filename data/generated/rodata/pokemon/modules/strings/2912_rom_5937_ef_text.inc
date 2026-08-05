	@ src/strings.c:1103 gText_TotalRecordWLD
	.globl gText_Rom_5937EF
gText_Rom_5937EF: @ 0x085937EF
	.string "{STR_VAR_1}しょう {STR_VAR_2}はい {STR_VAR_3}ひきわけ$"
	.if (. - gText_Rom_5937EF) > 0x12
	.error "gText_Rom_5937EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937EF) < 0x12
	.space 0x12 - (. - gText_Rom_5937EF)
	.endif
