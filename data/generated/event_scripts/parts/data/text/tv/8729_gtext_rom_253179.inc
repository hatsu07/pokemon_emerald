	@ data/text/tv.inc:1204 GabbyAndTy_Text_PerfectWellBeSeeingYou
	.globl gText_Rom_253179
gText_Rom_253179: @ 0x08253179
	.string "マリ『んー!\nさいこうの きめゼリフね\pなんか いいテレビばんぐみが\nできそうな よかん!\pもしかしたら このことを\nテレビで ほうそうするかも しれないから\lテレビの チェックを わすれないでね!\pそれじゃあ\nまた どこかで!"
	.byte EOS
	.if (. - gText_Rom_253179) > 0x73
	.error "gText_Rom_253179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253179) < 0x73
	.space 0x73 - (. - gText_Rom_253179)
	.endif
