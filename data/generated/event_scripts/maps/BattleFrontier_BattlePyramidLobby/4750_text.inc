	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:538 BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid
	.globl gText_Rom_22C571
gText_Rom_22C571: @ 0x0822C571
	.string "バトルアドベンチャーは\nピラミッドの なかへ はいり\lちょうじょう せいはを めざす\lぼうけん イベント ですぞ!\pピラミッドの なかは\n7だんの めいろで わかれていて\lうでに おぼえの ある トレーナーと\lやせい ポケモンが まって いますぞ!\pどうぐを もたせて いない\n3ひきの ポケモンと\lおわたしする バトルバッグを もって\lちょうじょうを めざして いただきますぞ!\pこの バトルバッグに いれた どうぐは\nぼうけんに しっぱいすると\lなくなって しまいますので\lおきをつけ くだされ!\pまた ぼうけんを ちゅうだん するときは\n「やすむ」を えらんで おわらせないと\lぼうけんは ちゅうしと なってしまいます!\lじゅうぶん おきをつけ くだされ!$"
	.if (. - gText_Rom_22C571) > 0x14c
	.error "gText_Rom_22C571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C571) < 0x14c
	.space 0x14c - (. - gText_Rom_22C571)
	.endif
