	@ data/text/apprentice.inc:397 gText_ApprenticeThanksNoHeldItem10
	.globl gText_Rom_26F8AD
gText_Rom_26F8AD: @ 0x0826F8AD
	.string "そうか てぶらで いいのね!\nじゃあ なにか もたせようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F8AD) > 0x5d
	.error "gText_Rom_26F8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F8AD) < 0x5d
	.space 0x5d - (. - gText_Rom_26F8AD)
	.endif
