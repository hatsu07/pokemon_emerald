	@ data/text/apprentice.inc:421 gText_ApprenticeWhatHeldItem12
	.globl gText_Rom_26FAF3
gText_Rom_26FAF3: @ 0x0826FAF3
	.string "オッケ {PLAYER}さん!\nきょうも みつけたぜェ!\lどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pって {PLAYER}さん オレのこと そろそろ\nきらいに なってる!? なってない!!\lそうだんが あるんだけど きいてェ!\pオレの {STR_VAR_1} なんだけど\nいい どうぐを もたせたいんだ!\lなにが いいか さあ きめて!"
	.byte EOS
	.if (. - gText_Rom_26FAF3) > 0xa3
	.error "gText_Rom_26FAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAF3) < 0xa3
	.space 0xa3 - (. - gText_Rom_26FAF3)
	.endif
