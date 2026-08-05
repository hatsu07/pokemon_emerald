	@ data/text/apprentice.inc:61 gText_ApprenticePleaseTeach1
	.globl gText_Rom_26D14B
gText_Rom_26D14B: @ 0x0826D14B
	.string "うわー! {PLAYER}さん だよね?\nすごく つよい ひと なんだよね?\pボク {STR_VAR_1}!\nトレーナーに なった ばかり なんだ\pねえ おねがい {PLAYER}さん!\nぼくの せんせいに なって\lトレーナーのこと いっぱい おしえてよ!"
	.byte EOS
	.if (. - gText_Rom_26D14B) > 0x6c
	.error "gText_Rom_26D14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D14B) < 0x6c
	.space 0x6c - (. - gText_Rom_26D14B)
	.endif
