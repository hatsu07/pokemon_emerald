	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:432 BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge
	.globl gText_Rom_2316B7
gText_Rom_2316B7: @ 0x082316B7
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード ダブル という\lイベントを おこなって います\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって ダブルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょうを したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - gText_Rom_2316B7) > 0x133
	.error "gText_Rom_2316B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2316B7) < 0x133
	.space 0x133 - (. - gText_Rom_2316B7)
	.endif
