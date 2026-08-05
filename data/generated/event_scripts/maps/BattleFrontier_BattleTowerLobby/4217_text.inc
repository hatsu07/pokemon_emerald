	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1156 BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221A3E
gText_Rom_221A3E: @ 0x08221A3E
	.string "つうしんマルチ では\nワイヤレスアダプタや つうしんケーブルを\lつないだ ともだちと ふたりで\lちょうせん することが できます\pうけつけで 2ひきを えらびますが\nともだちと おなじ ポケモンでは\lさんかする ことが できません\pまた ここでは たたかいの とちゅうで\nやすむ ことは できません"
	.byte EOS
	.if (. - gText_Rom_221A3E) != 0x96
	.error "gText_Rom_221A3E must retain its original byte length"
	.endif
