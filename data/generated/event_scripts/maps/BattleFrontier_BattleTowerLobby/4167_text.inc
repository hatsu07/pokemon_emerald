	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1084 BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge
	.globl gText_Rom_221340
gText_Rom_221340: @ 0x08221340
	.string "マルチ バトルルームは タワーに いる\nトレーナーと きょうりょくして\lポケモンを 2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには バトルサロン という\nトレーナーの あつまる へやが\lようい されています!\pここで いっしょに タッグを くみたい\nトレーナーを みつけて ください!\pタッグが くめたところで\nマルチ バトルルームへ おつれします!\pこの マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - gText_Rom_221340) > 0x17c
	.error "gText_Rom_221340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221340) < 0x17c
	.space 0x17c - (. - gText_Rom_221340)
	.endif
