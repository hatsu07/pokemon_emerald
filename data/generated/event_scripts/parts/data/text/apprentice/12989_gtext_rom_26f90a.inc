	@ data/text/apprentice.inc:400 gText_ApprenticeThanksHeldItem10
	.globl gText_Rom_26F90A
gText_Rom_26F90A: @ 0x0826F90A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ それだけは やめとこっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F90A) > 0x5d
	.error "gText_Rom_26F90A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F90A) < 0x5d
	.space 0x5d - (. - gText_Rom_26F90A)
	.endif
