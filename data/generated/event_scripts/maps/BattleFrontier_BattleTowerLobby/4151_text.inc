	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1060 BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge
	.globl gText_Rom_221000
gText_Rom_221000: @ 0x08221000
	.string "バトルタワー シングル バトルルームは\n3ひきの ポケモンで\lシングルバトルを おこなう しせつです!\pタワーには シングル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの シングル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - gText_Rom_221000) > 0x126
	.error "gText_Rom_221000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221000) < 0x126
	.space 0x126 - (. - gText_Rom_221000)
	.endif
