	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl gText_Rom_259922
gText_Rom_259922: @ 0x08259922
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - gText_Rom_259922) > 0x2e
	.error "gText_Rom_259922 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259922) < 0x2e
	.space 0x2e - (. - gText_Rom_259922)
	.endif
