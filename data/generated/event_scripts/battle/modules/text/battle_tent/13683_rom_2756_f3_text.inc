	@ data/text/battle_tent.inc:333 SlateportCity_BattleTentLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2756F3
gText_Rom_2756F3: @ 0x082756F3
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの ときも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません{EOS}"
	.if (. - gText_Rom_2756F3) != 0x64
	.error "gText_Rom_2756F3 must retain its original byte length"
	.endif
