	@ data/text/trainers.inc:245 Route104_Text_WinstonIntro (+1 aliases)
	.globl Route104_Text_WinstonIntro
Route104_Text_WinstonIntro: @ 0x0825A031
	.string "ボクが あいてして あげるよ\nこの おかねもちの ボクがね{EOS}"
	.if (. - Route104_Text_WinstonIntro) > 0x1e
	.error "Route104_Text_WinstonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonIntro) < 0x1e
	.space 0x1e - (. - Route104_Text_WinstonIntro)
	.endif
	@ data/text/trainers.inc:248 Route104_Text_WinstonDefeat (+1 aliases)
	.globl Route104_Text_WinstonDefeat
Route104_Text_WinstonDefeat: @ 0x0825A04F
	.string "どうして かてないんだ……!?{EOS}"
	.if (. - Route104_Text_WinstonDefeat) > 0x10
	.error "Route104_Text_WinstonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonDefeat) < 0x10
	.space 0x10 - (. - Route104_Text_WinstonDefeat)
	.endif
	@ data/text/trainers.inc:251 Route104_Text_WinstonPostBattle
	.globl Route104_Text_WinstonPostBattle
Route104_Text_WinstonPostBattle: @ 0x0825A05F
	.string "おかねじゃ かてない ものが ある……\nそれが ポケモンなんだね……{EOS}"
	.if (. - Route104_Text_WinstonPostBattle) > 0x23
	.error "Route104_Text_WinstonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonPostBattle) < 0x23
	.space 0x23 - (. - Route104_Text_WinstonPostBattle)
	.endif
	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl gText_Rom_25A082
gText_Rom_25A082: @ 0x0825A082
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね{EOS}"
	.if (. - gText_Rom_25A082) > 0x33
	.error "gText_Rom_25A082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A082) < 0x33
	.space 0x33 - (. - gText_Rom_25A082)
	.endif
	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl gText_Rom_25A0B5
gText_Rom_25A0B5: @ 0x0825A0B5
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね{EOS}"
	.if (. - gText_Rom_25A0B5) > 0x33
	.error "gText_Rom_25A0B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A0B5) < 0x33
	.space 0x33 - (. - gText_Rom_25A0B5)
	.endif
	@ data/text/trainers.inc:260 Route104_Text_WinstonRematchIntro (+1 aliases)
	.globl Route104_Text_WinstonRematchIntro
Route104_Text_WinstonRematchIntro: @ 0x0825A0E8
	.string "きみに まけてから いろいろ\nポケモンのこと べんきょう したんだ!{EOS}"
	.if (. - Route104_Text_WinstonRematchIntro) > 0x23
	.error "Route104_Text_WinstonRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonRematchIntro) < 0x23
	.space 0x23 - (. - Route104_Text_WinstonRematchIntro)
	.endif
	@ data/text/trainers.inc:263 Route104_Text_WinstonRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_WinstonRematchDefeat
Route104_Text_WinstonRematchDefeat: @ 0x0825A10B
	.string "また まけた……\nどうして かてないんだ……!?{EOS}"
	.if (. - Route104_Text_WinstonRematchDefeat) != 0x19
	.error "Route104_Text_WinstonRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:266 Route104_Text_WinstonPostRematch
	.globl Route104_Text_WinstonPostRematch
Route104_Text_WinstonPostRematch: @ 0x0825A124
	.string "おかねもちの ボク なのに\nなかなか ポケモンに かてない……\pなんて おくが ふかいんだろう\nポケモンって……{EOS}"
	.if (. - Route104_Text_WinstonPostRematch) > 0x39
	.error "Route104_Text_WinstonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonPostRematch) < 0x39
	.space 0x39 - (. - Route104_Text_WinstonPostRematch)
	.endif
	@ data/text/trainers.inc:269 Route104_Text_CindyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_CindyIntro
Route104_Text_CindyIntro: @ 0x0825A15D
	.string "あなたと であったのも なにかの ごえん\nおてあわせを おねがい できるかしら{EOS}"
	.if (. - Route104_Text_CindyIntro) != 0x28
	.error "Route104_Text_CindyIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:272 Route104_Text_CindyDefeat (+1 aliases)
	.globl Route104_Text_CindyDefeat
Route104_Text_CindyDefeat: @ 0x0825A185
	.string "まあ!{EOS}"
	.if (. - Route104_Text_CindyDefeat) > 0x4
	.error "Route104_Text_CindyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyDefeat) < 0x4
	.space 0x4 - (. - Route104_Text_CindyDefeat)
	.endif
	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A189
gText_Rom_25A189: @ 0x0825A189
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう{EOS}"
	.if (. - gText_Rom_25A189) > 0x22
	.error "gText_Rom_25A189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A189) < 0x22
	.space 0x22 - (. - gText_Rom_25A189)
	.endif
	@ data/text/trainers.inc:278 Route104_Text_CindyRegister1
	.globl Route104_Text_CindyRegister1
Route104_Text_CindyRegister1: @ 0x0825A1AB
	.string "あら…… また おあい しましたわね\pこんなに ごえんが あるんですもの\nポケナビに とうろく して くださいませ{EOS}"
	.if (. - Route104_Text_CindyRegister1) > 0x3a
	.error "Route104_Text_CindyRegister1 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRegister1) < 0x3a
	.space 0x3a - (. - Route104_Text_CindyRegister1)
	.endif
	@ data/text/trainers.inc:281 Route104_Text_CindyRegister2
	.globl Route104_Text_CindyRegister2
Route104_Text_CindyRegister2: @ 0x0825A1E5
	.string "この ごえんを きねんして\nポケナビに とうろく して くださいませ{EOS}"
	.if (. - Route104_Text_CindyRegister2) > 0x23
	.error "Route104_Text_CindyRegister2 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRegister2) < 0x23
	.space 0x23 - (. - Route104_Text_CindyRegister2)
	.endif
	@ data/text/trainers.inc:284 Route104_Text_CindyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_CindyRematchIntro
Route104_Text_CindyRematchIntro: @ 0x0825A208
	.string "また おあい しましたわね\nおてあわせ おねがい できるかしら{EOS}"
	.if (. - Route104_Text_CindyRematchIntro) != 0x20
	.error "Route104_Text_CindyRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:287 Route104_Text_CindyRematchDefeat (+1 aliases)
	.globl Route104_Text_CindyRematchDefeat
Route104_Text_CindyRematchDefeat: @ 0x0825A228
	.string "あら……\nわたくし ベストを つくしましたのに……{EOS}"
	.if (. - Route104_Text_CindyRematchDefeat) > 0x1a
	.error "Route104_Text_CindyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRematchDefeat) < 0x1a
	.space 0x1a - (. - Route104_Text_CindyRematchDefeat)
	.endif
	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A242
gText_Rom_25A242: @ 0x0825A242
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう{EOS}"
	.if (. - gText_Rom_25A242) > 0x22
	.error "gText_Rom_25A242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A242) < 0x22
	.space 0x22 - (. - gText_Rom_25A242)
	.endif
	@ data/text/trainers.inc:293 Route104_Text_DarianIntro (+1 aliases)
	.globl Route104_Text_DarianIntro
Route104_Text_DarianIntro: @ 0x0825A264
	.string "つよそうな ポケモンが つれたっ!\nさかなの おうさま って かんじだ!\lこれは つよそうだぞっ!{EOS}"
	.if (. - Route104_Text_DarianIntro) > 0x32
	.error "Route104_Text_DarianIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianIntro) < 0x32
	.space 0x32 - (. - Route104_Text_DarianIntro)
	.endif
	@ data/text/trainers.inc:296 Route104_Text_DarianDefeat (+1 aliases)
	.globl Route104_Text_DarianDefeat
Route104_Text_DarianDefeat: @ 0x0825A296
	.string "なっにい{EOS}"
	.if (. - Route104_Text_DarianDefeat) > 0x5
	.error "Route104_Text_DarianDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianDefeat) < 0x5
	.space 0x5 - (. - Route104_Text_DarianDefeat)
	.endif
	@ data/text/trainers.inc:299 Route104_Text_DarianPostBattle
	.globl Route104_Text_DarianPostBattle
Route104_Text_DarianPostBattle: @ 0x0825A29B
	.string "おい なまえ まけ してるじゃないか\nおれの コイキングよ!{EOS}"
	.if (. - Route104_Text_DarianPostBattle) > 0x1f
	.error "Route104_Text_DarianPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianPostBattle) < 0x1f
	.space 0x1f - (. - Route104_Text_DarianPostBattle)
	.endif
	@ data/text/trainers.inc:302 Route105_Text_FosterIntro (+1 aliases)
	.globl Route105_Text_FosterIntro
Route105_Text_FosterIntro: @ 0x0825A2BA
	.string "この あたりに\nふしぎな いわが あるらしいが\lきみ しらないかい?{EOS}"
	.if (. - Route105_Text_FosterIntro) > 0x23
	.error "Route105_Text_FosterIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterIntro) < 0x23
	.space 0x23 - (. - Route105_Text_FosterIntro)
	.endif
	@ data/text/trainers.inc:305 Route105_Text_FosterDefeated (+1 aliases)
	.globl Route105_Text_FosterDefeated
Route105_Text_FosterDefeated: @ 0x0825A2DD
	.string "いわのこと ばかり かんがえて\nポケモン よわいまま だったか……{EOS}"
	.if (. - Route105_Text_FosterDefeated) > 0x22
	.error "Route105_Text_FosterDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterDefeated) < 0x22
	.space 0x22 - (. - Route105_Text_FosterDefeated)
	.endif
	@ data/text/trainers.inc:308 Route105_Text_FosterPostBattle
	.globl Route105_Text_FosterPostBattle
Route105_Text_FosterPostBattle: @ 0x0825A2FF
	.string "すてきな いわ だったら\nなんじかん みていても あきないよ……{EOS}"
	.if (. - Route105_Text_FosterPostBattle) > 0x21
	.error "Route105_Text_FosterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterPostBattle) < 0x21
	.space 0x21 - (. - Route105_Text_FosterPostBattle)
	.endif
	@ data/text/trainers.inc:311 Route105_Text_LuisIntro (+1 aliases)
	.globl Route105_Text_LuisIntro
Route105_Text_LuisIntro: @ 0x0825A320
	.string "よかった! こどもが\nおぼれているのかと しんぱい したよ!\pだいじょうぶ そうだから しょうぶ だな!{EOS}"
	.if (. - Route105_Text_LuisIntro) > 0x35
	.error "Route105_Text_LuisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisIntro) < 0x35
	.space 0x35 - (. - Route105_Text_LuisIntro)
	.endif
	@ data/text/trainers.inc:314 Route105_Text_LuisDefeated (+1 aliases)
	.globl Route105_Text_LuisDefeated
Route105_Text_LuisDefeated: @ 0x0825A355
	.string "ゴボゴボ……{EOS}"
	.if (. - Route105_Text_LuisDefeated) > 0x7
	.error "Route105_Text_LuisDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisDefeated) < 0x7
	.space 0x7 - (. - Route105_Text_LuisDefeated)
	.endif
	@ data/text/trainers.inc:317 Route105_Text_LuisPostBattle
	.globl Route105_Text_LuisPostBattle
Route105_Text_LuisPostBattle: @ 0x0825A35C
	.string "すなはまに むかって かたてを ふるのが\nおぼれたときの サインだぜ!{EOS}"
	.if (. - Route105_Text_LuisPostBattle) > 0x24
	.error "Route105_Text_LuisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisPostBattle) < 0x24
	.space 0x24 - (. - Route105_Text_LuisPostBattle)
	.endif
	@ data/text/trainers.inc:320 Route105_Text_DominikIntro (+1 aliases)
	.globl Route105_Text_DominikIntro
Route105_Text_DominikIntro: @ 0x0825A380
	.string "あおい うみで およいでいると\nさいこうの きぶん だな!{EOS}"
	.if (. - Route105_Text_DominikIntro) > 0x1e
	.error "Route105_Text_DominikIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikIntro) < 0x1e
	.space 0x1e - (. - Route105_Text_DominikIntro)
	.endif
	@ data/text/trainers.inc:323 Route105_Text_DominikDefeated (+1 aliases)
	.globl Route105_Text_DominikDefeated
Route105_Text_DominikDefeated: @ 0x0825A39E
	.string "まけた……\nブルーな きぶん……{EOS}"
	.if (. - Route105_Text_DominikDefeated) > 0x11
	.error "Route105_Text_DominikDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikDefeated) < 0x11
	.space 0x11 - (. - Route105_Text_DominikDefeated)
	.endif
	@ data/text/trainers.inc:326 Route105_Text_DominikPostBattle
	.globl Route105_Text_DominikPostBattle
Route105_Text_DominikPostBattle: @ 0x0825A3AF
	.string "うみが あおい りゆう!?\pカイナの はくぶつかんで きいたけど\nそんなの わすれちまったよ!{EOS}"
	.if (. - Route105_Text_DominikPostBattle) > 0x30
	.error "Route105_Text_DominikPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikPostBattle) < 0x30
	.space 0x30 - (. - Route105_Text_DominikPostBattle)
	.endif
	@ data/text/trainers.inc:329 Route105_Text_BeverlyIntro (+1 aliases)
	.globl Route105_Text_BeverlyIntro
Route105_Text_BeverlyIntro: @ 0x0825A3DF
	.string "みずに はいると からだが かるくなるわね\nなんだか スリムに なったみたい!{EOS}"
	.if (. - Route105_Text_BeverlyIntro) > 0x28
	.error "Route105_Text_BeverlyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_BeverlyIntro) < 0x28
	.space 0x28 - (. - Route105_Text_BeverlyIntro)
	.endif
	@ data/text/trainers.inc:332 Route105_Text_BeverlyDefeated (+1 aliases)
	.globl Route105_Text_BeverlyDefeated
Route105_Text_BeverlyDefeated: @ 0x0825A407
	.string "ぷかぷか……{EOS}"
	.if (. - Route105_Text_BeverlyDefeated) > 0x7
	.error "Route105_Text_BeverlyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_BeverlyDefeated) < 0x7
	.space 0x7 - (. - Route105_Text_BeverlyDefeated)
	.endif
	@ data/text/trainers.inc:335 Route105_Text_PostBattle
	.globl Route105_Text_PostBattle
Route105_Text_PostBattle: @ 0x0825A40E
	.string "みずの なかでは たいじゅうが\n10ぶんの1 くらいに なるのよ\pと すると いま わたしは……\nいけない! たいじゅうが バレちゃうわ!{EOS}"
	.if (. - Route105_Text_PostBattle) > 0x46
	.error "Route105_Text_PostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_PostBattle) < 0x46
	.space 0x46 - (. - Route105_Text_PostBattle)
	.endif
	@ data/text/trainers.inc:338 Route105_Text_ImaniIntro (+1 aliases)
	.globl Route105_Text_ImaniIntro
Route105_Text_ImaniIntro: @ 0x0825A454
	.string "あおい そら……\nひろい うみ……\lのどか よねー……{EOS}"
	.if (. - Route105_Text_ImaniIntro) > 0x1c
	.error "Route105_Text_ImaniIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniIntro) < 0x1c
	.space 0x1c - (. - Route105_Text_ImaniIntro)
	.endif
	@ data/text/trainers.inc:341 Route105_Text_ImaniDefeated (+1 aliases)
	.globl Route105_Text_ImaniDefeated
Route105_Text_ImaniDefeated: @ 0x0825A470
	.string "なごんでいる うちに\nまけちゃったわーっ!{EOS}"
	.if (. - Route105_Text_ImaniDefeated) > 0x16
	.error "Route105_Text_ImaniDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniDefeated) < 0x16
	.space 0x16 - (. - Route105_Text_ImaniDefeated)
	.endif
	@ data/text/trainers.inc:344 Route105_Text_ImaniPostBattle
	.globl Route105_Text_ImaniPostBattle
Route105_Text_ImaniPostBattle: @ 0x0825A486
	.string "あたしと いると なごむって いわれたいの\nうふふふふ!{EOS}"
	.if (. - Route105_Text_ImaniPostBattle) > 0x1d
	.error "Route105_Text_ImaniPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniPostBattle) < 0x1d
	.space 0x1d - (. - Route105_Text_ImaniPostBattle)
	.endif
	@ data/text/trainers.inc:347 Route105_Text_AndresIntro (+1 aliases)
	.globl Route105_Text_AndresIntro
Route105_Text_AndresIntro: @ 0x0825A4A3
	.string "うみに こそ なにかが あると\nかくしんが ある!{EOS}"
	.if (. - Route105_Text_AndresIntro) > 0x1a
	.error "Route105_Text_AndresIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresIntro) < 0x1a
	.space 0x1a - (. - Route105_Text_AndresIntro)
	.endif
	@ data/text/trainers.inc:350 Route105_Text_AndresDefeated (+1 aliases)
	.globl Route105_Text_AndresDefeated
Route105_Text_AndresDefeated: @ 0x0825A4BD
	.string "うん…… わし\nしょうぶは よわいんだよ{EOS}"
	.if (. - Route105_Text_AndresDefeated) > 0x15
	.error "Route105_Text_AndresDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresDefeated) < 0x15
	.space 0x15 - (. - Route105_Text_AndresDefeated)
	.endif
	@ data/text/trainers.inc:353 Route105_Text_AndresPostBattle
	.globl Route105_Text_AndresPostBattle
Route105_Text_AndresPostBattle: @ 0x0825A4D2
	.string "せかいじゅうの うみには\nまだまだ ひみつが あるはずだ!\lぜんぶ さがしまくるぞ!{EOS}"
	.if (. - Route105_Text_AndresPostBattle) > 0x2b
	.error "Route105_Text_AndresPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresPostBattle) < 0x2b
	.space 0x2b - (. - Route105_Text_AndresPostBattle)
	.endif
	@ data/text/trainers.inc:356 Route105_Text_AndresRegister
	.globl Route105_Text_AndresRegister
Route105_Text_AndresRegister: @ 0x0825A4FD
	.string "ん? こんな よわい わしでも\nポケナビ とうろくして くれるのか?{EOS}"
	.if (. - Route105_Text_AndresRegister) > 0x23
	.error "Route105_Text_AndresRegister may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRegister) < 0x23
	.space 0x23 - (. - Route105_Text_AndresRegister)
	.endif
	@ data/text/trainers.inc:359 Route105_Text_AndresRematchIntro (+1 aliases)
	.globl Route105_Text_AndresRematchIntro
Route105_Text_AndresRematchIntro: @ 0x0825A520
	.string "しょうぶは よわいと いっているのに……\nわし なんかで いいのか?{EOS}"
	.if (. - Route105_Text_AndresRematchIntro) > 0x23
	.error "Route105_Text_AndresRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchIntro) < 0x23
	.space 0x23 - (. - Route105_Text_AndresRematchIntro)
	.endif
	@ data/text/trainers.inc:362 Route105_Text_AndresRematchDefeated (+1 aliases)
	.globl Route105_Text_AndresRematchDefeated
Route105_Text_AndresRematchDefeated: @ 0x0825A543
	.string "うん…… やっぱり かてないな{EOS}"
	.if (. - Route105_Text_AndresRematchDefeated) > 0x10
	.error "Route105_Text_AndresRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchDefeated) < 0x10
	.space 0x10 - (. - Route105_Text_AndresRematchDefeated)
	.endif
	@ data/text/trainers.inc:365 Route105_Text_AndresRematchPostBattle
	.globl Route105_Text_AndresRematchPostBattle
Route105_Text_AndresRematchPostBattle: @ 0x0825A553
	.string "しょうぶは よわいが\nたんきゅうしんは きみにも まけん!\lせかいじゅうの うみを たび するぞ!{EOS}"
	.if (. - Route105_Text_AndresRematchPostBattle) > 0x32
	.error "Route105_Text_AndresRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchPostBattle) < 0x32
	.space 0x32 - (. - Route105_Text_AndresRematchPostBattle)
	.endif
	@ data/text/trainers.inc:368 Route105_Text_JosueIntro (+1 aliases)
	.globl Route105_Text_JosueIntro
Route105_Text_JosueIntro: @ 0x0825A585
	.string "なれない およぎで つかれたー\nきばらしに ポケモンしょうぶ じゃい!{EOS}"
	.if (. - Route105_Text_JosueIntro) > 0x24
	.error "Route105_Text_JosueIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosueIntro) < 0x24
	.space 0x24 - (. - Route105_Text_JosueIntro)
	.endif
	@ data/text/trainers.inc:371 Route105_Text_JosueDefeated (+1 aliases)
	.globl Route105_Text_JosueDefeated
Route105_Text_JosueDefeated: @ 0x0825A5A9
	.string "うみで たたかった から まけたんだ{EOS}"
	.if (. - Route105_Text_JosueDefeated) > 0x13
	.error "Route105_Text_JosueDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosueDefeated) < 0x13
	.space 0x13 - (. - Route105_Text_JosueDefeated)
	.endif
	@ data/text/trainers.inc:374 Route105_Text_JosuePostBattle
	.globl Route105_Text_JosuePostBattle
Route105_Text_JosuePostBattle: @ 0x0825A5BC
	.string "やっぱりさ おれには\nうみより そらが にあってるんだよ{EOS}"
	.if (. - Route105_Text_JosuePostBattle) > 0x1d
	.error "Route105_Text_JosuePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosuePostBattle) < 0x1d
	.space 0x1d - (. - Route105_Text_JosuePostBattle)
	.endif
	@ data/text/trainers.inc:377 Route106_Text_ElliotIntro (+1 aliases)
	.globl Route106_Text_ElliotIntro
Route106_Text_ElliotIntro: @ 0x0825A5D9
	.string "うみづりと かわづり\nキミは どっちが すき?{EOS}"
	.if (. - Route106_Text_ElliotIntro) > 0x18
	.error "Route106_Text_ElliotIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotIntro) < 0x18
	.space 0x18 - (. - Route106_Text_ElliotIntro)
	.endif
	@ data/text/trainers.inc:380 Route106_Text_ElliotDefeated (+1 aliases)
	.globl Route106_Text_ElliotDefeated
Route106_Text_ElliotDefeated: @ 0x0825A5F1
	.string "まるで うみづりの ように\nごうかいに まけたぞーっ!{EOS}"
	.if (. - Route106_Text_ElliotDefeated) > 0x1c
	.error "Route106_Text_ElliotDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotDefeated) < 0x1c
	.space 0x1c - (. - Route106_Text_ElliotDefeated)
	.endif
	@ data/text/trainers.inc:383 Route106_Text_ElliotPostBattle
	.globl Route106_Text_ElliotPostBattle
