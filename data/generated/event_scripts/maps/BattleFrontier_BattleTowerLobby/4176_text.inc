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
