	@ data/text/trainers.inc:239 Route104_Text_HaleyRematchDefeat (+1 aliases)
	.globl gText_Rom_259FE9
gText_Rom_259FE9: @ 0x08259FE9
	.string "うーん……\nかてると おもったのにな"
	.byte EOS
	.if (. - gText_Rom_259FE9) > 0x13
	.error "gText_Rom_259FE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FE9) < 0x13
	.space 0x13 - (. - gText_Rom_259FE9)
	.endif

	@ data/text/trainers.inc:242 Route104_Text_HaleyPostRematch
	.globl gText_Rom_259FFC
gText_Rom_259FFC: @ 0x08259FFC
	.string "たたかうって じぶんで きめたから\nまけても すっきり してるわ!\p……もちろん まけて くやしいけどね$"
	.if (. - gText_Rom_259FFC) > 0x35
	.error "gText_Rom_259FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FFC) < 0x35
	.space 0x35 - (. - gText_Rom_259FFC)
	.endif
