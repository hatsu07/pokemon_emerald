	@ data/text/trainers.inc:881 Route110_Text_AlyssaPostBattle
	.globl gText_Rom_25B99C
gText_Rom_25B99C: @ 0x0825B99C
	.string "おっこちるは まけるはで\nはずかし すぎます! わたし!{EOS}"
	.if (. - gText_Rom_25B99C) > 0x1d
	.error "gText_Rom_25B99C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B99C) < 0x1d
	.space 0x1d - (. - gText_Rom_25B99C)
	.endif
