	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1057 BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge: @ 0x08220FE6
	.string "シングル バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge) > 0x1a
	.error "BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1060 BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge: @ 0x08221000
	.string "バトルタワー シングル バトルルームは\n3ひきの ポケモンで\lシングルバトルを おこなう しせつです!\pタワーには シングル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの シングル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge) > 0x126
	.error "BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge) < 0x126
	.space 0x126 - (. - BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1063 BattleFrontier_BattleTowerLobby_Text_SelectThreeMons
	.globl BattleFrontier_BattleTowerLobby_Text_SelectThreeMons
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons: @ 0x08221126
	.string "では さんかする ポケモンを\n3ひき おえらび ください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_SelectThreeMons) > 0x1e
	.error "BattleFrontier_BattleTowerLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_SelectThreeMons) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleTowerLobby_Text_SelectThreeMons)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1066 BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle
	.globl BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle: @ 0x08221144
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは ダブル バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle) > 0x45
	.error "BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle) < 0x45
	.space 0x45 - (. - BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1069 BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge: @ 0x08221189
	.string "ダブル バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge) > 0x19
	.error "BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1072 BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge: @ 0x082211A2
	.string "バトルタワー ダブル バトルルームは\n4ひきの ポケモンで\lダブルバトルを おこなう しせつです!\pタワーには ダブル バトルルーム という\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれの ダブル バトルルームには\n7にんの トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7にんを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge) > 0x122
	.error "BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge) < 0x122
	.space 0x122 - (. - BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1075 BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons
	.globl BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons: @ 0x082212C4
	.string "では さんかする ポケモンを\n4ひき おえらび ください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons) > 0x1e
	.error "BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1078 BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle
	.globl BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle: @ 0x082212E2
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは マルチ バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle) > 0x45
	.error "BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle) < 0x45
	.space 0x45 - (. - BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1081 BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge: @ 0x08221327
	.string "マルチ バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge) > 0x19
	.error "BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1084 BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge: @ 0x08221340
	.string "マルチ バトルルームは タワーに いる\nトレーナーと きょうりょくして\lポケモンを 2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには バトルサロン という\nトレーナーの あつまる へやが\lようい されています!\pここで いっしょに タッグを くみたい\nトレーナーを みつけて ください!\pタッグが くめたところで\nマルチ バトルルームへ おつれします!\pこの マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたの チャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた とちゅうで ちょうせんを\nちゅうだん したい ばあいは しっかりと\lレポートに かいて おわらせないと\lちょうせんは むこうに なってしまうので\lじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge) > 0x17c
	.error "BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge) < 0x17c
	.space 0x17c - (. - BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_2214BC
gText_Rom_2214BC: @ 0x082214BC
	.string "では さんかする ポケモンを\n2ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_2214BC) > 0x1e
	.error "gText_Rom_2214BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2214BC) < 0x1e
	.space 0x1e - (. - gText_Rom_2214BC)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1090 BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle
	.globl BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle: @ 0x082214DA
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは\nつうしんマルチ バトルルームの\lごあんないを しております!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle) > 0x49
	.error "BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle) < 0x49
	.space 0x49 - (. - BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1093 BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge: @ 0x08221523
	.string "つうしんマルチ バトルルームに\nちょうせん されますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge) != 0x1d
	.error "BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge must retain its original byte length"
	.endif
	.globl gText_Rom_221527
	.set gText_Rom_221527, BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge + 0x4
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1096 BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge: @ 0x08221540
	.string "つうしんマルチ バトルルームは\nワイヤレスアダプタや つうしんケーブルを\lつないだ ともだちと ふたりで\lちがう しゅるいの ポケモンを\l2ひきずつ もちより\lマルチバトルで たたかう しせつです!\pタワーないには マルチ バトルルームという\nたいせんの ための へやが\lたくさん ようい されています!\pそれぞれ マルチ バトルルームには\n7くみの タッグ トレーナーが いて\lあなたと ともだちの タッグでの\lチャレンジを まっています!\pみごと その 7くみを たおせたら\nバトルポイントを しんてい いたします!\pまた ほかの しせつと ちがって\nここでは とちゅうで ちょうせんを\lちゅうだん できません!\p7かい れんぞくで たたかうことに なるので\nじゅうぶん ちゅうい してください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge) > 0x15f
	.error "BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge) < 0x15f
	.space 0x15f - (. - BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge)
	.endif
