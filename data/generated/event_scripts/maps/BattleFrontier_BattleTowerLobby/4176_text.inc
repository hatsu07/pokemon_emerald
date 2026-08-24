	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1093 BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221523
gText_Rom_221523: @ 0x08221523
	.string "つうしんマルチ バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - gText_Rom_221523) != 0x1d
	.error "gText_Rom_221523 must retain its original byte length"
	.endif
	.globl gText_Rom_221527
	.set gText_Rom_221527, gText_Rom_221523 + 0x4
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1096 BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge
	.globl gText_Rom_221540
gText_Rom_221540: @ 0x08221540
	.string "つうしんマルチ バトルルームは\nワイヤレスアダプタや つうしんケーブルを\lつないだ ともだちと ふたりで\lちがう しゅるいの ポケモンを\l2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには マルチ バトルルームという\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれ マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたと ともだちの タッグでの\lチャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた ほかの しせつと ちがって\nここでは とちゅうで ちょうせんを\lちゅうだん できません!\p7かい れんぞくで たたかうことに なるので\nじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - gText_Rom_221540) > 0x15f
	.error "gText_Rom_221540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221540) < 0x15f
	.space 0x15f - (. - gText_Rom_221540)
	.endif
