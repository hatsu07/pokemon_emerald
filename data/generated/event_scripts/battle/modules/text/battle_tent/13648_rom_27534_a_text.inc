	@ data/text/battle_tent.inc:230 SlateportCity_BattleTentLobby_Text_ExplainSlateportTent
	.globl gText_Rom_27534A
gText_Rom_27534A: @ 0x0827534A
	.string "バトルテント カイナかいじょうでは\nレンタルポケモンを つかった\lバトルトレード という イベントを\lおこなっています!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの 3ひきの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pみごと たたかいに しょうりすると\nたたかった トレーナーと ポケモンを\lトレード することが できます!\pトレードと たたかいを くりかえし\nみごと 3れんしょう したら\lすてきな しょうひんを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!{EOS}"
	.if (. - gText_Rom_27534A) > 0x153
	.error "gText_Rom_27534A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27534A) < 0x153
	.space 0x153 - (. - gText_Rom_27534A)
	.endif
