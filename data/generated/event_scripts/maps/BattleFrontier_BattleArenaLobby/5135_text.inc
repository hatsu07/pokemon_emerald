	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:359 BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
	.globl BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena: @ 0x0822F6F9
	.string "トレーナーの とうしを ためす ばしょ!!\pバトルアリーナへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena) > 0x4e
	.error "BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena) < 0x4e
	.space 0x4e - (. - BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:365 BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	.globl BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge: @ 0x0822F747
	.string "バトルアリーナに\nちょうせん されますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge) > 0x17
	.error "BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22F75E
gText_Rom_22F75E: @ 0x0822F75E
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F75E) > 0x18
	.error "gText_Rom_22F75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F75E) < 0x18
	.space 0x18 - (. - gText_Rom_22F75E)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:373 BattleFrontier_BattleArenaLobby_Text_ExplainChallenge
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainChallenge
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge: @ 0x0822F776
	.string "バトルアリーナは かちぬきチームバトルを\nおこなう しせつですぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたい させる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 7にんぬきを なされた あかつきには\nバトルポイントを おおくり いたしますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge) > 0x165
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge) < 0x165
	.space 0x165 - (. - BattleFrontier_BattleArenaLobby_Text_ExplainChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:394 BattleFrontier_BattleArenaLobby_Text_OkayToSave
	.globl BattleFrontier_BattleArenaLobby_Text_OkayToSave
BattleFrontier_BattleArenaLobby_Text_OkayToSave: @ 0x0822F8DB
	.string "バトルアリーナへ おつれする まえに\nレポートを かきますが よろしいですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave) > 0x29
	.error "BattleFrontier_BattleArenaLobby_Text_OkayToSave may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleArenaLobby_Text_OkayToSave)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:398 BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode: @ 0x0822F904
	.string "バトルアリーナには\nレベル50と オープンレベルと ありますが\lどちらに まいられますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode) > 0x2f
	.error "BattleFrontier_BattleArenaLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode) < 0x2f
	.space 0x2f - (. - BattleFrontier_BattleArenaLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:403 BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
	.globl BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons: @ 0x0822F933
	.string "では さんかする ポケモンを\n3ひき おえらび くだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons) > 0x1e
	.error "BattleFrontier_BattleArenaLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleArenaLobby_Text_SelectThreeMons)
	.endif
	@ field-script:0x22F569 FieldScriptText_22F951
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22F951
gText_Rom_22F951: @ 0x0822F951
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - gText_Rom_22F951) != 0xa7
	.error "gText_Rom_22F951 must retain its original byte length"
	.endif
	.globl gText_Rom_22F9DE
	.set gText_Rom_22F9DE, gText_Rom_22F951 + 0x8d
	@ field-script:0x22F55C FieldScriptText_22F9F8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22F9F8
gText_Rom_22F9F8: @ 0x0822F9F8
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませぬ！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！"
	.byte EOS
	.if (. - gText_Rom_22F9F8) != 0xb2
	.error "gText_Rom_22F9F8 must retain its original byte length"
	.endif
	.globl gText_Rom_22FA90
	.set gText_Rom_22FA90, gText_Rom_22F9F8 + 0x98
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:433 BattleFrontier_BattleArenaLobby_Text_GuideYouToArena
	.globl gText_Rom_22FAAA
gText_Rom_22FAAA: @ 0x0822FAAA
	.string "では バトルアリーナへ\nおつれいたしますぞ!"
	.byte EOS
	.if (. - gText_Rom_22FAAA) > 0x17
	.error "gText_Rom_22FAAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FAAA) < 0x17
	.space 0x17 - (. - gText_Rom_22FAAA)
	.endif
