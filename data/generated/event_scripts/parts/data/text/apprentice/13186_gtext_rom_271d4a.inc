	@ data/text/apprentice.inc:697 gText_ApprenticeWhichMove4
	.globl gText_Rom_271D4A
gText_Rom_271D4A: @ 0x08271D4A
	.string "あら! {PLAYER}{KUN}\nあいたいと おもって いたの!\lわたしの {STR_VAR_1}に ふさわしい わざは\lなにかなー って まよってて……\lあなたが きめて くれない?\pそうね……\n{STR_VAR_2}と {STR_VAR_3}だったら\lどっちが いいと おもう?$"
	.if (. - gText_Rom_271D4A) > 0x6b
	.error "gText_Rom_271D4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271D4A) < 0x6b
	.space 0x6b - (. - gText_Rom_271D4A)
	.endif
