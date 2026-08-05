	@ data/text/apprentice.inc:127 gText_ApprenticeWhichLevelMode6
	.globl gText_Rom_26DAA9
gText_Rom_26DAA9: @ 0x0826DAA9
	.string "わーい さっすが {PLAYER}さん!\nココロひろーい!\lまずは なにから きこうかなー?\l……あっ おもいついた!\pジャーン しつもんです!\nわたしが バトルタワーに いどむなら!\lレベル50のへや! オープンレベルのへや!\lさて どっちが にあっている でしょう?"
	.byte EOS
	.if (. - gText_Rom_26DAA9) > 0x82
	.error "gText_Rom_26DAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DAA9) < 0x82
	.space 0x82 - (. - gText_Rom_26DAA9)
	.endif
