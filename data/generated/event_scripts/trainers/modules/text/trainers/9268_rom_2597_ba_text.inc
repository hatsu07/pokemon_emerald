	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl gText_Rom_2597BA
gText_Rom_2597BA: @ 0x082597BA
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - gText_Rom_2597BA) > 0x2e
	.error "gText_Rom_2597BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597BA) < 0x2e
	.space 0x2e - (. - gText_Rom_2597BA)
	.endif
