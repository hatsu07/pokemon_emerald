	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:359 BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena
	.globl gText_Rom_22F6F9
gText_Rom_22F6F9: @ 0x0822F6F9
	.string "トレーナーの とうしを ためす ばしょ!!\pバトルアリーナへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F6F9) > 0x4e
	.error "gText_Rom_22F6F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F6F9) < 0x4e
	.space 0x4e - (. - gText_Rom_22F6F9)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:365 BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	.globl gText_Rom_22F747
gText_Rom_22F747: @ 0x0822F747
	.string "バトルアリーナに\nちょうせん されますかな?"
	.byte EOS
	.if (. - gText_Rom_22F747) > 0x17
	.error "gText_Rom_22F747 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F747) < 0x17
	.space 0x17 - (. - gText_Rom_22F747)
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
	.globl gText_Rom_22F776
gText_Rom_22F776: @ 0x0822F776
	.string "バトルアリーナは かちぬきチームバトルを\nおこなう しせつですぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたい させる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 7にんぬきを なされた あかつきには\nバトルポイントを おおくり いたしますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F776) > 0x165
	.error "gText_Rom_22F776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F776) < 0x165
	.space 0x165 - (. - gText_Rom_22F776)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:394 BattleFrontier_BattleArenaLobby_Text_OkayToSave
	.globl gText_Rom_22F8DB
gText_Rom_22F8DB: @ 0x0822F8DB
	.string "バトルアリーナへ おつれする まえに\nレポートを かきますが よろしいですかな?"
	.byte EOS
	.if (. - gText_Rom_22F8DB) > 0x29
	.error "gText_Rom_22F8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F8DB) < 0x29
	.space 0x29 - (. - gText_Rom_22F8DB)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:398 BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	.globl gText_Rom_22F904
gText_Rom_22F904: @ 0x0822F904
	.string "バトルアリーナには\nレベル50と オープンレベルと ありますが\lどちらに まいられますかな?"
	.byte EOS
	.if (. - gText_Rom_22F904) > 0x2f
	.error "gText_Rom_22F904 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F904) < 0x2f
	.space 0x2f - (. - gText_Rom_22F904)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:403 BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
	.globl gText_Rom_22F933
gText_Rom_22F933: @ 0x0822F933
	.string "では さんかする ポケモンを\n3ひき おえらび くだされ!"
	.byte EOS
	.if (. - gText_Rom_22F933) > 0x1e
	.error "gText_Rom_22F933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F933) < 0x1e
	.space 0x1e - (. - gText_Rom_22F933)
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
