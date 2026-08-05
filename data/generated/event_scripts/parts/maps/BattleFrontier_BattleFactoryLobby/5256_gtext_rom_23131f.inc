	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:336 BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge
	.globl gText_Rom_23131F
gText_Rom_23131F: @ 0x0823131F
	.string "こちらでは レンタルポケモンを つかった\nバトルトレード シングル という\lイベントを おこなって います!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pたたかいに しょうりすると いちど だけ\nポケモンを トレード できます!\pトレードと たたかいを くりかえし\nみごと 7れんしょう したら\lバトルポイントを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ばあいは\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!"
	.byte EOS
	.if (. - gText_Rom_23131F) > 0x135
	.error "gText_Rom_23131F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23131F) < 0x135
	.space 0x135 - (. - gText_Rom_23131F)
	.endif
