	@ data/text/match_call.inc:802 MatchCall_Text_Brendan10
	.globl gText_Rom_26B541
gText_Rom_26B541: @ 0x0826B541
	.string "ユウキ『おっ {PLAYER}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みたか?"
	.byte EOS
	.if (. - gText_Rom_26B541) > 0x44
	.error "gText_Rom_26B541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B541) < 0x44
	.space 0x44 - (. - gText_Rom_26B541)
	.endif
