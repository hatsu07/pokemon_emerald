	@ data/text/trainers.inc:175 Route103_Text_MarcosPostBattle
	.globl gText_Rom_259C8E
gText_Rom_259C8E: @ 0x08259C8E
	.string "ひとの すくない ところで\nギターを ひいていたのに\lこんなにも あつまって きたぜ!\pぷ プロを めざして みるか!"
	.byte EOS
	.if (. - gText_Rom_259C8E) > 0x3c
	.error "gText_Rom_259C8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C8E) < 0x3c
	.space 0x3c - (. - gText_Rom_259C8E)
	.endif
