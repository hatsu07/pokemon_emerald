	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1072 BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge
	.globl gText_Rom_2211A2
gText_Rom_2211A2: @ 0x082211A2
	.string "バトルタワー ダブル バトルルームは\n4ひきの ポケモンで\lダブルバトルを おこなう しせつです!\pタワーには ダブル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの ダブル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - gText_Rom_2211A2) > 0x122
	.error "gText_Rom_2211A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2211A2) < 0x122
	.space 0x122 - (. - gText_Rom_2211A2)
	.endif
