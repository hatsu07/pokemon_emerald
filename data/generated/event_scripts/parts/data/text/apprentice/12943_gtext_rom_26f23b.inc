	@ data/text/apprentice.inc:331 gText_ApprenticeWhatHeldItem6
	.globl gText_Rom_26F23B
gText_Rom_26F23B: @ 0x0826F23B
	.string "よぅ {PLAYER}さん わたしだよ!\nきょうも ひとつ そうだんが あるの\lアドバイス おねがい ねっ!\pジャーン では そうだんです!\nわたしの {STR_VAR_1}に\lなにか どうぐを もたせるなら\lいったい なにに したら いいかな?"
	.byte EOS
	.if (. - gText_Rom_26F23B) > 0x6d
	.error "gText_Rom_26F23B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F23B) < 0x6d
	.space 0x6d - (. - gText_Rom_26F23B)
	.endif
