	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:494 BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd (+1 aliases)
	.globl gText_Rom_220BA0
gText_Rom_220BA0: @ 0x08220BA0
	.string "じゅんびが できましたら\nまた おこし ください"
	.byte EOS
	.if (. - gText_Rom_220BA0) > 0x19
	.error "gText_Rom_220BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220BA0) < 0x19
	.space 0x19 - (. - gText_Rom_220BA0)
	.endif
	@ field-script:0x2200B2 FieldScriptText_220BB9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220BB9
FieldScriptText_220BB9: @ 0x08220BB9
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220BB9) != 0xac
	.error "FieldScriptText_220BB9 must retain its original byte length"
	.endif
	@ field-script:0x2200F7 FieldScriptText_220C65
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220C65
FieldScriptText_220C65: @ 0x08220C65
	.string "おきゃくさま！\pさんかできる　ポケモンが　3ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l3ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220C65) != 0xa1
	.error "FieldScriptText_220C65 must retain its original byte length"
	.endif
	@ field-script:0x2200C0 FieldScriptText_220D06
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220D06
FieldScriptText_220D06: @ 0x08220D06
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220D06) != 0xac
	.error "FieldScriptText_220D06 must retain its original byte length"
	.endif
	@ field-script:0x220105 FieldScriptText_220DB2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220DB2
FieldScriptText_220DB2: @ 0x08220DB2
	.string "おきゃくさま！\pさんかできる　ポケモンが　4ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l4ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220DB2) != 0xa1
	.error "FieldScriptText_220DB2 must retain its original byte length"
	.endif
	@ field-script:0x2200A4 FieldScriptText_220E53
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220E53
FieldScriptText_220E53: @ 0x08220E53
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには　レベルが　50いかで\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220E53) != 0xac
	.error "FieldScriptText_220E53 must retain its original byte length"
	.endif
	@ field-script:0x2200E9 FieldScriptText_220EFF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_220EFF
FieldScriptText_220EFF: @ 0x08220EFF
	.string "おきゃくさま！\pさんかできる　ポケモンが　2ひき　いません！\pさんかする　ためには\nすべて　ちがうしゅるいの　ポケモンを\l2ひき　よういして　ください\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してください！\pなお　タマゴ{0xFD}{0x02}さんか　させることは　できません！\pじゅんびが　できましたら\nまた　おこし　ください"
	.byte EOS
	.if (. - FieldScriptText_220EFF) != 0xa1
	.error "FieldScriptText_220EFF must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1054 BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle
	.globl BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle: @ 0x08220FA0
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは シングル バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle) > 0x46
	.error "BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle) < 0x46
	.space 0x46 - (. - BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle)
	.endif