Route106_Text_ElliotPostBattle: @ 0x0825A60D
	.string "うみでも かわでも つりは サイコーだ!\nキミも そう おもうだろ!?{EOS}"
	.if (. - Route106_Text_ElliotPostBattle) > 0x24
	.error "Route106_Text_ElliotPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotPostBattle) < 0x24
	.space 0x24 - (. - Route106_Text_ElliotPostBattle)
	.endif
	@ data/text/trainers.inc:386 Route106_Text_ElliotRegister
	.globl Route106_Text_ElliotRegister
Route106_Text_ElliotRegister: @ 0x0825A631
	.string "つりも いいけど しょうぶも いいな!\nキミ よかったら また たのむよ!{EOS}"
	.if (. - Route106_Text_ElliotRegister) > 0x26
	.error "Route106_Text_ElliotRegister may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRegister) < 0x26
	.space 0x26 - (. - Route106_Text_ElliotRegister)
	.endif
	@ data/text/trainers.inc:389 Route106_Text_ElliotRematchIntro (+1 aliases)
	.globl Route106_Text_ElliotRematchIntro
Route106_Text_ElliotRematchIntro: @ 0x0825A657
	.string "ポケモン つりまくったからね\nすごい しょうぶを してみせるぞー!{EOS}"
	.if (. - Route106_Text_ElliotRematchIntro) > 0x22
	.error "Route106_Text_ElliotRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchIntro) < 0x22
	.space 0x22 - (. - Route106_Text_ElliotRematchIntro)
	.endif
	@ data/text/trainers.inc:392 Route106_Text_ElliotRematchDefeated (+1 aliases)
	.globl Route106_Text_ElliotRematchDefeated
Route106_Text_ElliotRematchDefeated: @ 0x0825A679
	.string "また ごうかいに まけたぞーっ!{EOS}"
	.if (. - Route106_Text_ElliotRematchDefeated) > 0x11
	.error "Route106_Text_ElliotRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchDefeated) < 0x11
	.space 0x11 - (. - Route106_Text_ElliotRematchDefeated)
	.endif
	@ data/text/trainers.inc:395 Route106_Text_ElliotRematchPostBattle
	.globl Route106_Text_ElliotRematchPostBattle
Route106_Text_ElliotRematchPostBattle: @ 0x0825A68A
	.string "かっても まけても ポケモンは サイコーだ!\nキミも そう おもうだろ!?{EOS}"
	.if (. - Route106_Text_ElliotRematchPostBattle) > 0x26
	.error "Route106_Text_ElliotRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchPostBattle) < 0x26
	.space 0x26 - (. - Route106_Text_ElliotRematchPostBattle)
	.endif
	@ data/text/trainers.inc:398 Route106_Text_NedIntro (+1 aliases)
	.globl Route106_Text_NedIntro
Route106_Text_NedIntro: @ 0x0825A6B0
	.string "トイレに いきたくなったとき\nみんなは どうしてるんだろう……?\pトイレに いっている あいだに\nもし おおものが かかったらと おもうと……{EOS}"
	.if (. - Route106_Text_NedIntro) > 0x48
	.error "Route106_Text_NedIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedIntro) < 0x48
	.space 0x48 - (. - Route106_Text_NedIntro)
	.endif
	@ data/text/trainers.inc:401 Route106_Text_NedDefeated (+1 aliases)
	.globl Route106_Text_NedDefeated
Route106_Text_NedDefeated: @ 0x0825A6F8
	.string "トイレを がまん してたから\nまけたんだよ きっと……{EOS}"
	.if (. - Route106_Text_NedDefeated) > 0x1c
	.error "Route106_Text_NedDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedDefeated) < 0x1c
	.space 0x1c - (. - Route106_Text_NedDefeated)
	.endif
	@ data/text/trainers.inc:404 Route106_Text_NedPostBattle
	.globl Route106_Text_NedPostBattle
Route106_Text_NedPostBattle: @ 0x0825A714
	.string "ああっ!\nおおものが つれそうな よかん……!{EOS}"
	.if (. - Route106_Text_NedPostBattle) > 0x18
	.error "Route106_Text_NedPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedPostBattle) < 0x18
	.space 0x18 - (. - Route106_Text_NedPostBattle)
	.endif
	@ data/text/trainers.inc:407 Route106_Text_DouglasIntro (+1 aliases)
	.globl Route106_Text_DouglasIntro
Route106_Text_DouglasIntro: @ 0x0825A72C
	.string "はっはっはっ!\nりくでは はやく はしれないが\lみずの なかなら まけないぞ!{EOS}"
	.if (. - Route106_Text_DouglasIntro) > 0x28
	.error "Route106_Text_DouglasIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasIntro) < 0x28
	.space 0x28 - (. - Route106_Text_DouglasIntro)
	.endif
	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25A754
gText_Rom_25A754: @ 0x0825A754
	.string "まいりましたーっ!{EOS}"
	.if (. - gText_Rom_25A754) > 0xa
	.error "gText_Rom_25A754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A754) < 0xa
	.space 0xa - (. - gText_Rom_25A754)
	.endif
	@ data/text/trainers.inc:413 Route106_Text_DouglasPostBattle
	.globl Route106_Text_DouglasPostBattle
Route106_Text_DouglasPostBattle: @ 0x0825A75E
	.string "すいえいの きょうそうなら まけないのに……{EOS}"
	.if (. - Route106_Text_DouglasPostBattle) > 0x17
	.error "Route106_Text_DouglasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasPostBattle) < 0x17
	.space 0x17 - (. - Route106_Text_DouglasPostBattle)
	.endif
	@ data/text/trainers.inc:416 Route106_Text_KylaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route106_Text_KylaIntro
Route106_Text_KylaIntro: @ 0x0825A775
	.string "うみは わたしの にわ\nこども だからって てかげん しないわよ!{EOS}"
	.if (. - Route106_Text_KylaIntro) != 0x22
	.error "Route106_Text_KylaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:419 Route106_Text_KylaDefeated (+1 aliases)
	.globl Route106_Text_KylaDefeated
Route106_Text_KylaDefeated: @ 0x0825A797
	.string "ひょっとして\nてかげん してないよね?{EOS}"
	.if (. - Route106_Text_KylaDefeated) > 0x14
	.error "Route106_Text_KylaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_KylaDefeated) < 0x14
	.space 0x14 - (. - Route106_Text_KylaDefeated)
	.endif
	@ data/text/trainers.inc:422 Route106_Text_KylaPostBattle
	.globl Route106_Text_KylaPostBattle
Route106_Text_KylaPostBattle: @ 0x0825A7AB
	.string "なみに ゆられて ただようのが だいすき\nあなたも やってみない?{EOS}"
	.if (. - Route106_Text_KylaPostBattle) > 0x22
	.error "Route106_Text_KylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_KylaPostBattle) < 0x22
	.space 0x22 - (. - Route106_Text_KylaPostBattle)
	.endif
	@ data/text/trainers.inc:425 Route107_Text_DarrinIntro (+1 aliases)
	.globl Route107_Text_DarrinIntro
Route107_Text_DarrinIntro: @ 0x0825A7CD
	.string "むにゃむにゃ……\pなみに ゆられてたら きもちよくなって\nうっかり ねてしまった!{EOS}"
	.if (. - Route107_Text_DarrinIntro) > 0x2a
	.error "Route107_Text_DarrinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinIntro) < 0x2a
	.space 0x2a - (. - Route107_Text_DarrinIntro)
	.endif
	@ data/text/trainers.inc:428 Route107_Text_DarrinDefeated (+1 aliases)
	.globl Route107_Text_DarrinDefeated
Route107_Text_DarrinDefeated: @ 0x0825A7F7
	.string "あはは まけた……\nまた ねますか……{EOS}"
	.if (. - Route107_Text_DarrinDefeated) > 0x14
	.error "Route107_Text_DarrinDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinDefeated) < 0x14
	.space 0x14 - (. - Route107_Text_DarrinDefeated)
	.endif
	@ data/text/trainers.inc:431 Route107_Text_DarrinPostBattle
	.globl Route107_Text_DarrinPostBattle
Route107_Text_DarrinPostBattle: @ 0x0825A80B
	.string "うみに うかんで なみに ゆられてると\nふかふかの ベッドで ねてる みたいだよ!{EOS}"
	.if (. - Route107_Text_DarrinPostBattle) > 0x2a
	.error "Route107_Text_DarrinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinPostBattle) < 0x2a
	.space 0x2a - (. - Route107_Text_DarrinPostBattle)
	.endif
	@ data/text/trainers.inc:434 Route107_Text_TonyIntro (+1 aliases)
	.globl Route107_Text_TonyIntro
Route107_Text_TonyIntro: @ 0x0825A835
	.string "うみは オレの にわ みたいな もの!\nしょうぶ しようぜ!{EOS}"
	.if (. - Route107_Text_TonyIntro) > 0x1f
	.error "Route107_Text_TonyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyIntro) < 0x1f
	.space 0x1f - (. - Route107_Text_TonyIntro)
	.endif
	@ data/text/trainers.inc:437 Route107_Text_TonyDefeated (+1 aliases)
	.globl Route107_Text_TonyDefeated
Route107_Text_TonyDefeated: @ 0x0825A854
	.string "ホームグラウンドで まけた……\nショック!{EOS}"
	.if (. - Route107_Text_TonyDefeated) > 0x16
	.error "Route107_Text_TonyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyDefeated) < 0x16
	.space 0x16 - (. - Route107_Text_TonyDefeated)
	.endif
	@ data/text/trainers.inc:440 Route107_Text_TonyPostBattle
	.globl Route107_Text_TonyPostBattle
Route107_Text_TonyPostBattle: @ 0x0825A86A
	.string "おおきな ユメを いっぱい つめてー\nでっかい うみを ひとおよぎー\pさぁて まだまだ およぐぞー!{EOS}"
	.if (. - Route107_Text_TonyPostBattle) > 0x33
	.error "Route107_Text_TonyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyPostBattle) < 0x33
	.space 0x33 - (. - Route107_Text_TonyPostBattle)
	.endif
	@ data/text/trainers.inc:443 Route107_Text_TonyRegister
	.globl Route107_Text_TonyRegister
Route107_Text_TonyRegister: @ 0x0825A89D
	.string "ショックを うけたオレを\nきみが わすれない ために……!{EOS}"
	.if (. - Route107_Text_TonyRegister) > 0x1e
	.error "Route107_Text_TonyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRegister) < 0x1e
	.space 0x1e - (. - Route107_Text_TonyRegister)
	.endif
	@ data/text/trainers.inc:446 Route107_Text_TonyRematchIntro (+1 aliases)
	.globl Route107_Text_TonyRematchIntro
Route107_Text_TonyRematchIntro: @ 0x0825A8BB
	.string "でっかい うみを およいでいたら\nポケモンが すっごく つよくなったぞー!{EOS}"
	.if (. - Route107_Text_TonyRematchIntro) > 0x26
	.error "Route107_Text_TonyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchIntro) < 0x26
	.space 0x26 - (. - Route107_Text_TonyRematchIntro)
	.endif
	@ data/text/trainers.inc:449 Route107_Text_TonyRematchDefeated (+1 aliases)
	.globl Route107_Text_TonyRematchDefeated
Route107_Text_TonyRematchDefeated: @ 0x0825A8E1
	.string "ショック!!\pポケモンは つよくなったが\nトレーナーの おれが よわいまま!?{EOS}"
	.if (. - Route107_Text_TonyRematchDefeated) > 0x28
	.error "Route107_Text_TonyRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchDefeated) < 0x28
	.space 0x28 - (. - Route107_Text_TonyRematchDefeated)
	.endif
	@ data/text/trainers.inc:452 Route107_Text_TonyRematchPostBattle
	.globl Route107_Text_TonyRematchPostBattle
Route107_Text_TonyRematchPostBattle: @ 0x0825A909
	.string "たたかいの なかで おぼえたことが\nトレーナーとしての つよさに つながる!\lでっかい うみが そう いっていたぞー!{EOS}"
	.if (. - Route107_Text_TonyRematchPostBattle) > 0x3c
	.error "Route107_Text_TonyRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchPostBattle) < 0x3c
	.space 0x3c - (. - Route107_Text_TonyRematchPostBattle)
	.endif
	@ data/text/trainers.inc:455 Route107_Text_DeniseIntro (+1 aliases)
	.globl Route107_Text_DeniseIntro
Route107_Text_DeniseIntro: @ 0x0825A945
	.string "ムロタウン っていう\nちいさな まちを しってる?{EOS}"
	.if (. - Route107_Text_DeniseIntro) > 0x1a
	.error "Route107_Text_DeniseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DeniseIntro) < 0x1a
	.space 0x1a - (. - Route107_Text_DeniseIntro)
	.endif
	@ data/text/trainers.inc:458 Route107_Text_DeniseDefeated (+1 aliases)
	.globl Route107_Text_DeniseDefeated
Route107_Text_DeniseDefeated: @ 0x0825A95F
	.string "ヤダ もーっ!{EOS}"
	.if (. - Route107_Text_DeniseDefeated) > 0x8
	.error "Route107_Text_DeniseDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DeniseDefeated) < 0x8
	.space 0x8 - (. - Route107_Text_DeniseDefeated)
	.endif
	@ data/text/trainers.inc:461 Route107_Text_DenisePostBattle
	.globl Route107_Text_DenisePostBattle
Route107_Text_DenisePostBattle: @ 0x0825A967
	.string "ムロタウンの しゅうかいじょで\nふしぎな ことばが はやって いるのよ!{EOS}"
	.if (. - Route107_Text_DenisePostBattle) > 0x25
	.error "Route107_Text_DenisePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DenisePostBattle) < 0x25
	.space 0x25 - (. - Route107_Text_DenisePostBattle)
	.endif
	@ data/text/trainers.inc:464 Route107_Text_BethIntro (+1 aliases)
	.globl Route107_Text_BethIntro
Route107_Text_BethIntro: @ 0x0825A98C
	.string "わたしと しょうぶが したいの?\nいいわ! あいてに なって あげる!{EOS}"
	.if (. - Route107_Text_BethIntro) > 0x24
	.error "Route107_Text_BethIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethIntro) < 0x24
	.space 0x24 - (. - Route107_Text_BethIntro)
	.endif
	@ data/text/trainers.inc:467 Route107_Text_BethDefeated (+1 aliases)
	.globl Route107_Text_BethDefeated
Route107_Text_BethDefeated: @ 0x0825A9B0
	.string "わたしじゃ あいてに ならなかったわ!{EOS}"
	.if (. - Route107_Text_BethDefeated) > 0x14
	.error "Route107_Text_BethDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethDefeated) < 0x14
	.space 0x14 - (. - Route107_Text_BethDefeated)
	.endif
	@ data/text/trainers.inc:470 Route107_Text_BethPostBattle
	.globl Route107_Text_BethPostBattle
Route107_Text_BethPostBattle: @ 0x0825A9C4
	.string "あなた まだまだ つよく なりそうね\nわたしも がんばろうっと!{EOS}"
	.if (. - Route107_Text_BethPostBattle) > 0x21
	.error "Route107_Text_BethPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethPostBattle) < 0x21
	.space 0x21 - (. - Route107_Text_BethPostBattle)
	.endif
	@ data/text/trainers.inc:473 Route107_Text_LisaIntro (+1 aliases)
	.globl Route107_Text_LisaIntro
Route107_Text_LisaIntro: @ 0x0825A9E5
	.string "ユミ『あたしたち きょうだい ふたりで\nしょうぶを させてもらうわ!{EOS}"
	.if (. - Route107_Text_LisaIntro) > 0x23
	.error "Route107_Text_LisaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaIntro) < 0x23
	.space 0x23 - (. - Route107_Text_LisaIntro)
	.endif
	@ data/text/trainers.inc:476 Route107_Text_LisaDefeated (+1 aliases)
	.globl Route107_Text_LisaDefeated
Route107_Text_LisaDefeated: @ 0x0825AA08
	.string "ユミ『すごいわ\nつよさの レベルが ちがうのね{EOS}"
	.if (. - Route107_Text_LisaDefeated) > 0x18
	.error "Route107_Text_LisaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaDefeated) < 0x18
	.space 0x18 - (. - Route107_Text_LisaDefeated)
	.endif
	@ data/text/trainers.inc:479 Route107_Text_LisaPostBattle
	.globl Route107_Text_LisaPostBattle
Route107_Text_LisaPostBattle: @ 0x0825AA20
	.string "ユミ『あなたは いっしょに\nうみに あそびに いくような\lおともだち いるのかしら?{EOS}"
	.if (. - Route107_Text_LisaPostBattle) > 0x2b
	.error "Route107_Text_LisaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaPostBattle) < 0x2b
	.space 0x2b - (. - Route107_Text_LisaPostBattle)
	.endif
	@ data/text/trainers.inc:482 Route107_Text_LisaNotEnoughPokemon (+1 aliases)
	.globl Route107_Text_LisaNotEnoughPokemon
