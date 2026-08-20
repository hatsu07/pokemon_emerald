	@ data/text/move_tutors.inc:18 MoveTutor_Text_SwaggerWhichMon
	.globl gText_Rom_276010
gText_Rom_276010: @ 0x08276010
	.string "おう!\nどの ポケモンが いばりたいんだ?{EOS}"
	.if (. - gText_Rom_276010) > 0x16
	.error "gText_Rom_276010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276010) < 0x16
	.space 0x16 - (. - gText_Rom_276010)
	.endif
