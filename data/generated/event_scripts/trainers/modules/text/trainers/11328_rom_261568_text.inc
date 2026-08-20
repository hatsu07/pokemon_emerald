	@ data/text/trainers.inc:3071 Route129_Text_AllisonIntro (+1 aliases)
	.globl gText_Rom_261568
gText_Rom_261568: @ 0x08261568
	.string "トライアスロンの とちゅう だけど……\nポケモンしょうぶを しようよ!{EOS}"
	.if (. - gText_Rom_261568) > 0x24
	.error "gText_Rom_261568 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261568) < 0x24
	.space 0x24 - (. - gText_Rom_261568)
	.endif