Route107_Text_LisaNotEnoughPokemon: @ 0x0825AA4B
	.string "ユミ『アタシたちと たたかうなら\nポケモン もっと つれてきなさいな{EOS}"
	.if (. - Route107_Text_LisaNotEnoughPokemon) > 0x23
	.error "Route107_Text_LisaNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaNotEnoughPokemon) < 0x23
	.space 0x23 - (. - Route107_Text_LisaNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:485 Route107_Text_RayIntro (+1 aliases)
	.globl Route107_Text_RayIntro
Route107_Text_RayIntro: @ 0x0825AA6E
	.string "シン『いつも きょうだいで\nポケモンしょうぶ してるんだ!\p……いっつも おれが まけるけど\n2たい2なら きみに かてるよ!{EOS}"
	.if (. - Route107_Text_RayIntro) > 0x40
	.error "Route107_Text_RayIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayIntro) < 0x40
	.space 0x40 - (. - Route107_Text_RayIntro)
	.endif
	@ data/text/trainers.inc:488 Route107_Text_RayDefeated (+1 aliases)
	.globl Route107_Text_RayDefeated
Route107_Text_RayDefeated: @ 0x0825AAAE
	.string "シン『ひゃー\nつよさの レベルが ちがいすぎるや{EOS}"
	.if (. - Route107_Text_RayDefeated) > 0x19
	.error "Route107_Text_RayDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayDefeated) < 0x19
	.space 0x19 - (. - Route107_Text_RayDefeated)
	.endif
	@ data/text/trainers.inc:491 Route107_Text_RayPostBattle
	.globl Route107_Text_RayPostBattle
Route107_Text_RayPostBattle: @ 0x0825AAC7
	.string "シン『おれの ポケモン\nねえちゃんから もらって そだてた\lだいじな あいぼう なんだぜ!{EOS}"
	.if (. - Route107_Text_RayPostBattle) > 0x2e
	.error "Route107_Text_RayPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayPostBattle) < 0x2e
	.space 0x2e - (. - Route107_Text_RayPostBattle)
	.endif
	@ data/text/trainers.inc:494 Route107_Text_RayNotEnoughPokemon (+1 aliases)
	.globl Route107_Text_RayNotEnoughPokemon
Route107_Text_RayNotEnoughPokemon: @ 0x0825AAF5
	.string "シン『オレらと たたかうなら\nもっと ポケモン つれてきてよ!{EOS}"
	.if (. - Route107_Text_RayNotEnoughPokemon) > 0x20
	.error "Route107_Text_RayNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayNotEnoughPokemon) < 0x20
	.space 0x20 - (. - Route107_Text_RayNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:497 Route107_Text_CamronIntro (+1 aliases)
	.globl Route107_Text_CamronIntro
Route107_Text_CamronIntro: @ 0x0825AB15
	.string "トライアスロンの とちゅう だが\nぜんぜん つかれて いないぜ!{EOS}"
	.if (. - Route107_Text_CamronIntro) > 0x21
	.error "Route107_Text_CamronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_CamronIntro) < 0x21
	.space 0x21 - (. - Route107_Text_CamronIntro)
	.endif
	@ data/text/trainers.inc:500 Route107_Text_CamronDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route107_Text_CamronDefeated
Route107_Text_CamronDefeated: @ 0x0825AB36
	.string "いまので つかれて しまった{EOS}"
	.if (. - Route107_Text_CamronDefeated) != 0xf
	.error "Route107_Text_CamronDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:503 Route107_Text_CamronPostBattle
	.globl Route107_Text_CamronPostBattle
Route107_Text_CamronPostBattle: @ 0x0825AB45
	.string "こ このあと まだ\nすいえい ランニングが のこっているぜ\lだいじょうぶか おれ……?{EOS}"
	.if (. - Route107_Text_CamronPostBattle) > 0x2c
	.error "Route107_Text_CamronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_CamronPostBattle) < 0x2c
	.space 0x2c - (. - Route107_Text_CamronPostBattle)
	.endif
	@ data/text/trainers.inc:506 Route108_Text_JeromeIntro (+1 aliases)
	.globl Route108_Text_JeromeIntro
Route108_Text_JeromeIntro: @ 0x0825AB71
	.string "オレの ユメは せかいに ある\n7つのうみ すべてで およぐこと!{EOS}"
	.if (. - Route108_Text_JeromeIntro) > 0x22
	.error "Route108_Text_JeromeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromeIntro) < 0x22
	.space 0x22 - (. - Route108_Text_JeromeIntro)
	.endif
	@ data/text/trainers.inc:509 Route108_Text_JeromeDefeated (+1 aliases)
	.globl Route108_Text_JeromeDefeated
Route108_Text_JeromeDefeated: @ 0x0825AB93
	.string "これじゃ\n7つのうみ すべてで およげない……{EOS}"
	.if (. - Route108_Text_JeromeDefeated) > 0x18
	.error "Route108_Text_JeromeDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromeDefeated) < 0x18
	.space 0x18 - (. - Route108_Text_JeromeDefeated)
	.endif
	@ data/text/trainers.inc:512 Route108_Text_JeromePostBattle
	.globl Route108_Text_JeromePostBattle
Route108_Text_JeromePostBattle: @ 0x0825ABAB
	.string "うみの ポケモンと あそぶことも\nおよいでいる ときの たのしみだね!{EOS}"
	.if (. - Route108_Text_JeromePostBattle) > 0x24
	.error "Route108_Text_JeromePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromePostBattle) < 0x24
	.space 0x24 - (. - Route108_Text_JeromePostBattle)
	.endif
	@ data/text/trainers.inc:515 Route108_Text_MatthewIntro (+1 aliases)
	.globl Route108_Text_MatthewIntro
Route108_Text_MatthewIntro: @ 0x0825ABCF
	.string "なあ キミ!\nキミも すてられた ふねに いくのかい?{EOS}"
	.if (. - Route108_Text_MatthewIntro) > 0x1c
	.error "Route108_Text_MatthewIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewIntro) < 0x1c
	.space 0x1c - (. - Route108_Text_MatthewIntro)
	.endif
	@ data/text/trainers.inc:518 Route108_Text_MatthewDefeated (+1 aliases)
	.globl Route108_Text_MatthewDefeated
Route108_Text_MatthewDefeated: @ 0x0825ABEB
	.string "ああ ぼくが しずむ……\nぶくぶく……{EOS}"
	.if (. - Route108_Text_MatthewDefeated) > 0x14
	.error "Route108_Text_MatthewDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewDefeated) < 0x14
	.space 0x14 - (. - Route108_Text_MatthewDefeated)
	.endif
	@ data/text/trainers.inc:521 Route108_Text_MatthewPostBattle
	.globl Route108_Text_MatthewPostBattle
Route108_Text_MatthewPostBattle: @ 0x0825ABFF
	.string "すてられぶねの なかに\nはいっていく やつらが いるんだよ!{EOS}"
	.if (. - Route108_Text_MatthewPostBattle) > 0x1f
	.error "Route108_Text_MatthewPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewPostBattle) < 0x1f
	.space 0x1f - (. - Route108_Text_MatthewPostBattle)
	.endif
	@ data/text/trainers.inc:524 Route108_Text_TaraIntro (+1 aliases)
	.globl Route108_Text_TaraIntro
Route108_Text_TaraIntro: @ 0x0825AC1E
	.string "ウソつきな カレに いわれたのよ\nビキニが にあってて カワイイって……{EOS}"
	.if (. - Route108_Text_TaraIntro) > 0x25
	.error "Route108_Text_TaraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraIntro) < 0x25
	.space 0x25 - (. - Route108_Text_TaraIntro)
	.endif
	@ data/text/trainers.inc:527 Route108_Text_TaraDefeated (+1 aliases)
	.globl Route108_Text_TaraDefeated
Route108_Text_TaraDefeated: @ 0x0825AC43
	.string "いやん まけたわーっ!{EOS}"
	.if (. - Route108_Text_TaraDefeated) > 0xc
	.error "Route108_Text_TaraDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraDefeated) < 0xc
	.space 0xc - (. - Route108_Text_TaraDefeated)
	.endif
	@ data/text/trainers.inc:530 Route108_Text_TaraPostBattle
	.globl Route108_Text_TaraPostBattle
Route108_Text_TaraPostBattle: @ 0x0825AC4F
	.string "ウソでも いいから カワイイって いわれたい\nふくざつな おんなごころ……{EOS}"
	.if (. - Route108_Text_TaraPostBattle) > 0x26
	.error "Route108_Text_TaraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraPostBattle) < 0x26
	.space 0x26 - (. - Route108_Text_TaraPostBattle)
	.endif
	@ data/text/trainers.inc:533 Route108_Text_MissyIntro (+1 aliases)
	.globl Route108_Text_MissyIntro
Route108_Text_MissyIntro: @ 0x0825AC75
	.string "うみって だいすき!\nおよいでいれば イヤなことも わすれるわ!{EOS}"
	.if (. - Route108_Text_MissyIntro) > 0x21
	.error "Route108_Text_MissyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyIntro) < 0x21
	.space 0x21 - (. - Route108_Text_MissyIntro)
	.endif
	@ data/text/trainers.inc:536 Route108_Text_MissyDefeated (+1 aliases)
	.globl Route108_Text_MissyDefeated
Route108_Text_MissyDefeated: @ 0x0825AC96
	.string "しょうぶに まけると\nストレスが たまるーっ!{EOS}"
	.if (. - Route108_Text_MissyDefeated) > 0x18
	.error "Route108_Text_MissyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyDefeated) < 0x18
	.space 0x18 - (. - Route108_Text_MissyDefeated)
	.endif
	@ data/text/trainers.inc:539 Route108_Text_MissyPostBattle
	.globl Route108_Text_MissyPostBattle
Route108_Text_MissyPostBattle: @ 0x0825ACAE
	.string "ストレスは およいで はっさん!\nけんこうてき よねー!{EOS}"
	.if (. - Route108_Text_MissyPostBattle) > 0x1d
	.error "Route108_Text_MissyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyPostBattle) < 0x1d
	.space 0x1d - (. - Route108_Text_MissyPostBattle)
	.endif
	@ data/text/trainers.inc:542 Route108_Text_CoryIntro (+1 aliases)
	.globl Route108_Text_CoryIntro
Route108_Text_CoryIntro: @ 0x0825ACCB
	.string "みずポケモンが だいすきだー!\nほかの ポケモンも だいすきだー!{EOS}"
	.if (. - Route108_Text_CoryIntro) > 0x22
	.error "Route108_Text_CoryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryIntro) < 0x22
	.space 0x22 - (. - Route108_Text_CoryIntro)
	.endif
	@ data/text/trainers.inc:545 Route108_Text_CoryDefeated (+1 aliases)
	.globl Route108_Text_CoryDefeated
Route108_Text_CoryDefeated: @ 0x0825ACED
	.string "わー まけたー!\nわーわー!{EOS}"
	.if (. - Route108_Text_CoryDefeated) > 0xf
	.error "Route108_Text_CoryDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryDefeated) < 0xf
	.space 0xf - (. - Route108_Text_CoryDefeated)
	.endif
	@ data/text/trainers.inc:548 Route108_Text_CoryPostBattle
	.globl Route108_Text_CoryPostBattle
Route108_Text_CoryPostBattle: @ 0x0825ACFC
	.string "おおごえで さけべば\nスッキリ するなあーっ!{EOS}"
	.if (. - Route108_Text_CoryPostBattle) > 0x18
	.error "Route108_Text_CoryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryPostBattle) < 0x18
	.space 0x18 - (. - Route108_Text_CoryPostBattle)
	.endif
	@ data/text/trainers.inc:551 Route108_Text_CoryRegister
	.globl Route108_Text_CoryRegister
Route108_Text_CoryRegister: @ 0x0825AD14
	.string "つよい トレーナーも だいすきだー!\nポケナビの とうろくを してくれー!{EOS}"
	.if (. - Route108_Text_CoryRegister) > 0x26
	.error "Route108_Text_CoryRegister may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRegister) < 0x26
	.space 0x26 - (. - Route108_Text_CoryRegister)
	.endif
	@ data/text/trainers.inc:554 Route108_Text_CoryRematchIntro (+1 aliases)
	.globl Route108_Text_CoryRematchIntro
Route108_Text_CoryRematchIntro: @ 0x0825AD3A
	.string "かっても まけても\nうみ での しょうぶが だいすきだー!{EOS}"
	.if (. - Route108_Text_CoryRematchIntro) > 0x1e
	.error "Route108_Text_CoryRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchIntro) < 0x1e
	.space 0x1e - (. - Route108_Text_CoryRematchIntro)
	.endif
	@ data/text/trainers.inc:557 Route108_Text_CoryRematchDefeated (+1 aliases)
	.globl Route108_Text_CoryRematchDefeated
Route108_Text_CoryRematchDefeated: @ 0x0825AD58
	.string "わーっ また まけた!\nわー わー!{EOS}"
	.if (. - Route108_Text_CoryRematchDefeated) > 0x13
	.error "Route108_Text_CoryRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchDefeated) < 0x13
	.space 0x13 - (. - Route108_Text_CoryRematchDefeated)
	.endif
	@ data/text/trainers.inc:560 Route108_Text_CoryRematchPostBattle
	.globl Route108_Text_CoryRematchPostBattle
Route108_Text_CoryRematchPostBattle: @ 0x0825AD6B
	.string "きみも いきづまった ときは\nなにかを うみに むかって さけべーっ!{EOS}"
	.if (. - Route108_Text_CoryRematchPostBattle) > 0x24
	.error "Route108_Text_CoryRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchPostBattle) < 0x24
	.space 0x24 - (. - Route108_Text_CoryRematchPostBattle)
	.endif
	@ data/text/trainers.inc:563 Route108_Text_CarolinaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route108_Text_CarolinaIntro
Route108_Text_CarolinaIntro: @ 0x0825AD8F
	.string "じまんの ポケモンたちで\nスピーディに たたかうわよ!{EOS}"
	.if (. - Route108_Text_CarolinaIntro) != 0x1c
	.error "Route108_Text_CarolinaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:566 Route108_Text_CarolinaDefeated (+1 aliases)
	.globl Route108_Text_CarolinaDefeated
Route108_Text_CarolinaDefeated: @ 0x0825ADAB
	.string "あら かわいくないわね!{EOS}"
	.if (. - Route108_Text_CarolinaDefeated) > 0xd
	.error "Route108_Text_CarolinaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CarolinaDefeated) < 0xd
	.space 0xd - (. - Route108_Text_CarolinaDefeated)
	.endif
	@ data/text/trainers.inc:569 Route108_Text_CarolinaPostBattle
	.globl Route108_Text_CarolinaPostBattle
Route108_Text_CarolinaPostBattle: @ 0x0825ADB8
	.string "せっかくの うみ だし\nピンクの フリフリの ビキニも\lちょっと きてみたい……{EOS}"
	.if (. - Route108_Text_CarolinaPostBattle) > 0x29
	.error "Route108_Text_CarolinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CarolinaPostBattle) < 0x29
	.space 0x29 - (. - Route108_Text_CarolinaPostBattle)
	.endif
	@ data/text/trainers.inc:572 Route109_Text_DavidIntro (+1 aliases)
	.globl Route109_Text_DavidIntro
Route109_Text_DavidIntro: @ 0x0825ADE1
	.string "うりゃーっ!!\nみごとに われた ふっきんを みろーっ!!{EOS}"
	.if (. - Route109_Text_DavidIntro) > 0x1e
	.error "Route109_Text_DavidIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidIntro) < 0x1e
	.space 0x1e - (. - Route109_Text_DavidIntro)
	.endif
	@ data/text/trainers.inc:575 Route109_Text_DavidDefeated (+1 aliases)
	.globl Route109_Text_DavidDefeated
Route109_Text_DavidDefeated: @ 0x0825ADFF
	.string "うりゃーっ!!\nまけたーっ!!{EOS}"
	.if (. - Route109_Text_DavidDefeated) > 0x10
	.error "Route109_Text_DavidDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidDefeated) < 0x10
	.space 0x10 - (. - Route109_Text_DavidDefeated)
	.endif
	@ data/text/trainers.inc:578 Route109_Text_DavidPostBattle
	.globl Route109_Text_DavidPostBattle
Route109_Text_DavidPostBattle: @ 0x0825AE0F
	.string "うりゃーっ!!\pふっきんと ポケモンの しょうぶは\nかんけい ないぞーっ!!{EOS}"
	.if (. - Route109_Text_DavidPostBattle) > 0x27
	.error "Route109_Text_DavidPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidPostBattle) < 0x27
	.space 0x27 - (. - Route109_Text_DavidPostBattle)
	.endif
	@ data/text/trainers.inc:581 Route109_Text_AliceIntro (+1 aliases)
	.globl Route109_Text_AliceIntro
Route109_Text_AliceIntro: @ 0x0825AE36
	.string "ひやけ たいさく\nあなたは してる?{EOS}"
	.if (. - Route109_Text_AliceIntro) > 0x13
	.error "Route109_Text_AliceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AliceIntro) < 0x13
	.space 0x13 - (. - Route109_Text_AliceIntro)
	.endif
	@ data/text/trainers.inc:584 Route109_Text_AliceDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_AliceDefeated
Route109_Text_AliceDefeated: @ 0x0825AE49
	.string "あちちちちっ!{EOS}"
	.if (. - Route109_Text_AliceDefeated) != 0x8
	.error "Route109_Text_AliceDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:587 Route109_Text_AlicePostBattle
	.globl Route109_Text_AlicePostBattle
Route109_Text_AlicePostBattle: @ 0x0825AE51
	.string "ほっぺの あたりが いちばん\nひやけ しやすい ばしょ なのよ!{EOS}"
	.if (. - Route109_Text_AlicePostBattle) > 0x21
	.error "Route109_Text_AlicePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AlicePostBattle) < 0x21
	.space 0x21 - (. - Route109_Text_AlicePostBattle)
	.endif
	@ data/text/trainers.inc:590 Route109_Text_HueyIntro (+1 aliases)
	.globl Route109_Text_HueyIntro
Route109_Text_HueyIntro: @ 0x0825AE72
	.string "せかいじゅうの みなとを おとずれたが\nカイナは さいこーの みなとまち だぜ!{EOS}"
	.if (. - Route109_Text_HueyIntro) > 0x29
	.error "Route109_Text_HueyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyIntro) < 0x29
	.space 0x29 - (. - Route109_Text_HueyIntro)
	.endif
	@ data/text/trainers.inc:593 Route109_Text_HueyDefeated (+1 aliases)
	.globl Route109_Text_HueyDefeated
Route109_Text_HueyDefeated: @ 0x0825AE9B
	.string "あんた さいこー だぜ……{EOS}"
	.if (. - Route109_Text_HueyDefeated) > 0xe
	.error "Route109_Text_HueyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyDefeated) < 0xe
	.space 0xe - (. - Route109_Text_HueyDefeated)
	.endif
	@ data/text/trainers.inc:596 Route109_Text_HueyPostBattle
	.globl Route109_Text_HueyPostBattle
Route109_Text_HueyPostBattle: @ 0x0825AEA9
	.string "さいこーの みなとまちには\nさいこーの トレーナーが いたぜ……{EOS}"
	.if (. - Route109_Text_HueyPostBattle) > 0x21
	.error "Route109_Text_HueyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyPostBattle) < 0x21
	.space 0x21 - (. - Route109_Text_HueyPostBattle)
	.endif
	@ data/text/trainers.inc:599 Route109_Text_EdmondIntro (+1 aliases)
	.globl Route109_Text_EdmondIntro
Route109_Text_EdmondIntro: @ 0x0825AECA
	.string "ううう……\nしょうぶ するの? オレと?{EOS}"
	.if (. - Route109_Text_EdmondIntro) > 0x15
	.error "Route109_Text_EdmondIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondIntro) < 0x15
	.space 0x15 - (. - Route109_Text_EdmondIntro)
	.endif
	@ data/text/trainers.inc:602 Route109_Text_EdmondDefeated (+1 aliases)
	.globl Route109_Text_EdmondDefeated
Route109_Text_EdmondDefeated: @ 0x0825AEDF
	.string "げろげろ……{EOS}"
	.if (. - Route109_Text_EdmondDefeated) > 0x7
	.error "Route109_Text_EdmondDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondDefeated) < 0x7
	.space 0x7 - (. - Route109_Text_EdmondDefeated)
	.endif
	@ data/text/trainers.inc:605 Route109_Text_EdmondPostBattle
	.globl Route109_Text_EdmondPostBattle
Route109_Text_EdmondPostBattle: @ 0x0825AEE6
	.string "いつもは もっと つよいんだぞ!\nふなよいで ちょうしが わるいだけだ!\pふなのり だけど……{EOS}"
	.if (. - Route109_Text_EdmondPostBattle) > 0x30
	.error "Route109_Text_EdmondPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondPostBattle) < 0x30
	.space 0x30 - (. - Route109_Text_EdmondPostBattle)
	.endif
	@ data/text/trainers.inc:608 Route109_Text_RickyIntro (+1 aliases)
	.globl Route109_Text_RickyIntro
Route109_Text_RickyIntro: @ 0x0825AF16
	.string "のどが かわいたよ……\nうみのいえで サイコソーダ のみたいな……{EOS}"
	.if (. - Route109_Text_RickyIntro) > 0x22
	.error "Route109_Text_RickyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyIntro) < 0x22
	.space 0x22 - (. - Route109_Text_RickyIntro)
	.endif
	@ data/text/trainers.inc:611 Route109_Text_RickyDefeated (+1 aliases)
	.globl Route109_Text_RickyDefeated
Route109_Text_RickyDefeated: @ 0x0825AF38
	.string "うーん……{EOS}"
	.if (. - Route109_Text_RickyDefeated) > 0x6
	.error "Route109_Text_RickyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyDefeated) < 0x6
	.space 0x6 - (. - Route109_Text_RickyDefeated)
	.endif
	@ data/text/trainers.inc:614 Route109_Text_RickyPostBattle
	.globl Route109_Text_RickyPostBattle
Route109_Text_RickyPostBattle: @ 0x0825AF3E
	.string "おなかも へってきた……\nうきわが おっきな ドーナッツに みえるよ{EOS}"
	.if (. - Route109_Text_RickyPostBattle) > 0x23
	.error "Route109_Text_RickyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyPostBattle) < 0x23
	.space 0x23 - (. - Route109_Text_RickyPostBattle)
	.endif
	@ data/text/trainers.inc:617 Route109_Text_RickyRegister
	.globl Route109_Text_RickyRegister
Route109_Text_RickyRegister: @ 0x0825AF61
	.string "こんど のどが かわいて ないときに\nもういっかい しょうぶ してくれる?{EOS}"
	.if (. - Route109_Text_RickyRegister) > 0x26
	.error "Route109_Text_RickyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRegister) < 0x26
	.space 0x26 - (. - Route109_Text_RickyRegister)
	.endif
	@ data/text/trainers.inc:620 Route109_Text_RickyRematchIntro (+1 aliases)
	.globl Route109_Text_RickyRematchIntro
Route109_Text_RickyRematchIntro: @ 0x0825AF87
	.string "おなか へってるけど\nしょうぶ するなら げんき だよ!{EOS}"
	.if (. - Route109_Text_RickyRematchIntro) > 0x1d
	.error "Route109_Text_RickyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRematchIntro) < 0x1d
	.space 0x1d - (. - Route109_Text_RickyRematchIntro)
	.endif
	@ data/text/trainers.inc:623 Route109_Text_RickyRematchDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_RickyRematchDefeated
Route109_Text_RickyRematchDefeated: @ 0x0825AFA4
	.string "まけた……\nおなかが へってるからだ{EOS}"
	.if (. - Route109_Text_RickyRematchDefeated) != 0x13
	.error "Route109_Text_RickyRematchDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:626 Route109_Text_RickyRematchPostBattle
	.globl Route109_Text_RickyRematchPostBattle
Route109_Text_RickyRematchPostBattle: @ 0x0825AFB7
	.string "すなはまで たべると\nなんでも おいしく おもえるよね{EOS}"
	.if (. - Route109_Text_RickyRematchPostBattle) > 0x1c
	.error "Route109_Text_RickyRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRematchPostBattle) < 0x1c
	.space 0x1c - (. - Route109_Text_RickyRematchPostBattle)
	.endif
	@ data/text/trainers.inc:629 Route109_Text_LolaIntro (+1 aliases)
	.globl Route109_Text_LolaIntro
Route109_Text_LolaIntro: @ 0x0825AFD3
	.string "ビーチパラソルって\nおおきな おはな みたいよねー!{EOS}"
	.if (. - Route109_Text_LolaIntro) > 0x1b
	.error "Route109_Text_LolaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaIntro) < 0x1b
	.space 0x1b - (. - Route109_Text_LolaIntro)
	.endif
	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25AFEE
gText_Rom_25AFEE: @ 0x0825AFEE
	.string "ママーっ!{EOS}"
	.if (. - gText_Rom_25AFEE) > 0x6
	.error "gText_Rom_25AFEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFEE) < 0x6
	.space 0x6 - (. - gText_Rom_25AFEE)
	.endif
	@ data/text/trainers.inc:635 Route109_Text_LolaPostBattle
	.globl Route109_Text_LolaPostBattle
Route109_Text_LolaPostBattle: @ 0x0825AFF4
	.string "おそらの うえから すなはまを みたら\nおはなばたけ みたいに みえるのよ!{EOS}"
	.if (. - Route109_Text_LolaPostBattle) > 0x27
	.error "Route109_Text_LolaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaPostBattle) < 0x27
	.space 0x27 - (. - Route109_Text_LolaPostBattle)
	.endif
	@ data/text/trainers.inc:638 Route109_Text_LolaRegister
	.globl Route109_Text_LolaRegister
Route109_Text_LolaRegister: @ 0x0825B01B
	.string "わたし だったら\nまいにち ここに きているよ!{EOS}"
	.if (. - Route109_Text_LolaRegister) > 0x19
	.error "Route109_Text_LolaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRegister) < 0x19
	.space 0x19 - (. - Route109_Text_LolaRegister)
	.endif
	@ data/text/trainers.inc:641 Route109_Text_LolaRematchIntro (+1 aliases)
	.globl Route109_Text_LolaRematchIntro
Route109_Text_LolaRematchIntro: @ 0x0825B034
	.string "もう あなたには まけません!\nそのために うきわ してるんだから!{EOS}"
	.if (. - Route109_Text_LolaRematchIntro) > 0x23
	.error "Route109_Text_LolaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRematchIntro) < 0x23
	.space 0x23 - (. - Route109_Text_LolaRematchIntro)
	.endif
	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25B057
gText_Rom_25B057: @ 0x0825B057
	.string "ママーっ!{EOS}"
	.if (. - gText_Rom_25B057) > 0x6
	.error "gText_Rom_25B057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B057) < 0x6
	.space 0x6 - (. - gText_Rom_25B057)
	.endif
	@ data/text/trainers.inc:647 Route109_Text_LolaRematchPostBattle
	.globl Route109_Text_LolaRematchPostBattle
Route109_Text_LolaRematchPostBattle: @ 0x0825B05D
	.string "うきわ もってると あたしと ポケモンの\nかわいさが ぐぐーんと アップするの!{EOS}"
	.if (. - Route109_Text_LolaRematchPostBattle) > 0x29
	.error "Route109_Text_LolaRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRematchPostBattle) < 0x29
	.space 0x29 - (. - Route109_Text_LolaRematchPostBattle)
	.endif
	@ data/text/trainers.inc:650 Route109_Text_AustinaIntro (+1 aliases)
	.globl Route109_Text_AustinaIntro
Route109_Text_AustinaIntro: @ 0x0825B086
	.string "うきわが ないと およげないけど\nポケモンなら だれにも まけないよ!{EOS}"
	.if (. - Route109_Text_AustinaIntro) > 0x24
	.error "Route109_Text_AustinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaIntro) < 0x24
	.space 0x24 - (. - Route109_Text_AustinaIntro)
	.endif
	@ data/text/trainers.inc:653 Route109_Text_AustinaDefeated (+1 aliases)
	.globl Route109_Text_AustinaDefeated
Route109_Text_AustinaDefeated: @ 0x0825B0AA
	.string "うきわが あるから まけちゃったのかな?{EOS}"
	.if (. - Route109_Text_AustinaDefeated) > 0x15
	.error "Route109_Text_AustinaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaDefeated) < 0x15
	.space 0x15 - (. - Route109_Text_AustinaDefeated)
	.endif
	@ data/text/trainers.inc:656 Route109_Text_AustinaPostBattle
	.globl Route109_Text_AustinaPostBattle
Route109_Text_AustinaPostBattle: @ 0x0825B0BF
	.string "あたしの うきわ\nオシャレだから てばなせないの{EOS}"
	.if (. - Route109_Text_AustinaPostBattle) > 0x19
	.error "Route109_Text_AustinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaPostBattle) < 0x19
	.space 0x19 - (. - Route109_Text_AustinaPostBattle)
	.endif
	@ data/text/trainers.inc:659 Route109_Text_GwenIntro (+1 aliases)
	.globl Route109_Text_GwenIntro
Route109_Text_GwenIntro: @ 0x0825B0D8
	.string "そこの トレーナーさん\nあたしと たたかう でちゅ!{EOS}"
	.if (. - Route109_Text_GwenIntro) > 0x1b
	.error "Route109_Text_GwenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenIntro) < 0x1b
	.space 0x1b - (. - Route109_Text_GwenIntro)
	.endif
	@ data/text/trainers.inc:662 Route109_Text_GwenDefeated (+1 aliases)
	.globl Route109_Text_GwenDefeated
Route109_Text_GwenDefeated: @ 0x0825B0F3
	.string "つよいでちゅね……{EOS}"
	.if (. - Route109_Text_GwenDefeated) > 0xa
	.error "Route109_Text_GwenDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenDefeated) < 0xa
	.space 0xa - (. - Route109_Text_GwenDefeated)
	.endif
	@ data/text/trainers.inc:665 Route109_Text_GwenPostBattle
	.globl Route109_Text_GwenPostBattle
Route109_Text_GwenPostBattle: @ 0x0825B0FD
	.string "どうしたら そんなに\nつよくなれる でちゅか……?{EOS}"
	.if (. - Route109_Text_GwenPostBattle) > 0x1a
	.error "Route109_Text_GwenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenPostBattle) < 0x1a
	.space 0x1a - (. - Route109_Text_GwenPostBattle)
	.endif
	@ data/text/trainers.inc:668 Route109_Text_CarterIntro (+1 aliases)
	.globl Route109_Text_CarterIntro
Route109_Text_CarterIntro: @ 0x0825B117
	.string "わはは!\nおじさん おおもの つっちゃうぞ!{EOS}"
	.if (. - Route109_Text_CarterIntro) > 0x17
	.error "Route109_Text_CarterIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterIntro) < 0x17
	.space 0x17 - (. - Route109_Text_CarterIntro)
	.endif
	@ data/text/trainers.inc:671 Route109_Text_CarterDefeated (+1 aliases)
	.globl Route109_Text_CarterDefeated
Route109_Text_CarterDefeated: @ 0x0825B12E
	.string "おじさん まけちゃったな……{EOS}"
	.if (. - Route109_Text_CarterDefeated) > 0xf
	.error "Route109_Text_CarterDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterDefeated) < 0xf
	.space 0xf - (. - Route109_Text_CarterDefeated)
	.endif
	@ data/text/trainers.inc:674 Route109_Text_CarterPostBattle
	.globl Route109_Text_CarterPostBattle
Route109_Text_CarterPostBattle: @ 0x0825B13D
	.string "たしかに きみは おおもの だな!\nいや きっと おおものに なるぞ!{EOS}"
	.if (. - Route109_Text_CarterPostBattle) > 0x24
	.error "Route109_Text_CarterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterPostBattle) < 0x24
	.space 0x24 - (. - Route109_Text_CarterPostBattle)
	.endif
	@ data/text/trainers.inc:677 Route109_Text_PaulIntro (+1 aliases)
	.globl Route109_Text_PaulIntro
Route109_Text_PaulIntro: @ 0x0825B161
	.string "リキ『やあ こまったなあ\pふたりっきりの じかん\nじゃま して ほしくないなあ{EOS}"
	.if (. - Route109_Text_PaulIntro) > 0x28
	.error "Route109_Text_PaulIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulIntro) < 0x28
	.space 0x28 - (. - Route109_Text_PaulIntro)
	.endif
	@ data/text/trainers.inc:680 Route109_Text_PaulDefeated (+1 aliases)
	.globl Route109_Text_PaulDefeated
Route109_Text_PaulDefeated: @ 0x0825B189
	.string "リキ『やあ まいったな……{EOS}"
	.if (. - Route109_Text_PaulDefeated) > 0xe
	.error "Route109_Text_PaulDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulDefeated) < 0xe
	.space 0xe - (. - Route109_Text_PaulDefeated)
	.endif
	@ data/text/trainers.inc:683 Route109_Text_PaulPostBattle
	.globl Route109_Text_PaulPostBattle
Route109_Text_PaulPostBattle: @ 0x0825B197
	.string "リキ『やあ ぼくたちが ここに いること\nだれにも いわないで くれよ!\lふたりっきりの せかい なんだからさ!{EOS}"
	.if (. - Route109_Text_PaulPostBattle) > 0x39
	.error "Route109_Text_PaulPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulPostBattle) < 0x39
	.space 0x39 - (. - Route109_Text_PaulPostBattle)
	.endif
	@ data/text/trainers.inc:686 Route109_Text_PaulNotEnoughPokemon (+1 aliases)
	.globl Route109_Text_PaulNotEnoughPokemon
Route109_Text_PaulNotEnoughPokemon: @ 0x0825B1D0
	.string "リキ『ぼくたち ラブラブ だからね\nぼくたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!{EOS}"
	.if (. - Route109_Text_PaulNotEnoughPokemon) > 0x32
	.error "Route109_Text_PaulNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulNotEnoughPokemon) < 0x32
	.space 0x32 - (. - Route109_Text_PaulNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:689 Route109_Text_MelIntro (+1 aliases)
	.globl Route109_Text_MelIntro
Route109_Text_MelIntro: @ 0x0825B202
	.string "シキ『あたしたちが ラブラブだから\nホウエンは あっついのよお!{EOS}"
	.if (. - Route109_Text_MelIntro) > 0x21
	.error "Route109_Text_MelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelIntro) < 0x21
	.space 0x21 - (. - Route109_Text_MelIntro)
	.endif
	@ data/text/trainers.inc:692 Route109_Text_MelDefeated (+1 aliases)
	.globl Route109_Text_MelDefeated
Route109_Text_MelDefeated: @ 0x0825B223
	.string "シキ『あたしの せいで まけたんだわ……\nこんなんじゃ リキに きらわれちゃう!{EOS}"
	.if (. - Route109_Text_MelDefeated) > 0x29
	.error "Route109_Text_MelDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelDefeated) < 0x29
	.space 0x29 - (. - Route109_Text_MelDefeated)
	.endif
	@ data/text/trainers.inc:695 Route109_Text_MelPostBattle
	.globl Route109_Text_MelPostBattle
Route109_Text_MelPostBattle: @ 0x0825B24C
	.string "シキ『ねえ リキ\nあたしのこと おこってない?\lおこっちゃ いやよ{EOS}"
	.if (. - Route109_Text_MelPostBattle) > 0x22
	.error "Route109_Text_MelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelPostBattle) < 0x22
	.space 0x22 - (. - Route109_Text_MelPostBattle)
	.endif
	@ data/text/trainers.inc:698 Route109_Text_MelNotEnoughPokemon (+1 aliases)
	.globl Route109_Text_MelNotEnoughPokemon
Route109_Text_MelNotEnoughPokemon: @ 0x0825B26E
	.string "シキ『あたしたち ラブラブ だからね\nあたしたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!{EOS}"
	.if (. - Route109_Text_MelNotEnoughPokemon) > 0x34
	.error "Route109_Text_MelNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelNotEnoughPokemon) < 0x34
	.space 0x34 - (. - Route109_Text_MelNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:701 Route109_Text_ChandlerIntro (+1 aliases)
	.globl Route109_Text_ChandlerIntro
Route109_Text_ChandlerIntro: @ 0x0825B2A2
	.string "じゃーん!\nボクの うきわ まるいでしょーっ!{EOS}"
	.if (. - Route109_Text_ChandlerIntro) > 0x18
	.error "Route109_Text_ChandlerIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ChandlerIntro) < 0x18
	.space 0x18 - (. - Route109_Text_ChandlerIntro)
	.endif
	@ data/text/trainers.inc:704 Route109_Text_ChandlerDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_ChandlerDefeated
Route109_Text_ChandlerDefeated: @ 0x0825B2BA
	.string "あーあ! ざんねん{EOS}"
	.if (. - Route109_Text_ChandlerDefeated) != 0xa
	.error "Route109_Text_ChandlerDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:707 Route109_Text_ChandlerPostBattle
	.globl Route109_Text_ChandlerPostBattle
Route109_Text_ChandlerPostBattle: @ 0x0825B2C4
	.string "せっかく まるい うきわを\nみせて あげたのにさ{EOS}"
	.if (. - Route109_Text_ChandlerPostBattle) > 0x19
	.error "Route109_Text_ChandlerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ChandlerPostBattle) < 0x19
	.space 0x19 - (. - Route109_Text_ChandlerPostBattle)
	.endif
	@ data/text/trainers.inc:710 Route109_Text_HaileyIntro (+1 aliases)
	.globl Route109_Text_HaileyIntro
Route109_Text_HaileyIntro: @ 0x0825B2DD
	.string "およげない から\nおよぐ ふりを してるの!{EOS}"
	.if (. - Route109_Text_HaileyIntro) > 0x17
	.error "Route109_Text_HaileyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyIntro) < 0x17
	.space 0x17 - (. - Route109_Text_HaileyIntro)
	.endif
	@ data/text/trainers.inc:713 Route109_Text_HaileyDefeated (+1 aliases)
	.globl Route109_Text_HaileyDefeated
Route109_Text_HaileyDefeated: @ 0x0825B2F4
	.string "やっぱね!\nかてないって おもってたんだ{EOS}"
	.if (. - Route109_Text_HaileyDefeated) > 0x15
	.error "Route109_Text_HaileyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyDefeated) < 0x15
	.space 0x15 - (. - Route109_Text_HaileyDefeated)
	.endif
	@ data/text/trainers.inc:716 Route109_Text_HaileyPostBattle
	.globl Route109_Text_HaileyPostBattle
Route109_Text_HaileyPostBattle: @ 0x0825B309
	.string "およげるように なったら\nポケモンも つよく なると おもう!{EOS}"
	.if (. - Route109_Text_HaileyPostBattle) > 0x20
	.error "Route109_Text_HaileyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyPostBattle) < 0x20
	.space 0x20 - (. - Route109_Text_HaileyPostBattle)
	.endif
	@ data/text/trainers.inc:719 Route109_Text_ElijahIntro (+1 aliases)
	.globl Route109_Text_ElijahIntro
Route109_Text_ElijahIntro: @ 0x0825B329
	.string "こうはの おれさまには\nこんな ポケモンが おにあいだぜ!{EOS}"
	.if (. - Route109_Text_ElijahIntro) > 0x1e
	.error "Route109_Text_ElijahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahIntro) < 0x1e
	.space 0x1e - (. - Route109_Text_ElijahIntro)
	.endif
	@ data/text/trainers.inc:722 Route109_Text_ElijahDefeated (+1 aliases)
	.globl Route109_Text_ElijahDefeated
Route109_Text_ElijahDefeated: @ 0x0825B347
	.string "まけても カッコ いいだろ?{EOS}"
	.if (. - Route109_Text_ElijahDefeated) > 0xf
	.error "Route109_Text_ElijahDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahDefeated) < 0xf
	.space 0xf - (. - Route109_Text_ElijahDefeated)
	.endif
	@ data/text/trainers.inc:725 Route109_Text_ElijahPostBattle
	.globl Route109_Text_ElijahPostBattle
Route109_Text_ElijahPostBattle: @ 0x0825B356
	.string "こうはの おれさまには\nみなとまちが おにあいだぜ!\lカイナシティに いってくるか{EOS}"
	.if (. - Route109_Text_ElijahPostBattle) > 0x2a
	.error "Route109_Text_ElijahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahPostBattle) < 0x2a
	.space 0x2a - (. - Route109_Text_ElijahPostBattle)
	.endif
	@ data/text/trainers.inc:728 Route110_Text_JacobIntro (+1 aliases)
	.globl Route110_Text_JacobIntro
Route110_Text_JacobIntro: @ 0x0825B380
	.string "おっと あぶない!\nバイク レースに なれてない ようだな!{EOS}"
	.if (. - Route110_Text_JacobIntro) > 0x1f
	.error "Route110_Text_JacobIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobIntro) < 0x1f
	.space 0x1f - (. - Route110_Text_JacobIntro)
	.endif
	@ data/text/trainers.inc:731 Route110_Text_JacobDefeated (+1 aliases)
	.globl Route110_Text_JacobDefeated
Route110_Text_JacobDefeated: @ 0x0825B39F
	.string "キキーッ!\nブレーキが こしょうした!{EOS}"
	.if (. - Route110_Text_JacobDefeated) > 0x14
	.error "Route110_Text_JacobDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobDefeated) < 0x14
	.space 0x14 - (. - Route110_Text_JacobDefeated)
	.endif
	@ data/text/trainers.inc:734 Route110_Text_JacobPostBattle
	.globl Route110_Text_JacobPostBattle
Route110_Text_JacobPostBattle: @ 0x0825B3B3
	.string "タイヤの パンクや\nブレーキの こしょうは ケガのもと\lちゃんと てんけん しないとな{EOS}"
	.if (. - Route110_Text_JacobPostBattle) > 0x2c
	.error "Route110_Text_JacobPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobPostBattle) < 0x2c
	.space 0x2c - (. - Route110_Text_JacobPostBattle)
	.endif
	@ data/text/trainers.inc:737 Route110_Text_AnthonyIntro (+1 aliases)
	.globl Route110_Text_AnthonyIntro
Route110_Text_AnthonyIntro: @ 0x0825B3DF
	.string "ヘイ ユー!\nワタシの スピードに ついてこれるかな!?{EOS}"
	.if (. - Route110_Text_AnthonyIntro) > 0x1d
	.error "Route110_Text_AnthonyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AnthonyIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_AnthonyIntro)
	.endif
	@ data/text/trainers.inc:740 Route110_Text_AnthonyDefeated (+1 aliases)
	.globl Route110_Text_AnthonyDefeated
Route110_Text_AnthonyDefeated: @ 0x0825B3FC
	.string "オー マイ ガッ!{EOS}"
	.if (. - Route110_Text_AnthonyDefeated) > 0xa
	.error "Route110_Text_AnthonyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AnthonyDefeated) < 0xa
	.space 0xa - (. - Route110_Text_AnthonyDefeated)
	.endif
	@ data/text/trainers.inc:743 Route110_Text_AnthonyPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_AnthonyPostBattle
Route110_Text_AnthonyPostBattle: @ 0x0825B406
	.string "スピードだけじゃ ポケモンしょうぶ\nかてませーん! ハンセイしまーす!{EOS}"
	.if (. - Route110_Text_AnthonyPostBattle) != 0x24
	.error "Route110_Text_AnthonyPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:746 Route110_Text_BenjaminIntro (+1 aliases)
	.globl Route110_Text_BenjaminIntro
Route110_Text_BenjaminIntro: @ 0x0825B42A
	.string "じてんしゃの スピード でても\nあせっちゃ いけないよ!{EOS}"
	.if (. - Route110_Text_BenjaminIntro) > 0x1d
	.error "Route110_Text_BenjaminIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_BenjaminIntro)
	.endif
	@ data/text/trainers.inc:749 Route110_Text_BenjaminDefeated (+1 aliases)
	.globl Route110_Text_BenjaminDefeated
Route110_Text_BenjaminDefeated: @ 0x0825B447
	.string "ポケモンしょうぶも\nあせっちゃ いけないな……{EOS}"
	.if (. - Route110_Text_BenjaminDefeated) > 0x18
	.error "Route110_Text_BenjaminDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminDefeated) < 0x18
	.space 0x18 - (. - Route110_Text_BenjaminDefeated)
	.endif
	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl gText_Rom_25B45F
gText_Rom_25B45F: @ 0x0825B45F
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!{EOS}"
	.if (. - gText_Rom_25B45F) > 0x20
	.error "gText_Rom_25B45F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B45F) < 0x20
	.space 0x20 - (. - gText_Rom_25B45F)
	.endif
	@ data/text/trainers.inc:755 Route110_Text_BenjaminRegister
	.globl Route110_Text_BenjaminRegister
Route110_Text_BenjaminRegister: @ 0x0825B47F
	.string "あせらずに また がんばるか!\nよかったらさ れんらく くれよな{EOS}"
	.if (. - Route110_Text_BenjaminRegister) > 0x21
	.error "Route110_Text_BenjaminRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRegister) < 0x21
	.space 0x21 - (. - Route110_Text_BenjaminRegister)
	.endif
	@ data/text/trainers.inc:758 Route110_Text_BenjaminRematchIntro (+1 aliases)
	.globl Route110_Text_BenjaminRematchIntro
Route110_Text_BenjaminRematchIntro: @ 0x0825B4A0
	.string "おっ! スピード だしすぎ じゃない?\nちょっと のんびり しょうぶ しようよ!{EOS}"
	.if (. - Route110_Text_BenjaminRematchIntro) > 0x29
	.error "Route110_Text_BenjaminRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRematchIntro) < 0x29
	.space 0x29 - (. - Route110_Text_BenjaminRematchIntro)
	.endif
	@ data/text/trainers.inc:761 Route110_Text_BenjaminRematchDefeated (+1 aliases)
	.globl Route110_Text_BenjaminRematchDefeated
Route110_Text_BenjaminRematchDefeated: @ 0x0825B4C9
	.string "べつに あせってないけど\nなぜだか まけて しまうな……{EOS}"
	.if (. - Route110_Text_BenjaminRematchDefeated) > 0x1d
	.error "Route110_Text_BenjaminRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRematchDefeated) < 0x1d
	.space 0x1d - (. - Route110_Text_BenjaminRematchDefeated)
	.endif
	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl gText_Rom_25B4E6
gText_Rom_25B4E6: @ 0x0825B4E6
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!{EOS}"
	.if (. - gText_Rom_25B4E6) > 0x20
	.error "gText_Rom_25B4E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4E6) < 0x20
	.space 0x20 - (. - gText_Rom_25B4E6)
	.endif
	@ data/text/trainers.inc:767 Route110_Text_AbigailIntro (+1 aliases)
	.globl Route110_Text_AbigailIntro
Route110_Text_AbigailIntro: @ 0x0825B506
	.string "トライアスロンは ハードな スポーツ\nすいえい じてんしゃ マラソンの\l3しゅもくを こなすのよ!{EOS}"
	.if (. - Route110_Text_AbigailIntro) > 0x32
	.error "Route110_Text_AbigailIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailIntro) < 0x32
	.space 0x32 - (. - Route110_Text_AbigailIntro)
	.endif
	@ data/text/trainers.inc:770 Route110_Text_AbigailDefeated (+1 aliases)
	.globl Route110_Text_AbigailDefeated
Route110_Text_AbigailDefeated: @ 0x0825B538
	.string "ポケモン しょうぶも ハードだわ!{EOS}"
	.if (. - Route110_Text_AbigailDefeated) > 0x12
	.error "Route110_Text_AbigailDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_AbigailDefeated)
	.endif
	@ data/text/trainers.inc:773 Route110_Text_AbigailPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_AbigailPostBattle
Route110_Text_AbigailPostBattle: @ 0x0825B54A
	.string "つかれたから ひとやすみ\nきゅうけいは たいせつ なのよ{EOS}"
	.if (. - Route110_Text_AbigailPostBattle) != 0x1d
	.error "Route110_Text_AbigailPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:776 Route110_Text_AbigailRegister
	.globl Route110_Text_AbigailRegister
Route110_Text_AbigailRegister: @ 0x0825B567
	.string "あなた きにいったわ!\nまた サイクリングロードで たたかいましょ{EOS}"
	.if (. - Route110_Text_AbigailRegister) > 0x22
	.error "Route110_Text_AbigailRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRegister) < 0x22
	.space 0x22 - (. - Route110_Text_AbigailRegister)
	.endif
	@ data/text/trainers.inc:779 Route110_Text_AbigailRematchIntro (+1 aliases)
	.globl Route110_Text_AbigailRematchIntro
Route110_Text_AbigailRematchIntro: @ 0x0825B589
	.string "じてんしゃに のりながら\nポケモンしょうぶ ってのも いいものよね!{EOS}"
	.if (. - Route110_Text_AbigailRematchIntro) > 0x23
	.error "Route110_Text_AbigailRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchIntro) < 0x23
	.space 0x23 - (. - Route110_Text_AbigailRematchIntro)
	.endif
	@ data/text/trainers.inc:782 Route110_Text_AbigailRematchDefeated (+1 aliases)
	.globl Route110_Text_AbigailRematchDefeated
Route110_Text_AbigailRematchDefeated: @ 0x0825B5AC
	.string "うわー\nどうして そんなに つよいの?{EOS}"
	.if (. - Route110_Text_AbigailRematchDefeated) > 0x14
	.error "Route110_Text_AbigailRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchDefeated) < 0x14
	.space 0x14 - (. - Route110_Text_AbigailRematchDefeated)
	.endif
	@ data/text/trainers.inc:785 Route110_Text_AbigailRematchPostBattle
	.globl Route110_Text_AbigailRematchPostBattle
Route110_Text_AbigailRematchPostBattle: @ 0x0825B5C0
	.string "ひょっとして きろくに\nちょうせん していたのかしら?\pだったら ジャマして ゴメンねー{EOS}"
	.if (. - Route110_Text_AbigailRematchPostBattle) > 0x2d
	.error "Route110_Text_AbigailRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchPostBattle) < 0x2d
	.space 0x2d - (. - Route110_Text_AbigailRematchPostBattle)
	.endif
	@ data/text/trainers.inc:788 Route110_Text_JasmineIntro (+1 aliases)
	.globl Route110_Text_JasmineIntro
Route110_Text_JasmineIntro: @ 0x0825B5ED
	.string "じてんしゃを こぎつづけて\nふとももが パンパンに なっちゃった{EOS}"
	.if (. - Route110_Text_JasmineIntro) > 0x21
	.error "Route110_Text_JasmineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasmineIntro) < 0x21
	.space 0x21 - (. - Route110_Text_JasmineIntro)
	.endif
	@ data/text/trainers.inc:791 Route110_Text_JasmineDefeated (+1 aliases)
	.globl Route110_Text_JasmineDefeated
Route110_Text_JasmineDefeated: @ 0x0825B60E
	.string "きんにくつうが しんぱいだわ……{EOS}"
	.if (. - Route110_Text_JasmineDefeated) > 0x11
	.error "Route110_Text_JasmineDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasmineDefeated) < 0x11
	.space 0x11 - (. - Route110_Text_JasmineDefeated)
	.endif
	@ data/text/trainers.inc:794 Route110_Text_JasminePostBattle
	.globl Route110_Text_JasminePostBattle
Route110_Text_JasminePostBattle: @ 0x0825B61F
	.string "ジムの バッチを もってるの?\nどうりで つよい はずだわ!{EOS}"
	.if (. - Route110_Text_JasminePostBattle) > 0x1f
	.error "Route110_Text_JasminePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasminePostBattle) < 0x1f
	.space 0x1f - (. - Route110_Text_JasminePostBattle)
	.endif
	@ data/text/trainers.inc:797 Route110_Text_EdwardIntro (+1 aliases)
	.globl Route110_Text_EdwardIntro
Route110_Text_EdwardIntro: @ 0x0825B63E
	.string "おまえの さくせんは すべて みえた!\nわたしが まけるはず ない!{EOS}"
	.if (. - Route110_Text_EdwardIntro) > 0x23
	.error "Route110_Text_EdwardIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardIntro) < 0x23
	.space 0x23 - (. - Route110_Text_EdwardIntro)
	.endif
	@ data/text/trainers.inc:800 Route110_Text_EdwardDefeated (+1 aliases)
	.globl Route110_Text_EdwardDefeated
Route110_Text_EdwardDefeated: @ 0x0825B661
	.string "じぶんの はいぼくは みえなかった……!{EOS}"
	.if (. - Route110_Text_EdwardDefeated) > 0x15
	.error "Route110_Text_EdwardDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardDefeated) < 0x15
	.space 0x15 - (. - Route110_Text_EdwardDefeated)
	.endif
	@ data/text/trainers.inc:803 Route110_Text_EdwardPostBattle
	.globl Route110_Text_EdwardPostBattle
Route110_Text_EdwardPostBattle: @ 0x0825B676
	.string "おまえの みらいが みえる……\pふうむ……\nあかるい ひかりが みえるぞ……!{EOS}"
	.if (. - Route110_Text_EdwardPostBattle) > 0x28
	.error "Route110_Text_EdwardPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardPostBattle) < 0x28
	.space 0x28 - (. - Route110_Text_EdwardPostBattle)
	.endif
	@ data/text/trainers.inc:806 Route110_Text_JaclynIntro (+1 aliases)
	.globl Route110_Text_JaclynIntro
Route110_Text_JaclynIntro: @ 0x0825B69E
	.string "おほほほほっ!\nわたくしの ミラクルを みせてあげるわ!{EOS}"
	.if (. - Route110_Text_JaclynIntro) > 0x1d
	.error "Route110_Text_JaclynIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JaclynIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_JaclynIntro)
	.endif
	@ data/text/trainers.inc:809 Route110_Text_JaclynDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_JaclynDefeated
Route110_Text_JaclynDefeated: @ 0x0825B6BB
	.string "ミラクルに まけたーっ!{EOS}"
	.if (. - Route110_Text_JaclynDefeated) != 0xd
	.error "Route110_Text_JaclynDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:812 Route110_Text_JaclynPostBattle
	.globl Route110_Text_JaclynPostBattle
Route110_Text_JaclynPostBattle: @ 0x0825B6C8
	.string "わたくしに かったことが ミラクル……\nそう きせき なのよ!\lいつでも かてるなんて おもわないことね!{EOS}"
	.if (. - Route110_Text_JaclynPostBattle) > 0x36
	.error "Route110_Text_JaclynPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JaclynPostBattle) < 0x36
	.space 0x36 - (. - Route110_Text_JaclynPostBattle)
	.endif
	@ data/text/trainers.inc:815 Route110_Text_EdwinIntro (+1 aliases)
	.globl Route110_Text_EdwinIntro
Route110_Text_EdwinIntro: @ 0x0825B6FE
	.string "キミの ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - Route110_Text_EdwinIntro) > 0x22
	.error "Route110_Text_EdwinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinIntro) < 0x22
	.space 0x22 - (. - Route110_Text_EdwinIntro)
	.endif
	@ data/text/trainers.inc:818 Route110_Text_EdwinDefeated (+1 aliases)
	.globl Route110_Text_EdwinDefeated
Route110_Text_EdwinDefeated: @ 0x0825B720
	.string "コンプリート したかった……!{EOS}"
	.if (. - Route110_Text_EdwinDefeated) > 0x10
	.error "Route110_Text_EdwinDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinDefeated) < 0x10
	.space 0x10 - (. - Route110_Text_EdwinDefeated)
	.endif
	@ data/text/trainers.inc:821 Route110_Text_EdwinPostBattle
	.globl Route110_Text_EdwinPostBattle
Route110_Text_EdwinPostBattle: @ 0x0825B730
	.string "みたことのない ポケモンに であうと\nボクの コレクターだましいが もえるなぁ!{EOS}"
	.if (. - Route110_Text_EdwinPostBattle) > 0x29
	.error "Route110_Text_EdwinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinPostBattle) < 0x29
	.space 0x29 - (. - Route110_Text_EdwinPostBattle)
	.endif
	@ data/text/trainers.inc:824 Route110_Text_EdwinRegister
	.globl Route110_Text_EdwinRegister
Route110_Text_EdwinRegister: @ 0x0825B759
	.string "ぼく エントリーコールも\nたくさん あつめたいんだよねぇ{EOS}"
	.if (. - Route110_Text_EdwinRegister) > 0x1d
	.error "Route110_Text_EdwinRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRegister) < 0x1d
	.space 0x1d - (. - Route110_Text_EdwinRegister)
	.endif
	@ data/text/trainers.inc:827 Route110_Text_EdwinRematchIntro (+1 aliases)
	.globl Route110_Text_EdwinRematchIntro
Route110_Text_EdwinRematchIntro: @ 0x0825B776
	.string "ねえ キミ\nあたらしい ポケモン つかまえた?\pよかったら ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - Route110_Text_EdwinRematchIntro) > 0x3c
	.error "Route110_Text_EdwinRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchIntro) < 0x3c
	.space 0x3c - (. - Route110_Text_EdwinRematchIntro)
	.endif
	@ data/text/trainers.inc:830 Route110_Text_EdwinRematchDefeated (+1 aliases)
	.globl Route110_Text_EdwinRematchDefeated
Route110_Text_EdwinRematchDefeated: @ 0x0825B7B2
	.string "キミの ポケモン\nうらやましいな……{EOS}"
	.if (. - Route110_Text_EdwinRematchDefeated) > 0x13
	.error "Route110_Text_EdwinRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchDefeated) < 0x13
	.space 0x13 - (. - Route110_Text_EdwinRematchDefeated)
	.endif
	@ data/text/trainers.inc:833 Route110_Text_EdwinRematchPostBattle
	.globl Route110_Text_EdwinRematchPostBattle
Route110_Text_EdwinRematchPostBattle: @ 0x0825B7C5
	.string "ああ! とにかく めずらしい ポケモン\nぜんぶ ボクの ものに したいよー!{EOS}"
	.if (. - Route110_Text_EdwinRematchPostBattle) > 0x27
	.error "Route110_Text_EdwinRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchPostBattle) < 0x27
	.space 0x27 - (. - Route110_Text_EdwinRematchPostBattle)
	.endif
	@ data/text/trainers.inc:836 Route110_Text_DaleIntro (+1 aliases)
	.globl Route110_Text_DaleIntro
Route110_Text_DaleIntro: @ 0x0825B7EC
	.string "ええーい!\nうしろから はなしかけるなー!{EOS}"
	.if (. - Route110_Text_DaleIntro) > 0x16
	.error "Route110_Text_DaleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_DaleIntro) < 0x16
	.space 0x16 - (. - Route110_Text_DaleIntro)
	.endif
	@ data/text/trainers.inc:839 Route110_Text_DaleDefeated (+1 aliases)
	.globl Route110_Text_DaleDefeated
Route110_Text_DaleDefeated: @ 0x0825B802
	.string "まけたっ!\nくやしいっ!!{EOS}"
	.if (. - Route110_Text_DaleDefeated) > 0xe
	.error "Route110_Text_DaleDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_DaleDefeated) < 0xe
	.space 0xe - (. - Route110_Text_DaleDefeated)
	.endif
	@ data/text/trainers.inc:842 Route110_Text_DalePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_DalePostBattle
Route110_Text_DalePostBattle: @ 0x0825B810
	.string "すいめんに うかぶ うきを じっと みる……\nしゅうちゅうりょくが たいせつ なんだ{EOS}"
	.if (. - Route110_Text_DalePostBattle) != 0x2b
	.error "Route110_Text_DalePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:845 Route110_Text_IsabelIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelIntro
Route110_Text_IsabelIntro: @ 0x0825B83B
	.string "おほほ! だいじな ポケモンを\nじまん するためなら どこにでも いきますわ{EOS}"
	.if (. - Route110_Text_IsabelIntro) != 0x27
	.error "Route110_Text_IsabelIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B862
gText_Rom_25B862: @ 0x0825B862
	.string "あら まあ イヤですわ{EOS}"
	.if (. - gText_Rom_25B862) != 0xc
	.error "gText_Rom_25B862 must retain its original byte length"
	.endif
	.globl gText_Rom_25B86A
	.set gText_Rom_25B86A, gText_Rom_25B862 + 0x8
	@ data/text/trainers.inc:851 Route110_Text_IsabelPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelPostBattle
Route110_Text_IsabelPostBattle: @ 0x0825B86E
	.string "しょうぶ させるよりも\nだいすきクラブで じまんして こようかしら{EOS}"
	.if (. - Route110_Text_IsabelPostBattle) != 0x22
	.error "Route110_Text_IsabelPostBattle must retain its original byte length"
	.endif
	@ field-script:0x1E91B6 FieldScriptText_25B890
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B890
gText_Rom_25B890: @ 0x0825B890
	.string "わたしの　じまんは　こんなんじゃ\nおわりませんわ！\lなんかいも　つきあって　もらいますわよ！{EOS}"
	.if (. - gText_Rom_25B890) != 0x2f
	.error "gText_Rom_25B890 must retain its original byte length"
	.endif
	.globl gText_Rom_25B8BB
	.set gText_Rom_25B8BB, gText_Rom_25B890 + 0x2b
	@ data/text/trainers.inc:857 Route110_Text_IsabelRematchIntro (+1 aliases)
	.globl Route110_Text_IsabelRematchIntro
Route110_Text_IsabelRematchIntro: @ 0x0825B8BF
	.string "おほほ! だいじな ポケモンなら\nなんどだって じまん しますわ!{EOS}"
	.if (. - Route110_Text_IsabelRematchIntro) > 0x22
	.error "Route110_Text_IsabelRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_IsabelRematchIntro) < 0x22
	.space 0x22 - (. - Route110_Text_IsabelRematchIntro)
	.endif
	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B8E1
gText_Rom_25B8E1: @ 0x0825B8E1
	.string "あら まあ イヤですわ{EOS}"
	.if (. - gText_Rom_25B8E1) != 0xc
	.error "gText_Rom_25B8E1 must retain its original byte length"
	.endif
	.globl gText_Rom_25B8E9
	.set gText_Rom_25B8E9, gText_Rom_25B8E1 + 0x8
	@ data/text/trainers.inc:863 Route110_Text_IsabelRematchPostBattle
	.globl Route110_Text_IsabelRematchPostBattle
Route110_Text_IsabelRematchPostBattle: @ 0x0825B8ED
	.string "ポケモンじまんも やめられないけど\nしょうぶ するのも すきなのよ!{EOS}"
	.if (. - Route110_Text_IsabelRematchPostBattle) > 0x23
	.error "Route110_Text_IsabelRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_IsabelRematchPostBattle) < 0x23
	.space 0x23 - (. - Route110_Text_IsabelRematchPostBattle)
	.endif
	@ data/text/trainers.inc:866 Route110_Text_TimmyIntro (+1 aliases)
	.globl Route110_Text_TimmyIntro
Route110_Text_TimmyIntro: @ 0x0825B910
	.string "この あたりの くさむらで\nかっこいい ポケモン みつけたんだぜ!{EOS}"
	.if (. - Route110_Text_TimmyIntro) > 0x22
	.error "Route110_Text_TimmyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyIntro) < 0x22
	.space 0x22 - (. - Route110_Text_TimmyIntro)
	.endif
	@ data/text/trainers.inc:869 Route110_Text_TimmyDefeated (+1 aliases)
	.globl Route110_Text_TimmyDefeated
Route110_Text_TimmyDefeated: @ 0x0825B932
	.string "かっこいい だけじゃ だめかぁ……{EOS}"
	.if (. - Route110_Text_TimmyDefeated) > 0x12
	.error "Route110_Text_TimmyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_TimmyDefeated)
	.endif
	@ data/text/trainers.inc:872 Route110_Text_TimmyPostBattle
	.globl Route110_Text_TimmyPostBattle
Route110_Text_TimmyPostBattle: @ 0x0825B944
	.string "つかまえた ばかりの ポケモンじゃ\nうまく たたかえないや!{EOS}"
	.if (. - Route110_Text_TimmyPostBattle) > 0x1f
	.error "Route110_Text_TimmyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyPostBattle) < 0x1f
	.space 0x1f - (. - Route110_Text_TimmyPostBattle)
	.endif
	@ data/text/trainers.inc:875 Route110_Text_AlyssaIntro (+1 aliases)
	.globl Route110_Text_AlyssaIntro
Route110_Text_AlyssaIntro: @ 0x0825B963
	.string "サイクリングロード から おちちゃった!\nはずかしい…… しょうぶで まぎらわすわ!{EOS}"
	.if (. - Route110_Text_AlyssaIntro) > 0x2b
	.error "Route110_Text_AlyssaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaIntro) < 0x2b
	.space 0x2b - (. - Route110_Text_AlyssaIntro)
	.endif
	@ data/text/trainers.inc:878 Route110_Text_AlyssaDefeated (+1 aliases)
	.globl Route110_Text_AlyssaDefeated
Route110_Text_AlyssaDefeated: @ 0x0825B98E
	.string "ひぇ まけて しまったわ!{EOS}"
	.if (. - Route110_Text_AlyssaDefeated) > 0xe
	.error "Route110_Text_AlyssaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaDefeated) < 0xe
	.space 0xe - (. - Route110_Text_AlyssaDefeated)
	.endif
	@ data/text/trainers.inc:881 Route110_Text_AlyssaPostBattle
	.globl Route110_Text_AlyssaPostBattle
Route110_Text_AlyssaPostBattle: @ 0x0825B99C
	.string "おっこちるは まけるはで\nはずかし すぎます! わたし!{EOS}"
	.if (. - Route110_Text_AlyssaPostBattle) > 0x1d
	.error "Route110_Text_AlyssaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaPostBattle) < 0x1d
	.space 0x1d - (. - Route110_Text_AlyssaPostBattle)
	.endif
	@ data/text/trainers.inc:884 Route110_Text_JosephIntro (+1 aliases)
	.globl Route110_Text_JosephIntro
Route110_Text_JosephIntro: @ 0x0825B9B9
	.string "よぉぉし とばして いくぜえェ!\nノリの わるいやつは おいてくぜェ!{EOS}"
	.if (. - Route110_Text_JosephIntro) > 0x24
	.error "Route110_Text_JosephIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephIntro) < 0x24
	.space 0x24 - (. - Route110_Text_JosephIntro)
	.endif
	@ data/text/trainers.inc:887 Route110_Text_JosephDefeated (+1 aliases)
	.globl Route110_Text_JosephDefeated
Route110_Text_JosephDefeated: @ 0x0825B9DD
	.string "ノリが いいね あんた……{EOS}"
	.if (. - Route110_Text_JosephDefeated) > 0xe
	.error "Route110_Text_JosephDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephDefeated) < 0xe
	.space 0xe - (. - Route110_Text_JosephDefeated)
	.endif
	@ data/text/trainers.inc:890 Route110_Text_JosephPostBattle
	.globl Route110_Text_JosephPostBattle
Route110_Text_JosephPostBattle: @ 0x0825B9EB
	.string "こんなこと では へこたれないぜェ!\nおれは まけて またひとつ\lいいオトコに なったぜェ!{EOS}"
	.if (. - Route110_Text_JosephPostBattle) > 0x2f
	.error "Route110_Text_JosephPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephPostBattle) < 0x2f
	.space 0x2f - (. - Route110_Text_JosephPostBattle)
	.endif
	@ data/text/trainers.inc:893 Route110_Text_KalebIntro (+1 aliases)
	.globl Route110_Text_KalebIntro
Route110_Text_KalebIntro: @ 0x0825BA1A
	.string "かわいい ポケモンたちが\nたすけあう ところは かわいいぞーーっ!{EOS}"
	.if (. - Route110_Text_KalebIntro) > 0x22
	.error "Route110_Text_KalebIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebIntro) < 0x22
	.space 0x22 - (. - Route110_Text_KalebIntro)
	.endif
	@ data/text/trainers.inc:896 Route110_Text_KalebDefeated (+1 aliases)
	.globl Route110_Text_KalebDefeated
Route110_Text_KalebDefeated: @ 0x0825BA3C
	.string "きみは ちも なみだも ないんだな{EOS}"
	.if (. - Route110_Text_KalebDefeated) > 0x12
	.error "Route110_Text_KalebDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_KalebDefeated)
	.endif
	@ data/text/trainers.inc:899 Route110_Text_KalebPostBattle
	.globl Route110_Text_KalebPostBattle
Route110_Text_KalebPostBattle: @ 0x0825BA4E
	.string "おう よしよし\nよくやったよ かわいい おまえたち{EOS}"
	.if (. - Route110_Text_KalebPostBattle) > 0x1a
	.error "Route110_Text_KalebPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebPostBattle) < 0x1a
	.space 0x1a - (. - Route110_Text_KalebPostBattle)
	.endif
	@ data/text/trainers.inc:902 Route111_Text_DrewIntro (+1 aliases)
	.globl Route111_Text_DrewIntro
Route111_Text_DrewIntro: @ 0x0825BA68
	.string "おっ! ゴーゴーゴーグル にあってるね!\nでも ぼくの ほうが にあってるだろ?\lどっちが にあうか しょうぶだよ!{EOS}"
	.if (. - Route111_Text_DrewIntro) > 0x3b
	.error "Route111_Text_DrewIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewIntro) < 0x3b
	.space 0x3b - (. - Route111_Text_DrewIntro)
	.endif
	@ data/text/trainers.inc:905 Route111_Text_DrewDefeat (+1 aliases)
	.globl Route111_Text_DrewDefeat
Route111_Text_DrewDefeat: @ 0x0825BAA3
	.string "ゴーゴーゴーグルで まわりが\nよく わからなかったよ{EOS}"
	.if (. - Route111_Text_DrewDefeat) > 0x1b
	.error "Route111_Text_DrewDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewDefeat) < 0x1b
	.space 0x1b - (. - Route111_Text_DrewDefeat)
	.endif
	@ data/text/trainers.inc:908 Route111_Text_DrewPostBattle
	.globl Route111_Text_DrewPostBattle
Route111_Text_DrewPostBattle: @ 0x0825BABE
	.string "ゴーゴーゴーグルが あると\nさばくの すなあらしも へいき だから\lそれだけで うれしくなるよ!{EOS}"
	.if (. - Route111_Text_DrewPostBattle) > 0x31
	.error "Route111_Text_DrewPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewPostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_DrewPostBattle)
	.endif
	@ data/text/trainers.inc:911 Route111_Text_HeidiIntro (+1 aliases)
	.globl Route111_Text_HeidiIntro
Route111_Text_HeidiIntro: @ 0x0825BAEF
	.string "さばくの なかでも ピクニック!\pどんな ところでも トレーナー いるから\nしょうぶも できるもんね!{EOS}"
	.if (. - Route111_Text_HeidiIntro) > 0x34
	.error "Route111_Text_HeidiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HeidiIntro) < 0x34
	.space 0x34 - (. - Route111_Text_HeidiIntro)
	.endif
	@ data/text/trainers.inc:914 Route111_Text_HeidiDefeat (+1 aliases)
	.globl Route111_Text_HeidiDefeat
Route111_Text_HeidiDefeat: @ 0x0825BB23
	.string "いやーん いじわるー!{EOS}"
	.if (. - Route111_Text_HeidiDefeat) > 0xc
	.error "Route111_Text_HeidiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HeidiDefeat) < 0xc
	.space 0xc - (. - Route111_Text_HeidiDefeat)
	.endif
	@ data/text/trainers.inc:917 Route111_Text_HeidiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_HeidiPostBattle
Route111_Text_HeidiPostBattle: @ 0x0825BB2F
	.string "すなあらしの なかで たたかうなら\nポケモンの たいりょくに きを つけないと\lすぐに きぜつ しちゃうわよ!{EOS}"
	.if (. - Route111_Text_HeidiPostBattle) != 0x38
	.error "Route111_Text_HeidiPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:920 Route111_Text_BeauIntro (+1 aliases)
	.globl Route111_Text_BeauIntro
Route111_Text_BeauIntro: @ 0x0825BB67
	.string "ゴーゴーゴーグルを つけてると\nなんとなく ヒーローきぶん!\lいまの ぼくなら だれにだって かてるさ!{EOS}"
	.if (. - Route111_Text_BeauIntro) > 0x35
	.error "Route111_Text_BeauIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauIntro) < 0x35
	.space 0x35 - (. - Route111_Text_BeauIntro)
	.endif
	@ data/text/trainers.inc:923 Route111_Text_BeauDefeat (+1 aliases)
	.globl Route111_Text_BeauDefeat
Route111_Text_BeauDefeat: @ 0x0825BB9C
	.string "きぶん だけじゃ かてないか……{EOS}"
	.if (. - Route111_Text_BeauDefeat) > 0x11
	.error "Route111_Text_BeauDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_BeauDefeat)
	.endif
	@ data/text/trainers.inc:926 Route111_Text_BeauPostBattle
	.globl Route111_Text_BeauPostBattle
Route111_Text_BeauPostBattle: @ 0x0825BBAD
	.string "いつかは ほんものの ヒーローに なる!\nそのために もっと がんばって\lポケモンと じぶんを きたえてみせるよ{EOS}"
	.if (. - Route111_Text_BeauPostBattle) > 0x39
	.error "Route111_Text_BeauPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauPostBattle) < 0x39
	.space 0x39 - (. - Route111_Text_BeauPostBattle)
	.endif
	@ data/text/trainers.inc:929 Route111_Text_BeckyIntro (+1 aliases)
	.globl Route111_Text_BeckyIntro
Route111_Text_BeckyIntro: @ 0x0825BBE6
	.string "さばくで カセキが みつかるって きいたけど\nどこに あるのかなあ?{EOS}"
	.if (. - Route111_Text_BeckyIntro) > 0x23
	.error "Route111_Text_BeckyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyIntro) < 0x23
	.space 0x23 - (. - Route111_Text_BeckyIntro)
	.endif
	@ data/text/trainers.inc:932 Route111_Text_BeckyDefeat (+1 aliases)
	.globl Route111_Text_BeckyDefeat
Route111_Text_BeckyDefeat: @ 0x0825BC09
	.string "いまいち だわ……{EOS}"
	.if (. - Route111_Text_BeckyDefeat) > 0xa
	.error "Route111_Text_BeckyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyDefeat) < 0xa
	.space 0xa - (. - Route111_Text_BeckyDefeat)
	.endif
	@ data/text/trainers.inc:935 Route111_Text_BeckyPostBattle
	.globl Route111_Text_BeckyPostBattle
Route111_Text_BeckyPostBattle: @ 0x0825BC13
	.string "さばくで カセキが みつかると いうことは\nむかし ここは うみ だったのね!{EOS}"
	.if (. - Route111_Text_BeckyPostBattle) > 0x28
	.error "Route111_Text_BeckyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyPostBattle) < 0x28
	.space 0x28 - (. - Route111_Text_BeckyPostBattle)
	.endif
	@ data/text/trainers.inc:938 Route111_Text_DustyIntro (+1 aliases)
	.globl Route111_Text_DustyIntro
Route111_Text_DustyIntro: @ 0x0825BC3B
	.string "いせきを さがして 30ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - Route111_Text_DustyIntro) > 0x22
	.error "Route111_Text_DustyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyIntro) < 0x22
	.space 0x22 - (. - Route111_Text_DustyIntro)
	.endif
	@ data/text/trainers.inc:941 Route111_Text_DustyDefeat (+1 aliases)
	.globl Route111_Text_DustyDefeat
Route111_Text_DustyDefeat: @ 0x0825BC5D
	.string "いせきを さがしてるけど\nつよい ポケモンは さがしてないんだ{EOS}"
	.if (. - Route111_Text_DustyDefeat) > 0x20
	.error "Route111_Text_DustyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyDefeat) < 0x20
	.space 0x20 - (. - Route111_Text_DustyDefeat)
	.endif
	@ data/text/trainers.inc:944 Route111_Text_DustyPostBattle
	.globl Route111_Text_DustyPostBattle
Route111_Text_DustyPostBattle: @ 0x0825BC7D
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\nあれ どうだったかな?{EOS}"
	.if (. - Route111_Text_DustyPostBattle) > 0x30
	.error "Route111_Text_DustyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyPostBattle) < 0x30
	.space 0x30 - (. - Route111_Text_DustyPostBattle)
	.endif
	@ data/text/trainers.inc:947 Route111_Text_DustyRegister
	.globl Route111_Text_DustyRegister
Route111_Text_DustyRegister: @ 0x0825BCAD
	.string "つよい ポケモンは さがしてないけど\nなぜだか ポケナビは おきにいり なんだ!{EOS}"
	.if (. - Route111_Text_DustyRegister) > 0x29
	.error "Route111_Text_DustyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRegister) < 0x29
	.space 0x29 - (. - Route111_Text_DustyRegister)
	.endif
	@ data/text/trainers.inc:950 Route111_Text_DustyRematchIntro (+1 aliases)
	.globl Route111_Text_DustyRematchIntro
Route111_Text_DustyRematchIntro: @ 0x0825BCD6
	.string "いせきを さがして 30ねん!\pいや いせきを さがして 40ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - Route111_Text_DustyRematchIntro) > 0x35
	.error "Route111_Text_DustyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRematchIntro) < 0x35
	.space 0x35 - (. - Route111_Text_DustyRematchIntro)
	.endif
	@ data/text/trainers.inc:953 Route111_Text_DustyRematchDefeat (+1 aliases)
	.globl Route111_Text_DustyRematchDefeat
Route111_Text_DustyRematchDefeat: @ 0x0825BD0B
	.string "いせきは みつからない\nつよい ポケモンも みつからない{EOS}"
	.if (. - Route111_Text_DustyRematchDefeat) > 0x1d
	.error "Route111_Text_DustyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRematchDefeat) < 0x1d
	.space 0x1d - (. - Route111_Text_DustyRematchDefeat)
	.endif
	@ data/text/trainers.inc:956 Route111_Text_DustyPostRematch
	.globl Route111_Text_DustyPostRematch
Route111_Text_DustyPostRematch: @ 0x0825BD28
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\pうーん 50ねん だった きもする……\nあれ どうだったかな?{EOS}"
	.if (. - Route111_Text_DustyPostRematch) > 0x44
	.error "Route111_Text_DustyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyPostRematch) < 0x44
	.space 0x44 - (. - Route111_Text_DustyPostRematch)
	.endif
	@ data/text/trainers.inc:959 Route111_Text_TravisIntro (+1 aliases)
	.globl Route111_Text_TravisIntro
Route111_Text_TravisIntro: @ 0x0825BD6C
	.string "ぼくも げんき いっぱい!\nポケモンも げんき いっぱい だよ!{EOS}"
	.if (. - Route111_Text_TravisIntro) > 0x21
	.error "Route111_Text_TravisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisIntro) < 0x21
	.space 0x21 - (. - Route111_Text_TravisIntro)
	.endif
	@ data/text/trainers.inc:962 Route111_Text_TravisDefeat (+1 aliases)
	.globl Route111_Text_TravisDefeat
Route111_Text_TravisDefeat: @ 0x0825BD8D
	.string "ポケモンの げんき なくなったよ{EOS}"
	.if (. - Route111_Text_TravisDefeat) > 0x11
	.error "Route111_Text_TravisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_TravisDefeat)
	.endif
	@ data/text/trainers.inc:965 Route111_Text_TravisPostBattle
	.globl Route111_Text_TravisPostBattle
Route111_Text_TravisPostBattle: @ 0x0825BD9E
	.string "げんき いっぱいに はしりまわる\nトレーナーが いると\lつい そっちを みちゃうよね!{EOS}"
	.if (. - Route111_Text_TravisPostBattle) > 0x2c
	.error "Route111_Text_TravisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisPostBattle) < 0x2c
	.space 0x2c - (. - Route111_Text_TravisPostBattle)
	.endif
	@ data/text/trainers.inc:968 Route111_Text_IreneIntro (+1 aliases)
	.globl Route111_Text_IreneIntro
Route111_Text_IreneIntro: @ 0x0825BDCA
	.string "どこに いくのか しらないけど\nちょっと しょうぶ してみない?{EOS}"
	.if (. - Route111_Text_IreneIntro) > 0x21
	.error "Route111_Text_IreneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IreneIntro) < 0x21
	.space 0x21 - (. - Route111_Text_IreneIntro)
	.endif
	@ data/text/trainers.inc:971 Route111_Text_IreneDefeat (+1 aliases)
	.globl Route111_Text_IreneDefeat
Route111_Text_IreneDefeat: @ 0x0825BDEB
	.string "にくらしいほど つよいのね!{EOS}"
	.if (. - Route111_Text_IreneDefeat) > 0xf
	.error "Route111_Text_IreneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IreneDefeat) < 0xf
	.space 0xf - (. - Route111_Text_IreneDefeat)
	.endif
	@ data/text/trainers.inc:974 Route111_Text_IrenePostBattle
	.globl Route111_Text_IrenePostBattle
Route111_Text_IrenePostBattle: @ 0x0825BDFA
	.string "えんとつやまに いこうかな? って\nおもって いるんだけど\lこのあたりの けしきも いいのよね!{EOS}"
	.if (. - Route111_Text_IrenePostBattle) > 0x31
	.error "Route111_Text_IrenePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IrenePostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_IrenePostBattle)
	.endif
	@ data/text/trainers.inc:977 Route111_Text_DaisukeIntro (+1 aliases)
	.globl Route111_Text_DaisukeIntro
Route111_Text_DaisukeIntro: @ 0x0825BE2B
	.string "おのれを きたえるため\nであう にんげん すべてに\lしょうぶを もうしこんでるッス!{EOS}"
	.if (. - Route111_Text_DaisukeIntro) > 0x2b
	.error "Route111_Text_DaisukeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukeIntro) < 0x2b
	.space 0x2b - (. - Route111_Text_DaisukeIntro)
	.endif
	@ data/text/trainers.inc:980 Route111_Text_DaisukeDefeat (+1 aliases)
	.globl Route111_Text_DaisukeDefeat
Route111_Text_DaisukeDefeat: @ 0x0825BE56
	.string "まいったッス……!{EOS}"
	.if (. - Route111_Text_DaisukeDefeat) > 0xa
	.error "Route111_Text_DaisukeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukeDefeat) < 0xa
	.space 0xa - (. - Route111_Text_DaisukeDefeat)
	.endif
	@ data/text/trainers.inc:983 Route111_Text_DaisukePostBattle
	.globl Route111_Text_DaisukePostBattle
Route111_Text_DaisukePostBattle: @ 0x0825BE60
	.string "おぬしの ように\nつよい トレーナーに かてるまで\lしゅぎょう あるのみッス!{EOS}"
	.if (. - Route111_Text_DaisukePostBattle) > 0x28
	.error "Route111_Text_DaisukePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukePostBattle) < 0x28
	.space 0x28 - (. - Route111_Text_DaisukePostBattle)
	.endif
	@ data/text/trainers.inc:986 Route111_Text_WiltonIntro (+1 aliases)
	.globl Route111_Text_WiltonIntro
Route111_Text_WiltonIntro: @ 0x0825BE88
	.string "きみが ポケモンを どこまで\nきたえているか みせて もらおう!{EOS}"
	.if (. - Route111_Text_WiltonIntro) > 0x21
	.error "Route111_Text_WiltonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonIntro) < 0x21
	.space 0x21 - (. - Route111_Text_WiltonIntro)
	.endif
	@ data/text/trainers.inc:989 Route111_Text_WiltonDefeat (+1 aliases)
	.globl Route111_Text_WiltonDefeat
Route111_Text_WiltonDefeat: @ 0x0825BEA9
	.string "なるほど\nかなり きたえてるね!{EOS}"
	.if (. - Route111_Text_WiltonDefeat) > 0x11
	.error "Route111_Text_WiltonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_WiltonDefeat)
	.endif
	@ data/text/trainers.inc:992 Route111_Text_WiltonPostBattle
	.globl Route111_Text_WiltonPostBattle
Route111_Text_WiltonPostBattle: @ 0x0825BEBA
	.string "ポケモンも トレーナーも\nたたかうことで いろんなことを まなぶ!\pだいじ なのは\nまけても あきらめないことさ!{EOS}"
	.if (. - Route111_Text_WiltonPostBattle) > 0x3a
	.error "Route111_Text_WiltonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonPostBattle) < 0x3a
	.space 0x3a - (. - Route111_Text_WiltonPostBattle)
	.endif
	@ data/text/trainers.inc:995 Route111_Text_WiltonRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_WiltonRegister
Route111_Text_WiltonRegister: @ 0x0825BEF4
	.string "きみの きたえかた さんこうに なるな!\nきが むいたら さいど たたかってほしい{EOS}"
	.if (. - Route111_Text_WiltonRegister) != 0x2a
	.error "Route111_Text_WiltonRegister must retain its original byte length"
	.endif
	@ data/text/trainers.inc:998 Route111_Text_WiltonRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_WiltonRematchIntro
Route111_Text_WiltonRematchIntro: @ 0x0825BF1E
	.string "ぼくたちは さらなる たかみを めざして\nここで ポケモンを きたえている\lきみも いっしょに しゅぎょう しよう!{EOS}"
	.if (. - Route111_Text_WiltonRematchIntro) != 0x3b
	.error "Route111_Text_WiltonRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1001 Route111_Text_WiltonRematchDefeat (+1 aliases)
	.globl Route111_Text_WiltonRematchDefeat
Route111_Text_WiltonRematchDefeat: @ 0x0825BF59
	.string "なかなか やるな!{EOS}"
	.if (. - Route111_Text_WiltonRematchDefeat) > 0xa
	.error "Route111_Text_WiltonRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonRematchDefeat) < 0xa
	.space 0xa - (. - Route111_Text_WiltonRematchDefeat)
	.endif
	@ data/text/trainers.inc:1004 Route111_Text_WiltonPostRematch
	.globl Route111_Text_WiltonPostRematch
Route111_Text_WiltonPostRematch: @ 0x0825BF63
	.string "そんなに つよいなら\nポケモンリーグを めざすと いいよ!{EOS}"
	.if (. - Route111_Text_WiltonPostRematch) > 0x1e
	.error "Route111_Text_WiltonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonPostRematch) < 0x1e
	.space 0x1e - (. - Route111_Text_WiltonPostRematch)
	.endif
	@ data/text/trainers.inc:1007 Route111_Text_BrookeIntro (+1 aliases)
	.globl Route111_Text_BrookeIntro
Route111_Text_BrookeIntro: @ 0x0825BF81
	.string "あら あなたの ポケモン\nかなり つよそうだわ!\lぜひ おてあわせ してくれない?{EOS}"
	.if (. - Route111_Text_BrookeIntro) > 0x2a
	.error "Route111_Text_BrookeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeIntro) < 0x2a
	.space 0x2a - (. - Route111_Text_BrookeIntro)
	.endif
	@ data/text/trainers.inc:1010 Route111_Text_BrookeDefeat (+1 aliases)
	.globl Route111_Text_BrookeDefeat
Route111_Text_BrookeDefeat: @ 0x0825BFAB
	.string "つよそう じゃなくて\nつよいのね!{EOS}"
	.if (. - Route111_Text_BrookeDefeat) > 0x12
	.error "Route111_Text_BrookeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeDefeat) < 0x12
	.space 0x12 - (. - Route111_Text_BrookeDefeat)
	.endif
	@ data/text/trainers.inc:1013 Route111_Text_BrookePostBattle
	.globl Route111_Text_BrookePostBattle
Route111_Text_BrookePostBattle: @ 0x0825BFBD
	.string "あたしも がんばって\nポケモン そだてた つもりだけど\lまだ やること いっぱい あるわね!{EOS}"
	.if (. - Route111_Text_BrookePostBattle) > 0x2f
	.error "Route111_Text_BrookePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookePostBattle) < 0x2f
	.space 0x2f - (. - Route111_Text_BrookePostBattle)
	.endif
	@ data/text/trainers.inc:1016 Route111_Text_BrookeRegister
	.globl Route111_Text_BrookeRegister
Route111_Text_BrookeRegister: @ 0x0825BFEC
	.string "あなた みたいな つよいひとと\nおともだちに なりたいわ!{EOS}"
	.if (. - Route111_Text_BrookeRegister) > 0x1e
	.error "Route111_Text_BrookeRegister may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRegister) < 0x1e
	.space 0x1e - (. - Route111_Text_BrookeRegister)
	.endif
	@ data/text/trainers.inc:1019 Route111_Text_BrookeRematchIntro (+1 aliases)
	.globl Route111_Text_BrookeRematchIntro
Route111_Text_BrookeRematchIntro: @ 0x0825C00A
	.string "ポケモンは つかう わざによって\nつよくなったり よわくなったりも するわ!\pあなたの ポケモン\nどんな わざを おぼえているの?{EOS}"
	.if (. - Route111_Text_BrookeRematchIntro) > 0x42
	.error "Route111_Text_BrookeRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRematchIntro) < 0x42
	.space 0x42 - (. - Route111_Text_BrookeRematchIntro)
	.endif
	@ data/text/trainers.inc:1022 Route111_Text_BrookeRematchDefeat (+1 aliases)
	.globl Route111_Text_BrookeRematchDefeat
Route111_Text_BrookeRematchDefeat: @ 0x0825C04C
	.string "いい わざを おぼえているのね!{EOS}"
	.if (. - Route111_Text_BrookeRematchDefeat) > 0x11
	.error "Route111_Text_BrookeRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRematchDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_BrookeRematchDefeat)
	.endif
	@ data/text/trainers.inc:1025 Route111_Text_BrookePostRematch
	.globl Route111_Text_BrookePostRematch
Route111_Text_BrookePostRematch: @ 0x0825C05D
	.string "あたしの ポケモン しんか させずに\nさきに わざを おぼえさせてから\lそだてた ほうが よかったかな?{EOS}"
	.if (. - Route111_Text_BrookePostRematch) > 0x35
	.error "Route111_Text_BrookePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookePostRematch) < 0x35
	.space 0x35 - (. - Route111_Text_BrookePostRematch)
	.endif
	@ data/text/trainers.inc:1028 Route111_Text_CeliaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_CeliaIntro
Route111_Text_CeliaIntro: @ 0x0825C092
	.string "こんな ところで\nピクニックを するんじゃ なかった!{EOS}"
	.if (. - Route111_Text_CeliaIntro) != 0x1c
	.error "Route111_Text_CeliaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1031 Route111_Text_CeliaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_CeliaDefeat
Route111_Text_CeliaDefeat: @ 0x0825C0AE
	.string "もー\nほんとに くるんじゃ なかった!{EOS}"
	.if (. - Route111_Text_CeliaDefeat) != 0x14
	.error "Route111_Text_CeliaDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1034 Route111_Text_CeliaPostBattle
	.globl Route111_Text_CeliaPostBattle
Route111_Text_CeliaPostBattle: @ 0x0825C0C2
	.string "この すなあらし じゃ\nゴーゴーゴーグルを つけて いても\lおべんとうが ひろげられないんだもん……{EOS}"
	.if (. - Route111_Text_CeliaPostBattle) > 0x33
	.error "Route111_Text_CeliaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CeliaPostBattle) < 0x33
	.space 0x33 - (. - Route111_Text_CeliaPostBattle)
	.endif
	@ data/text/trainers.inc:1037 Route111_Text_BryanIntro (+1 aliases)
	.globl Route111_Text_BryanIntro
Route111_Text_BryanIntro: @ 0x0825C0F5
	.string "きみの つよさは どのくらいか?\nその ナゾを ときあかそう!{EOS}"
	.if (. - Route111_Text_BryanIntro) > 0x20
	.error "Route111_Text_BryanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanIntro) < 0x20
	.space 0x20 - (. - Route111_Text_BryanIntro)
	.endif
	@ data/text/trainers.inc:1040 Route111_Text_BryanDefeat (+1 aliases)
	.globl Route111_Text_BryanDefeat
Route111_Text_BryanDefeat: @ 0x0825C115
	.string "おお そのつよさ\nナゾに みちておる!{EOS}"
	.if (. - Route111_Text_BryanDefeat) > 0x14
	.error "Route111_Text_BryanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanDefeat) < 0x14
	.space 0x14 - (. - Route111_Text_BryanDefeat)
	.endif
	@ data/text/trainers.inc:1043 Route111_Text_BryanPostBattle
	.globl Route111_Text_BryanPostBattle
Route111_Text_BryanPostBattle: @ 0x0825C129
	.string "この さばくには\nナゾが おおい ですぞーっ!{EOS}"
	.if (. - Route111_Text_BryanPostBattle) > 0x18
	.error "Route111_Text_BryanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanPostBattle) < 0x18
	.space 0x18 - (. - Route111_Text_BryanPostBattle)
	.endif
	@ data/text/trainers.inc:1046 Route111_Text_BrandenIntro (+1 aliases)
	.globl Route111_Text_BrandenIntro
Route111_Text_BrandenIntro: @ 0x0825C141
	.string "ぼくに まけて くれたら\nサンドイッチ わけて あげるよ!{EOS}"
	.if (. - Route111_Text_BrandenIntro) > 0x1e
	.error "Route111_Text_BrandenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrandenIntro) < 0x1e
	.space 0x1e - (. - Route111_Text_BrandenIntro)
	.endif
	@ data/text/trainers.inc:1049 Route111_Text_BrandenDefeat (+1 aliases)
	.globl Route111_Text_BrandenDefeat
Route111_Text_BrandenDefeat: @ 0x0825C15F
	.string "ちぇっ!\nサンドイッチに つられると おもったのに{EOS}"
	.if (. - Route111_Text_BrandenDefeat) > 0x1a
	.error "Route111_Text_BrandenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrandenDefeat) < 0x1a
	.space 0x1a - (. - Route111_Text_BrandenDefeat)
	.endif
	@ data/text/trainers.inc:1052 Route111_Text_BrandenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_BrandenPostBattle
Route111_Text_BrandenPostBattle: @ 0x0825C179
	.string "ぼくの サンドも\nサンドイッチ だいすき なんだ{EOS}"
	.if (. - Route111_Text_BrandenPostBattle) != 0x19
	.error "Route111_Text_BrandenPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1055 Route111_Text_TyronIntro (+1 aliases)
	.globl Route111_Text_TyronIntro
Route111_Text_TyronIntro: @ 0x0825C192
	.string "ぼくは こんな ポケモンが すきなんだ!{EOS}"
	.if (. - Route111_Text_TyronIntro) > 0x15
	.error "Route111_Text_TyronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronIntro) < 0x15
	.space 0x15 - (. - Route111_Text_TyronIntro)
	.endif
	@ data/text/trainers.inc:1058 Route111_Text_TyronDefeat (+1 aliases)
	.globl Route111_Text_TyronDefeat
Route111_Text_TyronDefeat: @ 0x0825C1A7
	.string "ちょっと! ぼくの ポケモン\nちゃんと みてくれてた!?{EOS}"
	.if (. - Route111_Text_TyronDefeat) > 0x1d
	.error "Route111_Text_TyronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronDefeat) < 0x1d
	.space 0x1d - (. - Route111_Text_TyronDefeat)
	.endif
	@ data/text/trainers.inc:1061 Route111_Text_TyronPostBattle
	.globl Route111_Text_TyronPostBattle
Route111_Text_TyronPostBattle: @ 0x0825C1C4
	.string "しょうぶを する ときって\nじぶんの ポケモンを みせびらかす\lたのしみが ゼッタイ あるよねー{EOS}"
	.if (. - Route111_Text_TyronPostBattle) > 0x31
	.error "Route111_Text_TyronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronPostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_TyronPostBattle)
	.endif
	@ data/text/trainers.inc:1064 Route111_Text_CelinaIntro (+1 aliases)
	.globl Route111_Text_CelinaIntro
Route111_Text_CelinaIntro: @ 0x0825C1F5
	.string "うふん……\nわたくしを ドキドキ させてね!{EOS}"
	.if (. - Route111_Text_CelinaIntro) > 0x17
	.error "Route111_Text_CelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaIntro) < 0x17
	.space 0x17 - (. - Route111_Text_CelinaIntro)
	.endif
	@ data/text/trainers.inc:1067 Route111_Text_CelinaDefeat (+1 aliases)
	.globl Route111_Text_CelinaDefeat
Route111_Text_CelinaDefeat: @ 0x0825C20C
	.string "す ……ごい\nなんて つよいの{EOS}"
	.if (. - Route111_Text_CelinaDefeat) > 0x10
	.error "Route111_Text_CelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaDefeat) < 0x10
	.space 0x10 - (. - Route111_Text_CelinaDefeat)
	.endif
	@ data/text/trainers.inc:1070 Route111_Text_CelinaPostBattle
	.globl Route111_Text_CelinaPostBattle
Route111_Text_CelinaPostBattle: @ 0x0825C21C
	.string "ま まだ ドキドキ しているわ\nあなたって…… ステキな トレーナーね{EOS}"
	.if (. - Route111_Text_CelinaPostBattle) > 0x24
	.error "Route111_Text_CelinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaPostBattle) < 0x24
	.space 0x24 - (. - Route111_Text_CelinaPostBattle)
	.endif
	@ data/text/trainers.inc:1073 Route111_Text_HaydenIntro (+1 aliases)
	.globl Route111_Text_HaydenIntro
Route111_Text_HaydenIntro: @ 0x0825C240
	.string "おいらは いま はらが へっている\nだから ようしゃは しないぞ!{EOS}"
	.if (. - Route111_Text_HaydenIntro) > 0x22
	.error "Route111_Text_HaydenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenIntro) < 0x22
	.space 0x22 - (. - Route111_Text_HaydenIntro)
	.endif
	@ data/text/trainers.inc:1076 Route111_Text_HaydenDefeat (+1 aliases)
	.globl Route111_Text_HaydenDefeat
Route111_Text_HaydenDefeat: @ 0x0825C262
	.string "ぐうぅ……{EOS}"
	.if (. - Route111_Text_HaydenDefeat) > 0x6
	.error "Route111_Text_HaydenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenDefeat) < 0x6
	.space 0x6 - (. - Route111_Text_HaydenDefeat)
	.endif
	@ data/text/trainers.inc:1079 Route111_Text_HaydenPostBattle
	.globl Route111_Text_HaydenPostBattle
Route111_Text_HaydenPostBattle: @ 0x0825C268
	.string "はらが なった!\nきのみでも やいて たべようかナ?{EOS}"
	.if (. - Route111_Text_HaydenPostBattle) > 0x1b
	.error "Route111_Text_HaydenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenPostBattle) < 0x1b
	.space 0x1b - (. - Route111_Text_HaydenPostBattle)
	.endif
	@ data/text/trainers.inc:1082 Route111_Text_BiancaIntro (+1 aliases)
	.globl Route111_Text_BiancaIntro
Route111_Text_BiancaIntro: @ 0x0825C283
	.string "あなたは キンセツの ほうから きたの?\nじゃ たいりょくも バッチリね!{EOS}"
	.if (. - Route111_Text_BiancaIntro) > 0x26
	.error "Route111_Text_BiancaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BiancaIntro) < 0x26
	.space 0x26 - (. - Route111_Text_BiancaIntro)
	.endif
	@ data/text/trainers.inc:1085 Route111_Text_BiancaDefeat (+1 aliases)
	.globl Route111_Text_BiancaDefeat
Route111_Text_BiancaDefeat: @ 0x0825C2A9
	.string "あらら すごいんだー{EOS}"
	.if (. - Route111_Text_BiancaDefeat) > 0xb
	.error "Route111_Text_BiancaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BiancaDefeat) < 0xb
	.space 0xb - (. - Route111_Text_BiancaDefeat)
	.endif
	@ data/text/trainers.inc:1088 Route111_Text_BiancaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_BiancaPostBattle
Route111_Text_BiancaPostBattle: @ 0x0825C2B4
	.string "この さきの みちのりは\nけっこう ながいわよ!{EOS}"
	.if (. - Route111_Text_BiancaPostBattle) != 0x19
	.error "Route111_Text_BiancaPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1091 Route112_Text_BriceIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BriceIntro
Route112_Text_BriceIntro: @ 0x0825C2CD
	.string "わっはっはっ!\nどうだ?\lオレと しょうぶ しないか?\lわっはっはっ!{EOS}"
	.if (. - Route112_Text_BriceIntro) != 0x24
	.error "Route112_Text_BriceIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1094 Route112_Text_BriceDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BriceDefeat
Route112_Text_BriceDefeat: @ 0x0825C2F1
	.string "まけた……\nわっはっはっ!{EOS}"
	.if (. - Route112_Text_BriceDefeat) != 0xe
	.error "Route112_Text_BriceDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1097 Route112_Text_BricePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BricePostBattle
Route112_Text_BricePostBattle: @ 0x0825C2FF
	.string "いろあざやかな キノコを たべたら……\nわ わらいが とまらない!\lわっはっはっ!{EOS}"
	.if (. - Route112_Text_BricePostBattle) != 0x2a
	.error "Route112_Text_BricePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1100 Route112_Text_TrentIntro (+1 aliases)
	.globl Route112_Text_TrentIntro
Route112_Text_TrentIntro: @ 0x0825C329
	.string "やまのぼりで きたえた オレの あしこし\nちょっとや そっとじゃ くじけないぜ!{EOS}"
	.if (. - Route112_Text_TrentIntro) > 0x29
	.error "Route112_Text_TrentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentIntro) < 0x29
	.space 0x29 - (. - Route112_Text_TrentIntro)
	.endif
	@ data/text/trainers.inc:1103 Route112_Text_TrentDefeat (+1 aliases)
	.globl Route112_Text_TrentDefeat
Route112_Text_TrentDefeat: @ 0x0825C352
	.string "あ……\nあしが つった……{EOS}"
	.if (. - Route112_Text_TrentDefeat) > 0xe
	.error "Route112_Text_TrentDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentDefeat) < 0xe
	.space 0xe - (. - Route112_Text_TrentDefeat)
	.endif
	@ data/text/trainers.inc:1106 Route112_Text_TrentPostBattle
	.globl Route112_Text_TrentPostBattle
Route112_Text_TrentPostBattle: @ 0x0825C360
	.string "なんじゅっキロも ある にもつを せおって\nやまみちを あるき つづけるんだ\lからだが じょうぶに なるぞ!{EOS}"
	.if (. - Route112_Text_TrentPostBattle) > 0x37
	.error "Route112_Text_TrentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentPostBattle) < 0x37
	.space 0x37 - (. - Route112_Text_TrentPostBattle)
	.endif
	@ data/text/trainers.inc:1109 Route112_Text_TrentRegister
	.globl Route112_Text_TrentRegister
Route112_Text_TrentRegister: @ 0x0825C397
	.string "つった あしが いたい……\nちょっと オレの リュックから\lほうたいを だしてくれ\pって ちがうよ それは ポケナビだろ!\nもういいよ とうろく するから{EOS}"
	.if (. - Route112_Text_TrentRegister) > 0x4e
	.error "Route112_Text_TrentRegister may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRegister) < 0x4e
	.space 0x4e - (. - Route112_Text_TrentRegister)
	.endif
	@ data/text/trainers.inc:1112 Route112_Text_TrentRematchIntro (+1 aliases)
	.globl Route112_Text_TrentRematchIntro
Route112_Text_TrentRematchIntro: @ 0x0825C3E5
	.string "やまのぼりで きたえてるからな\nかなり パワフルだぞ!{EOS}"
	.if (. - Route112_Text_TrentRematchIntro) > 0x1c
	.error "Route112_Text_TrentRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchIntro) < 0x1c
	.space 0x1c - (. - Route112_Text_TrentRematchIntro)
	.endif
	@ data/text/trainers.inc:1115 Route112_Text_TrentRematchDefeat (+1 aliases)
	.globl Route112_Text_TrentRematchDefeat
Route112_Text_TrentRematchDefeat: @ 0x0825C401
	.string "パワーで まけたか?{EOS}"
	.if (. - Route112_Text_TrentRematchDefeat) > 0xb
	.error "Route112_Text_TrentRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchDefeat) < 0xb
	.space 0xb - (. - Route112_Text_TrentRematchDefeat)
	.endif
	@ data/text/trainers.inc:1118 Route112_Text_TrentRematchPostBattle
	.globl Route112_Text_TrentRematchPostBattle
Route112_Text_TrentRematchPostBattle: @ 0x0825C40C
	.string "えんとつやまの うえには\nすごい トレーナーが いるらしいぞ!\lこんど しょうぶに いくつもりだ!{EOS}"
	.if (. - Route112_Text_TrentRematchPostBattle) > 0x32
	.error "Route112_Text_TrentRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchPostBattle) < 0x32
	.space 0x32 - (. - Route112_Text_TrentRematchPostBattle)
	.endif
	@ data/text/trainers.inc:1121 Route112_Text_LarryIntro (+1 aliases)
	.globl Route112_Text_LarryIntro
Route112_Text_LarryIntro: @ 0x0825C43E
	.string "ぼくは つよいんだ……\nまけても ないたり しないぞ……!{EOS}"
	.if (. - Route112_Text_LarryIntro) > 0x1e
	.error "Route112_Text_LarryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryIntro) < 0x1e
	.space 0x1e - (. - Route112_Text_LarryIntro)
	.endif
	@ data/text/trainers.inc:1124 Route112_Text_LarryDefeat (+1 aliases)
	.globl Route112_Text_LarryDefeat
Route112_Text_LarryDefeat: @ 0x0825C45C
	.string "うわーーーん!{EOS}"
	.if (. - Route112_Text_LarryDefeat) > 0x8
	.error "Route112_Text_LarryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryDefeat) < 0x8
	.space 0x8 - (. - Route112_Text_LarryDefeat)
	.endif
	@ data/text/trainers.inc:1127 Route112_Text_LarryPostBattle
	.globl Route112_Text_LarryPostBattle
Route112_Text_LarryPostBattle: @ 0x0825C464
	.string "おかあさんに あえなくて\nさみしいから ないてるんじゃ ないよ!\lぐすん……{EOS}"
	.if (. - Route112_Text_LarryPostBattle) > 0x27
	.error "Route112_Text_LarryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryPostBattle) < 0x27
	.space 0x27 - (. - Route112_Text_LarryPostBattle)
	.endif
	@ data/text/trainers.inc:1130 Route112_Text_CarolIntro (+1 aliases)
	.globl Route112_Text_CarolIntro
Route112_Text_CarolIntro: @ 0x0825C48B
	.string "ピクニックと いえば うた!\nさあ いっしょに うたいましょ!{EOS}"
	.if (. - Route112_Text_CarolIntro) > 0x20
	.error "Route112_Text_CarolIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolIntro) < 0x20
	.space 0x20 - (. - Route112_Text_CarolIntro)
	.endif
	@ data/text/trainers.inc:1133 Route112_Text_CarolDefeat (+1 aliases)
	.globl Route112_Text_CarolDefeat
Route112_Text_CarolDefeat: @ 0x0825C4AB
	.string "こんなに つよいなんて……!{EOS}"
	.if (. - Route112_Text_CarolDefeat) > 0xf
	.error "Route112_Text_CarolDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolDefeat) < 0xf
	.space 0xf - (. - Route112_Text_CarolDefeat)
	.endif
	@ data/text/trainers.inc:1136 Route112_Text_CarolPostBattle
	.globl Route112_Text_CarolPostBattle
Route112_Text_CarolPostBattle: @ 0x0825C4BA
	.string "うたも ポケモンしょうぶも\nうまい へた なんて かんけい ないよ!\lたのしんだ ほうが かち なのよ!{EOS}"
	.if (. - Route112_Text_CarolPostBattle) > 0x35
	.error "Route112_Text_CarolPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolPostBattle) < 0x35
	.space 0x35 - (. - Route112_Text_CarolPostBattle)
	.endif
	@ data/text/trainers.inc:1139 Route112_Text_BryantIntro (+1 aliases)
	.globl Route112_Text_BryantIntro
Route112_Text_BryantIntro: @ 0x0825C4EF
	.string "ほのおの ぬけみちで つかまえた\nホカホカの ポケモン みせてやろー!{EOS}"
	.if (. - Route112_Text_BryantIntro) > 0x24
	.error "Route112_Text_BryantIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantIntro) < 0x24
	.space 0x24 - (. - Route112_Text_BryantIntro)
	.endif
	@ data/text/trainers.inc:1142 Route112_Text_BryantDefeat (+1 aliases)
	.globl Route112_Text_BryantDefeat
Route112_Text_BryantDefeat: @ 0x0825C513
	.string "おお ボコボコだ{EOS}"
	.if (. - Route112_Text_BryantDefeat) > 0x9
	.error "Route112_Text_BryantDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantDefeat) < 0x9
	.space 0x9 - (. - Route112_Text_BryantDefeat)
	.endif
	@ data/text/trainers.inc:1145 Route112_Text_BryantPostBattle
	.globl Route112_Text_BryantPostBattle
Route112_Text_BryantPostBattle: @ 0x0825C51C
	.string "ナカナカ すてきな\nたたかいかたじゃ ないか きみぃ!{EOS}"
	.if (. - Route112_Text_BryantPostBattle) > 0x1c
	.error "Route112_Text_BryantPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantPostBattle) < 0x1c
	.space 0x1c - (. - Route112_Text_BryantPostBattle)
	.endif
	@ data/text/trainers.inc:1148 Route112_Text_ShaylaIntro (+1 aliases)
	.globl Route112_Text_ShaylaIntro
Route112_Text_ShaylaIntro: @ 0x0825C538
	.string "アラ! すてきな トレーナーさん\nロマンチックな しょうぶを おねがいね!\lマアマア つよいわよ わたし!{EOS}"
	.if (. - Route112_Text_ShaylaIntro) > 0x36
	.error "Route112_Text_ShaylaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaIntro) < 0x36
	.space 0x36 - (. - Route112_Text_ShaylaIntro)
	.endif
	@ data/text/trainers.inc:1151 Route112_Text_ShaylaDefeat (+1 aliases)
	.globl Route112_Text_ShaylaDefeat
Route112_Text_ShaylaDefeat: @ 0x0825C56E
	.string "なんて つよいのかしら\nおねえさん おどろいちゃった!{EOS}"
	.if (. - Route112_Text_ShaylaDefeat) > 0x1c
	.error "Route112_Text_ShaylaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaDefeat) < 0x1c
	.space 0x1c - (. - Route112_Text_ShaylaDefeat)
	.endif
	@ data/text/trainers.inc:1154 Route112_Text_ShaylaPostBattle
	.globl Route112_Text_ShaylaPostBattle
Route112_Text_ShaylaPostBattle: @ 0x0825C58A
	.string "ねえ いま いそがしいの?\nえっと もし よかったら\lさっそく 2かいせん と おもって……\lん? いそがしいなら いいわ{EOS}"
	.if (. - Route112_Text_ShaylaPostBattle) > 0x3e
	.error "Route112_Text_ShaylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaPostBattle) < 0x3e
	.space 0x3e - (. - Route112_Text_ShaylaPostBattle)
	.endif
	@ data/text/trainers.inc:1157 Route113_Text_JaylenIntro (+1 aliases)
	.globl Route113_Text_JaylenIntro
Route113_Text_JaylenIntro: @ 0x0825C5C8
	.string "この あたりが わりと すずしいの\nなんでか しってるかい?{EOS}"
	.if (. - Route113_Text_JaylenIntro) > 0x1f
	.error "Route113_Text_JaylenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_JaylenIntro) < 0x1f
	.space 0x1f - (. - Route113_Text_JaylenIntro)
	.endif
	@ data/text/trainers.inc:1160 Route113_Text_JaylenDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_JaylenDefeat
Route113_Text_JaylenDefeat: @ 0x0825C5E7
	.string "ぴゅーっ!\nまけたーっ!{EOS}"
	.if (. - Route113_Text_JaylenDefeat) != 0xd
	.error "Route113_Text_JaylenDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1163 Route113_Text_JaylenPostBattle
	.globl Route113_Text_JaylenPostBattle
Route113_Text_JaylenPostBattle: @ 0x0825C5F4
	.string "かざんばいが たいようの ひかりを\nさえぎってるから ひえるんだね!\lあつがりの オレには たすかるよ!{EOS}"
	.if (. - Route113_Text_JaylenPostBattle) > 0x35
	.error "Route113_Text_JaylenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_JaylenPostBattle) < 0x35
	.space 0x35 - (. - Route113_Text_JaylenPostBattle)
	.endif
	@ data/text/trainers.inc:1166 Route113_Text_DillonIntro (+1 aliases)
	.globl Route113_Text_DillonIntro
Route113_Text_DillonIntro: @ 0x0825C629
	.string "やまの ふんかは\nちきゅうが いきている しょうこ!{EOS}"
	.if (. - Route113_Text_DillonIntro) > 0x1b
	.error "Route113_Text_DillonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_DillonIntro)
	.endif
	@ data/text/trainers.inc:1169 Route113_Text_DillonDefeat (+1 aliases)
	.globl Route113_Text_DillonDefeat
Route113_Text_DillonDefeat: @ 0x0825C644
	.string "つよいな おまえーっ!{EOS}"
	.if (. - Route113_Text_DillonDefeat) > 0xc
	.error "Route113_Text_DillonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonDefeat) < 0xc
	.space 0xc - (. - Route113_Text_DillonDefeat)
	.endif
	@ data/text/trainers.inc:1172 Route113_Text_DillonPostBattle
	.globl Route113_Text_DillonPostBattle
Route113_Text_DillonPostBattle: @ 0x0825C650
	.string "ごほ がへっ!\nはいが はいに はいった……\pうけなかった……\nさむい…… ブルブル……{EOS}"
	.if (. - Route113_Text_DillonPostBattle) > 0x2d
	.error "Route113_Text_DillonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonPostBattle) < 0x2d
	.space 0x2d - (. - Route113_Text_DillonPostBattle)
	.endif
	@ data/text/trainers.inc:1175 Route113_Text_MadelineIntro (+1 aliases)
	.globl Route113_Text_MadelineIntro
Route113_Text_MadelineIntro: @ 0x0825C67D
	.string "あたしの ドンメルちゃんに\nかざんばいが かからないように\lパラソルを さしているの{EOS}"
	.if (. - Route113_Text_MadelineIntro) > 0x2b
	.error "Route113_Text_MadelineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineIntro) < 0x2b
	.space 0x2b - (. - Route113_Text_MadelineIntro)
	.endif
	@ data/text/trainers.inc:1178 Route113_Text_MadelineDefeat (+1 aliases)
	.globl Route113_Text_MadelineDefeat
Route113_Text_MadelineDefeat: @ 0x0825C6A8
	.string "はあ はあ……\nつかれましたわ……{EOS}"
	.if (. - Route113_Text_MadelineDefeat) > 0x12
	.error "Route113_Text_MadelineDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineDefeat) < 0x12
	.space 0x12 - (. - Route113_Text_MadelineDefeat)
	.endif
	@ data/text/trainers.inc:1181 Route113_Text_MadelinePostBattle
	.globl Route113_Text_MadelinePostBattle
Route113_Text_MadelinePostBattle: @ 0x0825C6BA
	.string "とても おつよいのね\nおねえさん かんしん しちゃったわ{EOS}"
	.if (. - Route113_Text_MadelinePostBattle) > 0x1d
	.error "Route113_Text_MadelinePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelinePostBattle) < 0x1d
	.space 0x1d - (. - Route113_Text_MadelinePostBattle)
	.endif
	@ data/text/trainers.inc:1184 Route113_Text_MadelineRegister
	.globl Route113_Text_MadelineRegister
Route113_Text_MadelineRegister: @ 0x0825C6D7
	.string "ね ちょっと パラソルに はいって\nポケナビを とうろく していって!{EOS}"
	.if (. - Route113_Text_MadelineRegister) > 0x24
	.error "Route113_Text_MadelineRegister may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineRegister) < 0x24
	.space 0x24 - (. - Route113_Text_MadelineRegister)
	.endif
	@ data/text/trainers.inc:1187 Route113_Text_MadelineRematchIntro (+1 aliases)
	.globl Route113_Text_MadelineRematchIntro
Route113_Text_MadelineRematchIntro: @ 0x0825C6FB
	.string "おひさしぶりね\nよろしかったら しょうぶ しません?{EOS}"
	.if (. - Route113_Text_MadelineRematchIntro) > 0x1b
	.error "Route113_Text_MadelineRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineRematchIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_MadelineRematchIntro)
	.endif
	@ data/text/trainers.inc:1190 Route113_Text_MadelineRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_MadelineRematchDefeat
Route113_Text_MadelineRematchDefeat: @ 0x0825C716
	.string "おみごと ですわ{EOS}"
	.if (. - Route113_Text_MadelineRematchDefeat) != 0x9
	.error "Route113_Text_MadelineRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1193 Route113_Text_MadelinePostRematch
	.globl Route113_Text_MadelinePostRematch
Route113_Text_MadelinePostRematch: @ 0x0825C71F
	.string "あいかわらず おつよいのね\nおねえさん かんしん しちゃったわ{EOS}"
	.if (. - Route113_Text_MadelinePostRematch) > 0x20
	.error "Route113_Text_MadelinePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelinePostRematch) < 0x20
	.space 0x20 - (. - Route113_Text_MadelinePostRematch)
	.endif
	@ data/text/trainers.inc:1196 Route113_Text_LaoIntro (+1 aliases)
	.globl Route113_Text_LaoIntro
Route113_Text_LaoIntro: @ 0x0825C73F
	.string "はいの なかから ドロロンッ!!\nしょうぶで ござる!{EOS}"
	.if (. - Route113_Text_LaoIntro) > 0x1c
	.error "Route113_Text_LaoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoIntro) < 0x1c
	.space 0x1c - (. - Route113_Text_LaoIntro)
	.endif
	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C75B
gText_Rom_25C75B: @ 0x0825C75B
	.string "まいったで ござる{EOS}"
	.if (. - gText_Rom_25C75B) > 0xa
	.error "gText_Rom_25C75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C75B) < 0xa
	.space 0xa - (. - gText_Rom_25C75B)
	.endif
	@ data/text/trainers.inc:1202 Route113_Text_LaoPostBattle
	.globl Route113_Text_LaoPostBattle
Route113_Text_LaoPostBattle: @ 0x0825C765
	.string "もっと かくれかたを けんきゅう しよう\nそれでは しつれいするで ござる{EOS}"
	.if (. - Route113_Text_LaoPostBattle) > 0x26
	.error "Route113_Text_LaoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoPostBattle) < 0x26
	.space 0x26 - (. - Route113_Text_LaoPostBattle)
	.endif
	@ data/text/trainers.inc:1205 Route113_Text_LaoRegister
	.globl Route113_Text_LaoRegister
Route113_Text_LaoRegister: @ 0x0825C78B
	.string "やあ! にんぽう\nポケナビ とうろくのじゅつで ござる!{EOS}"
	.if (. - Route113_Text_LaoRegister) > 0x1d
	.error "Route113_Text_LaoRegister may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoRegister) < 0x1d
	.space 0x1d - (. - Route113_Text_LaoRegister)
	.endif
	@ data/text/trainers.inc:1208 Route113_Text_LaoRematchIntro (+1 aliases)
	.globl Route113_Text_LaoRematchIntro
Route113_Text_LaoRematchIntro: @ 0x0825C7A8
	.string "はいの なかから ドロロロンッ!!\nしょうぶで ござる!{EOS}"
	.if (. - Route113_Text_LaoRematchIntro) > 0x1d
	.error "Route113_Text_LaoRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoRematchIntro) < 0x1d
	.space 0x1d - (. - Route113_Text_LaoRematchIntro)
	.endif
	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C7C5
gText_Rom_25C7C5: @ 0x0825C7C5
	.string "まいったで ござる{EOS}"
	.if (. - gText_Rom_25C7C5) > 0xa
	.error "gText_Rom_25C7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7C5) < 0xa
	.space 0xa - (. - gText_Rom_25C7C5)
	.endif
	@ data/text/trainers.inc:1214 Route113_Text_LaoPostRematch
	.globl Route113_Text_LaoPostRematch
Route113_Text_LaoPostRematch: @ 0x0825C7CF
	.string "かくれかたは よかったが\nしょうぶが いまいち だった……\pそれでは しつれいするで ござる{EOS}"
	.if (. - Route113_Text_LaoPostRematch) > 0x2f
	.error "Route113_Text_LaoPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoPostRematch) < 0x2f
	.space 0x2f - (. - Route113_Text_LaoPostRematch)
	.endif
	@ data/text/trainers.inc:1217 Route113_Text_LungIntro (+1 aliases)
	.globl Route113_Text_LungIntro
Route113_Text_LungIntro: @ 0x0825C7FE
	.string "みつけてくれて ありがとう!\nでも しょうぶは べつだよ!{EOS}"
	.if (. - Route113_Text_LungIntro) > 0x1e
	.error "Route113_Text_LungIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungIntro) < 0x1e
	.space 0x1e - (. - Route113_Text_LungIntro)
	.endif
	@ data/text/trainers.inc:1220 Route113_Text_LungDefeat (+1 aliases)
	.globl Route113_Text_LungDefeat
Route113_Text_LungDefeat: @ 0x0825C81C
	.string "にんぽう かざんばい がくれ!\p…… って もう おわり?{EOS}"
	.if (. - Route113_Text_LungDefeat) > 0x1e
	.error "Route113_Text_LungDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_LungDefeat)
	.endif
	@ data/text/trainers.inc:1223 Route113_Text_LungPostBattle
	.globl Route113_Text_LungPostBattle
Route113_Text_LungPostBattle: @ 0x0825C83A
	.string "かくれていて なにが しんぱいって\nだれも とおらないと さびしいんだよね{EOS}"
	.if (. - Route113_Text_LungPostBattle) > 0x26
	.error "Route113_Text_LungPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungPostBattle) < 0x26
	.space 0x26 - (. - Route113_Text_LungPostBattle)
	.endif
	@ data/text/trainers.inc:1226 Route113_Text_ToriIntro (+1 aliases)
	.globl Route113_Text_ToriIntro
Route113_Text_ToriIntro: @ 0x0825C860
	.string "ナナ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!{EOS}"
	.if (. - Route113_Text_ToriIntro) > 0x29
	.error "Route113_Text_ToriIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriIntro) < 0x29
	.space 0x29 - (. - Route113_Text_ToriIntro)
	.endif
	@ data/text/trainers.inc:1229 Route113_Text_ToriDefeat (+1 aliases)
	.globl Route113_Text_ToriDefeat
Route113_Text_ToriDefeat: @ 0x0825C889
	.string "ナナ『まけちゃった\nつまんないから かざんばい あつめよ!{EOS}"
	.if (. - Route113_Text_ToriDefeat) > 0x1e
	.error "Route113_Text_ToriDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_ToriDefeat)
	.endif
	@ data/text/trainers.inc:1232 Route113_Text_ToriPostBattle
	.globl Route113_Text_ToriPostBattle
Route113_Text_ToriPostBattle: @ 0x0825C8A7
	.string "ナナ『かざんばい どれくらい たまったかな?\nしろいビードロ つくれると いいのにね!{EOS}"
	.if (. - Route113_Text_ToriPostBattle) > 0x2c
	.error "Route113_Text_ToriPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriPostBattle) < 0x2c
	.space 0x2c - (. - Route113_Text_ToriPostBattle)
	.endif
	@ data/text/trainers.inc:1235 Route113_Text_ToriNotEnoughMons (+1 aliases)
	.globl Route113_Text_ToriNotEnoughMons
Route113_Text_ToriNotEnoughMons: @ 0x0825C8D3
	.string "ナナ『あたしたち 2たい2で たたかいたいの\nそうしないと まけちゃうもん!{EOS}"
	.if (. - Route113_Text_ToriNotEnoughMons) > 0x27
	.error "Route113_Text_ToriNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriNotEnoughMons) < 0x27
	.space 0x27 - (. - Route113_Text_ToriNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1238 Route113_Text_TiaIntro (+1 aliases)
	.globl Route113_Text_TiaIntro
Route113_Text_TiaIntro: @ 0x0825C8FA
	.string "ネネ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!{EOS}"
	.if (. - Route113_Text_TiaIntro) > 0x29
	.error "Route113_Text_TiaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaIntro) < 0x29
	.space 0x29 - (. - Route113_Text_TiaIntro)
	.endif
	@ data/text/trainers.inc:1241 Route113_Text_TiaDefeat (+1 aliases)
	.globl Route113_Text_TiaDefeat
Route113_Text_TiaDefeat: @ 0x0825C923
	.string "ネネ『かてなかった\nつまんないから かざんばい あつめよ!{EOS}"
	.if (. - Route113_Text_TiaDefeat) > 0x1e
	.error "Route113_Text_TiaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_TiaDefeat)
	.endif
	@ data/text/trainers.inc:1244 Route113_Text_TiaPostBattle
	.globl Route113_Text_TiaPostBattle
Route113_Text_TiaPostBattle: @ 0x0825C941
	.string "ネネ『かざんばい けっこう たまったよ!\nもう しろいビードロ つくれるよ きっと!{EOS}"
	.if (. - Route113_Text_TiaPostBattle) > 0x2b
	.error "Route113_Text_TiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaPostBattle) < 0x2b
	.space 0x2b - (. - Route113_Text_TiaPostBattle)
	.endif
	@ data/text/trainers.inc:1247 Route113_Text_TiaNotEnoughMons (+1 aliases)
	.globl Route113_Text_TiaNotEnoughMons
Route113_Text_TiaNotEnoughMons: @ 0x0825C96C
	.string "ネネ『あたしたち 2たい2で たたかいたいの\nそうしないと かてないもん!{EOS}"
	.if (. - Route113_Text_TiaNotEnoughMons) > 0x26
	.error "Route113_Text_TiaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaNotEnoughMons) < 0x26
	.space 0x26 - (. - Route113_Text_TiaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1250 Route113_Text_CobyIntro (+1 aliases)
	.globl Route113_Text_CobyIntro
Route113_Text_CobyIntro: @ 0x0825C992
	.string "おまえ なんか この つばさで\nふきとばして やるぜっ!{EOS}"
	.if (. - Route113_Text_CobyIntro) > 0x1d
	.error "Route113_Text_CobyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyIntro) < 0x1d
	.space 0x1d - (. - Route113_Text_CobyIntro)
	.endif
	@ data/text/trainers.inc:1253 Route113_Text_CobyDefeat (+1 aliases)
	.globl Route113_Text_CobyDefeat
Route113_Text_CobyDefeat: @ 0x0825C9AF
	.string "え あれ?{EOS}"
	.if (. - Route113_Text_CobyDefeat) > 0x6
	.error "Route113_Text_CobyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyDefeat) < 0x6
	.space 0x6 - (. - Route113_Text_CobyDefeat)
	.endif
	@ data/text/trainers.inc:1256 Route113_Text_CobyPostBattle
	.globl Route113_Text_CobyPostBattle
Route113_Text_CobyPostBattle: @ 0x0825C9B5
	.string "そんなに あっさり かたれると\nなにを いって いいか わからない……{EOS}"
	.if (. - Route113_Text_CobyPostBattle) > 0x24
	.error "Route113_Text_CobyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyPostBattle) < 0x24
	.space 0x24 - (. - Route113_Text_CobyPostBattle)
	.endif
	@ data/text/trainers.inc:1259 Route113_Text_SophieIntro (+1 aliases)
	.globl Route113_Text_SophieIntro
Route113_Text_SophieIntro: @ 0x0825C9D9
	.string "あったかくて ねむく なっちゃう\nねむけ ざましに あいてを してよ!{EOS}"
	.if (. - Route113_Text_SophieIntro) > 0x24
	.error "Route113_Text_SophieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophieIntro) < 0x24
	.space 0x24 - (. - Route113_Text_SophieIntro)
	.endif
	@ data/text/trainers.inc:1262 Route113_Text_SophieDefeat (+1 aliases)
	.globl Route113_Text_SophieDefeat
Route113_Text_SophieDefeat: @ 0x0825C9FD
	.string "きっと これは ユメなのよ……{EOS}"
	.if (. - Route113_Text_SophieDefeat) > 0x10
	.error "Route113_Text_SophieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophieDefeat) < 0x10
	.space 0x10 - (. - Route113_Text_SophieDefeat)
	.endif
	@ data/text/trainers.inc:1265 Route113_Text_SophiePostBattle
	.globl Route113_Text_SophiePostBattle
Route113_Text_SophiePostBattle: @ 0x0825CA0D
	.string "まけて くやしい から\nもう ここで フテね しちゃうわ!\lぐーぐー{EOS}"
	.if (. - Route113_Text_SophiePostBattle) > 0x23
	.error "Route113_Text_SophiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophiePostBattle) < 0x23
	.space 0x23 - (. - Route113_Text_SophiePostBattle)
	.endif
	@ data/text/trainers.inc:1268 Route113_Text_LawrenceIntro (+1 aliases)
	.globl Route113_Text_LawrenceIntro
Route113_Text_LawrenceIntro: @ 0x0825CA30
	.string "もしかして かざんばい あつめの\nとちゅう だった?{EOS}"
	.if (. - Route113_Text_LawrenceIntro) > 0x1b
	.error "Route113_Text_LawrenceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LawrenceIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_LawrenceIntro)
	.endif
	@ data/text/trainers.inc:1271 Route113_Text_LawrenceDefeat (+1 aliases)
	.globl Route113_Text_LawrenceDefeat
Route113_Text_LawrenceDefeat: @ 0x0825CA4B
	.string "えへへ まけちゃったね{EOS}"
	.if (. - Route113_Text_LawrenceDefeat) > 0xc
	.error "Route113_Text_LawrenceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LawrenceDefeat) < 0xc
	.space 0xc - (. - Route113_Text_LawrenceDefeat)
	.endif
	@ data/text/trainers.inc:1274 Route113_Text_LawrencePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_LawrencePostBattle
Route113_Text_LawrencePostBattle: @ 0x0825CA57
	.string "ぼくも はいに もぐっちゃおう かしら{EOS}"
	.if (. - Route113_Text_LawrencePostBattle) != 0x14
	.error "Route113_Text_LawrencePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1277 Route113_Text_WyattIntro (+1 aliases)
	.globl Route113_Text_WyattIntro
Route113_Text_WyattIntro: @ 0x0825CA6B
	.string "ぼ ボクと たたかうって いうんですか!\nまだ つかまえた ばかりなのに!{EOS}"
	.if (. - Route113_Text_WyattIntro) > 0x26
	.error "Route113_Text_WyattIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattIntro) < 0x26
	.space 0x26 - (. - Route113_Text_WyattIntro)
	.endif
	@ data/text/trainers.inc:1280 Route113_Text_WyattDefeat (+1 aliases)
	.globl Route113_Text_WyattDefeat
Route113_Text_WyattDefeat: @ 0x0825CA91
	.string "か かって うれしい ですか!\nこんな ボクに かって うれしいですか!{EOS}"
	.if (. - Route113_Text_WyattDefeat) > 0x25
	.error "Route113_Text_WyattDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattDefeat) < 0x25
	.space 0x25 - (. - Route113_Text_WyattDefeat)
	.endif
	@ data/text/trainers.inc:1283 Route113_Text_WyattPostBattle
	.globl Route113_Text_WyattPostBattle
Route113_Text_WyattPostBattle: @ 0x0825CAB6
	.string "はいしゃに こえを かけて くれるって\nいうんですか!\lか カッコいい ですね! ふん!{EOS}"
	.if (. - Route113_Text_WyattPostBattle) > 0x2d
	.error "Route113_Text_WyattPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattPostBattle) < 0x2d
	.space 0x2d - (. - Route113_Text_WyattPostBattle)
	.endif
	@ data/text/trainers.inc:1286 Route114_Text_LennyIntro (+1 aliases)
	.globl Route114_Text_LennyIntro
Route114_Text_LennyIntro: @ 0x0825CAE3
	.string "やっほーっ!\p……\pこだまの かわりに\nやっほー! って いってくれよ!{EOS}"
	.if (. - Route114_Text_LennyIntro) > 0x25
	.error "Route114_Text_LennyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyIntro) < 0x25
	.space 0x25 - (. - Route114_Text_LennyIntro)
	.endif
	@ data/text/trainers.inc:1289 Route114_Text_LennyDefeat (+1 aliases)
	.globl Route114_Text_LennyDefeat
Route114_Text_LennyDefeat: @ 0x0825CB08
	.string "やっほーっ!{EOS}"
	.if (. - Route114_Text_LennyDefeat) > 0x7
	.error "Route114_Text_LennyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyDefeat) < 0x7
	.space 0x7 - (. - Route114_Text_LennyDefeat)
	.endif
	@ data/text/trainers.inc:1292 Route114_Text_LennyPostBattle
	.globl Route114_Text_LennyPostBattle
Route114_Text_LennyPostBattle: @ 0x0825CB0F
	.string "こどものころ こだま って\nむこうの やまにいる モノマネさんが\lやっほー! って いってると おもってた{EOS}"
	.if (. - Route114_Text_LennyPostBattle) > 0x36
	.error "Route114_Text_LennyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyPostBattle) < 0x36
	.space 0x36 - (. - Route114_Text_LennyPostBattle)
	.endif
	@ data/text/trainers.inc:1295 Route114_Text_LucasIntro (+1 aliases)
	.globl Route114_Text_LucasIntro
Route114_Text_LucasIntro: @ 0x0825CB45
	.string "じゅんびを おこたる もの\nやまに のぼるべからず!{EOS}"
	.if (. - Route114_Text_LucasIntro) > 0x1b
	.error "Route114_Text_LucasIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasIntro) < 0x1b
	.space 0x1b - (. - Route114_Text_LucasIntro)
	.endif
	@ data/text/trainers.inc:1298 Route114_Text_LucasDefeat (+1 aliases)
	.globl Route114_Text_LucasDefeat
Route114_Text_LucasDefeat: @ 0x0825CB60
	.string "やまは こわい ところだ……{EOS}"
	.if (. - Route114_Text_LucasDefeat) > 0xf
	.error "Route114_Text_LucasDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasDefeat) < 0xf
	.space 0xf - (. - Route114_Text_LucasDefeat)
	.endif
	@ data/text/trainers.inc:1301 Route114_Text_LucasPostBattle
	.globl Route114_Text_LucasPostBattle
Route114_Text_LucasPostBattle: @ 0x0825CB6F
	.string "ふゆの やまは なだれや ふぶきで\nそうなんする きけんが おおいぞ!{EOS}"
	.if (. - Route114_Text_LucasPostBattle) > 0x24
	.error "Route114_Text_LucasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasPostBattle) < 0x24
	.space 0x24 - (. - Route114_Text_LucasPostBattle)
	.endif
	@ data/text/trainers.inc:1304 Route114_Text_ShaneIntro (+1 aliases)
	.globl Route114_Text_ShaneIntro
Route114_Text_ShaneIntro: @ 0x0825CB93
	.string "キャンプの たのしみと いえば\nつりに はなびに きもだめし!\pだけど いちばんは\nポケモンしょうぶ だね!{EOS}"
	.if (. - Route114_Text_ShaneIntro) > 0x37
	.error "Route114_Text_ShaneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShaneIntro) < 0x37
	.space 0x37 - (. - Route114_Text_ShaneIntro)
	.endif
	@ data/text/trainers.inc:1307 Route114_Text_ShaneDefeat (+1 aliases)
	.globl Route114_Text_ShaneDefeat
Route114_Text_ShaneDefeat: @ 0x0825CBCA
	.string "つよすぎるーっ!{EOS}"
	.if (. - Route114_Text_ShaneDefeat) > 0x9
	.error "Route114_Text_ShaneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShaneDefeat) < 0x9
	.space 0x9 - (. - Route114_Text_ShaneDefeat)
	.endif
	@ data/text/trainers.inc:1310 Route114_Text_ShanePostBattle
	.globl Route114_Text_ShanePostBattle
Route114_Text_ShanePostBattle: @ 0x0825CBD3
	.string "ぼくね ポケモンと いっしょに\nキャンプ できるだけで しあわせ だよ{EOS}"
	.if (. - Route114_Text_ShanePostBattle) > 0x24
	.error "Route114_Text_ShanePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShanePostBattle) < 0x24
	.space 0x24 - (. - Route114_Text_ShanePostBattle)
	.endif
	@ data/text/trainers.inc:1313 Route114_Text_NancyIntro (+1 aliases)
	.globl Route114_Text_NancyIntro
Route114_Text_NancyIntro: @ 0x0825CBF7
	.string "しょくごの うんどう!\nわたしと しょうぶ しましょうよ!{EOS}"
	.if (. - Route114_Text_NancyIntro) > 0x1e
	.error "Route114_Text_NancyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyIntro) < 0x1e
	.space 0x1e - (. - Route114_Text_NancyIntro)
	.endif
	@ data/text/trainers.inc:1316 Route114_Text_NancyDefeat (+1 aliases)
	.globl Route114_Text_NancyDefeat
Route114_Text_NancyDefeat: @ 0x0825CC15
	.string "まけちゃったー!{EOS}"
	.if (. - Route114_Text_NancyDefeat) > 0x9
	.error "Route114_Text_NancyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyDefeat) < 0x9
	.space 0x9 - (. - Route114_Text_NancyDefeat)
	.endif
	@ data/text/trainers.inc:1319 Route114_Text_NancyPostBattle
	.globl Route114_Text_NancyPostBattle
Route114_Text_NancyPostBattle: @ 0x0825CC1E
	.string "おいしい ごはんも たべたし\nなんだか ねむくなって きたわ……{EOS}"
	.if (. - Route114_Text_NancyPostBattle) > 0x21
	.error "Route114_Text_NancyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyPostBattle) < 0x21
	.space 0x21 - (. - Route114_Text_NancyPostBattle)
	.endif
	@ data/text/trainers.inc:1322 Route114_Text_SteveIntro (+1 aliases)
	.globl Route114_Text_SteveIntro
Route114_Text_SteveIntro: @ 0x0825CC3F
	.string "うふふふふふ……\nボクの ポケモンと しょうぶしない?{EOS}"
	.if (. - Route114_Text_SteveIntro) > 0x1c
	.error "Route114_Text_SteveIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveIntro) < 0x1c
	.space 0x1c - (. - Route114_Text_SteveIntro)
	.endif
	@ data/text/trainers.inc:1325 Route114_Text_SteveDefeat (+1 aliases)
	.globl Route114_Text_SteveDefeat
Route114_Text_SteveDefeat: @ 0x0825CC5B
	.string "ボ ボクの ポケモン……{EOS}"
	.if (. - Route114_Text_SteveDefeat) > 0xd
	.error "Route114_Text_SteveDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveDefeat) < 0xd
	.space 0xd - (. - Route114_Text_SteveDefeat)
	.endif
	@ data/text/trainers.inc:1328 Route114_Text_StevePostBattle
	.globl Route114_Text_StevePostBattle
Route114_Text_StevePostBattle: @ 0x0825CC68
	.string "からだが おおきくて ゴツゴツ かたくて\nおおきな ツノと するどい キバ……\lうふふふふ……\lそんな ポケモンが ほしいなぁ……{EOS}"
	.if (. - Route114_Text_StevePostBattle) > 0x42
	.error "Route114_Text_StevePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_StevePostBattle) < 0x42
	.space 0x42 - (. - Route114_Text_StevePostBattle)
	.endif
	@ data/text/trainers.inc:1331 Route114_Text_SteveRegister
	.globl Route114_Text_SteveRegister
Route114_Text_SteveRegister: @ 0x0825CCAA
	.string "お おぼえてろっ! ……いや\nわすれられない ように こうしてやる!{EOS}"
	.if (. - Route114_Text_SteveRegister) > 0x23
	.error "Route114_Text_SteveRegister may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveRegister) < 0x23
	.space 0x23 - (. - Route114_Text_SteveRegister)
	.endif

	@ data/text/trainers.inc:1334 Route114_Text_SteveRematchIntro (+1 aliases)
	.globl Route114_Text_SteveRematchIntro
Route114_Text_SteveRematchIntro: @ 0x0825CCCD
	.string "うふふふふふ……\nボクの ポケモンと しょうぶ しようよ{EOS}"
	.if (. - Route114_Text_SteveRematchIntro) > 0x1d
	.error "Route114_Text_SteveRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveRematchIntro) < 0x1d
	.space 0x1d - (. - Route114_Text_SteveRematchIntro)
	.endif
