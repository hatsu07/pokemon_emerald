	@ data/text/trainers.inc:221 Route104_Text_HaleyIntro (+1 aliases)
	.globl gText_Rom_259EF6
gText_Rom_259EF6: @ 0x08259EF6
	.string "しょうぶ しようかな……\nやめとこうかな……\pえーい! たたかっちゃえ!"
	.byte EOS
	.if (. - gText_Rom_259EF6) > 0x25
	.error "gText_Rom_259EF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EF6) < 0x25
	.space 0x25 - (. - gText_Rom_259EF6)
	.endif
