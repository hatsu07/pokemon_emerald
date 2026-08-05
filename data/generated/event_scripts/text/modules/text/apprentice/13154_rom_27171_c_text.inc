	@ data/text/apprentice.inc:649 gText_ApprenticeWhichMon12
	.globl gText_Rom_27171C
gText_Rom_27171C: @ 0x0827171C
	.string "ゥワォ {PLAYER}さんじゃなーい!?\nどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pオスっ ひさしぶり ですっ!\nそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\lオレの ポケモン なにに したらいいかな!\p{STR_VAR_1}と {STR_VAR_2}\nどっちが いいか さあ きめて!$"
	.if (. - gText_Rom_27171C) > 0x95
	.error "gText_Rom_27171C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27171C) < 0x95
	.space 0x95 - (. - gText_Rom_27171C)
	.endif
