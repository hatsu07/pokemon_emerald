	@ data/text/trainers.inc:242 Route104_Text_HaleyPostRematch
	.globl gText_Rom_259FFC
gText_Rom_259FFC: @ 0x08259FFC
	.string "たたかうって じぶんで きめたから\nまけても すっきり してるわ!\p……もちろん まけて くやしいけどね$"
	.if (. - gText_Rom_259FFC) > 0x35
	.error "gText_Rom_259FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FFC) < 0x35
	.space 0x35 - (. - gText_Rom_259FFC)
	.endif

	@ data/text/trainers.inc:245 Route104_Text_WinstonIntro (+1 aliases)
	.globl gText_Rom_25A031
gText_Rom_25A031: @ 0x0825A031
	.string "ボクが あいてして あげるよ\nこの おかねもちの ボクがね$"
	.if (. - gText_Rom_25A031) > 0x1e
	.error "gText_Rom_25A031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A031) < 0x1e
	.space 0x1e - (. - gText_Rom_25A031)
	.endif

	@ data/text/trainers.inc:248 Route104_Text_WinstonDefeat (+1 aliases)
	.globl gText_Rom_25A04F
gText_Rom_25A04F: @ 0x0825A04F
	.string "どうして かてないんだ……!?$"
	.if (. - gText_Rom_25A04F) > 0x10
	.error "gText_Rom_25A04F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A04F) < 0x10
	.space 0x10 - (. - gText_Rom_25A04F)
	.endif

	@ data/text/trainers.inc:251 Route104_Text_WinstonPostBattle
	.globl gText_Rom_25A05F
gText_Rom_25A05F: @ 0x0825A05F
	.string "おかねじゃ かてない ものが ある……\nそれが ポケモンなんだね……$"
	.if (. - gText_Rom_25A05F) > 0x23
	.error "gText_Rom_25A05F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A05F) < 0x23
	.space 0x23 - (. - gText_Rom_25A05F)
	.endif

	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl gText_Rom_25A082
gText_Rom_25A082: @ 0x0825A082
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね$"
	.if (. - gText_Rom_25A082) > 0x33
	.error "gText_Rom_25A082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A082) < 0x33
	.space 0x33 - (. - gText_Rom_25A082)
	.endif

	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl gText_Rom_25A0B5
gText_Rom_25A0B5: @ 0x0825A0B5
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね$"
	.if (. - gText_Rom_25A0B5) > 0x33
	.error "gText_Rom_25A0B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A0B5) < 0x33
	.space 0x33 - (. - gText_Rom_25A0B5)
	.endif

	@ data/text/trainers.inc:260 Route104_Text_WinstonRematchIntro (+1 aliases)
	.globl gText_Rom_25A0E8
gText_Rom_25A0E8: @ 0x0825A0E8
	.string "きみに まけてから いろいろ\nポケモンのこと べんきょう したんだ!$"
	.if (. - gText_Rom_25A0E8) > 0x23
	.error "gText_Rom_25A0E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A0E8) < 0x23
	.space 0x23 - (. - gText_Rom_25A0E8)
	.endif

	@ data/text/trainers.inc:263 Route104_Text_WinstonRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A10B
gText_Rom_25A10B: @ 0x0825A10B
	.string "また まけた……\nどうして かてないんだ……!?$"
	.if (. - gText_Rom_25A10B) != 0x19
	.error "gText_Rom_25A10B must retain its original byte length"
	.endif
	.globl gText_Rom_25A114
	.set gText_Rom_25A114, gText_Rom_25A10B + 0x9

	@ data/text/trainers.inc:266 Route104_Text_WinstonPostRematch
	.globl gText_Rom_25A124
gText_Rom_25A124: @ 0x0825A124
	.string "おかねもちの ボク なのに\nなかなか ポケモンに かてない……\pなんて おくが ふかいんだろう\nポケモンって……$"
	.if (. - gText_Rom_25A124) > 0x39
	.error "gText_Rom_25A124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A124) < 0x39
	.space 0x39 - (. - gText_Rom_25A124)
	.endif

	@ data/text/trainers.inc:269 Route104_Text_CindyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A15D
gText_Rom_25A15D: @ 0x0825A15D
	.string "あなたと であったのも なにかの ごえん\nおてあわせを おねがい できるかしら$"
	.if (. - gText_Rom_25A15D) != 0x28
	.error "gText_Rom_25A15D must retain its original byte length"
	.endif
	.globl gText_Rom_25A181
	.set gText_Rom_25A181, gText_Rom_25A15D + 0x24

	@ data/text/trainers.inc:272 Route104_Text_CindyDefeat (+1 aliases)
	.globl gText_Rom_25A185
gText_Rom_25A185: @ 0x0825A185
	.string "まあ!$"
	.if (. - gText_Rom_25A185) > 0x4
	.error "gText_Rom_25A185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A185) < 0x4
	.space 0x4 - (. - gText_Rom_25A185)
	.endif

	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A189
gText_Rom_25A189: @ 0x0825A189
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう$"
	.if (. - gText_Rom_25A189) > 0x22
	.error "gText_Rom_25A189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A189) < 0x22
	.space 0x22 - (. - gText_Rom_25A189)
	.endif

	@ data/text/trainers.inc:278 Route104_Text_CindyRegister1
	.globl gText_Rom_25A1AB
gText_Rom_25A1AB: @ 0x0825A1AB
	.string "あら…… また おあい しましたわね\pこんなに ごえんが あるんですもの\nポケナビに とうろく して くださいませ$"
	.if (. - gText_Rom_25A1AB) > 0x3a
	.error "gText_Rom_25A1AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A1AB) < 0x3a
	.space 0x3a - (. - gText_Rom_25A1AB)
	.endif

	@ data/text/trainers.inc:281 Route104_Text_CindyRegister2
	.globl gText_Rom_25A1E5
gText_Rom_25A1E5: @ 0x0825A1E5
	.string "この ごえんを きねんして\nポケナビに とうろく して くださいませ$"
	.if (. - gText_Rom_25A1E5) > 0x23
	.error "gText_Rom_25A1E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A1E5) < 0x23
	.space 0x23 - (. - gText_Rom_25A1E5)
	.endif

	@ data/text/trainers.inc:284 Route104_Text_CindyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A208
gText_Rom_25A208: @ 0x0825A208
	.string "また おあい しましたわね\nおてあわせ おねがい できるかしら$"
	.if (. - gText_Rom_25A208) != 0x20
	.error "gText_Rom_25A208 must retain its original byte length"
	.endif
	.globl gText_Rom_25A224
	.set gText_Rom_25A224, gText_Rom_25A208 + 0x1c

	@ data/text/trainers.inc:287 Route104_Text_CindyRematchDefeat (+1 aliases)
	.globl gText_Rom_25A228
gText_Rom_25A228: @ 0x0825A228
	.string "あら……\nわたくし ベストを つくしましたのに……$"
	.if (. - gText_Rom_25A228) > 0x1a
	.error "gText_Rom_25A228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A228) < 0x1a
	.space 0x1a - (. - gText_Rom_25A228)
	.endif

	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl gText_Rom_25A242
gText_Rom_25A242: @ 0x0825A242
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう$"
	.if (. - gText_Rom_25A242) > 0x22
	.error "gText_Rom_25A242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A242) < 0x22
	.space 0x22 - (. - gText_Rom_25A242)
	.endif

	@ data/text/trainers.inc:293 Route104_Text_DarianIntro (+1 aliases)
	.globl gText_Rom_25A264
gText_Rom_25A264: @ 0x0825A264
	.string "つよそうな ポケモンが つれたっ!\nさかなの おうさま って かんじだ!\lこれは つよそうだぞっ!$"
	.if (. - gText_Rom_25A264) > 0x32
	.error "gText_Rom_25A264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A264) < 0x32
	.space 0x32 - (. - gText_Rom_25A264)
	.endif

	@ data/text/trainers.inc:296 Route104_Text_DarianDefeat (+1 aliases)
	.globl gText_Rom_25A296
gText_Rom_25A296: @ 0x0825A296
	.string "なっにい$"
	.if (. - gText_Rom_25A296) > 0x5
	.error "gText_Rom_25A296 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A296) < 0x5
	.space 0x5 - (. - gText_Rom_25A296)
	.endif

	@ data/text/trainers.inc:299 Route104_Text_DarianPostBattle
	.globl gText_Rom_25A29B
gText_Rom_25A29B: @ 0x0825A29B
	.string "おい なまえ まけ してるじゃないか\nおれの コイキングよ!$"
	.if (. - gText_Rom_25A29B) > 0x1f
	.error "gText_Rom_25A29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A29B) < 0x1f
	.space 0x1f - (. - gText_Rom_25A29B)
	.endif

	@ data/text/trainers.inc:302 Route105_Text_FosterIntro (+1 aliases)
	.globl gText_Rom_25A2BA
gText_Rom_25A2BA: @ 0x0825A2BA
	.string "この あたりに\nふしぎな いわが あるらしいが\lきみ しらないかい?$"
	.if (. - gText_Rom_25A2BA) > 0x23
	.error "gText_Rom_25A2BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2BA) < 0x23
	.space 0x23 - (. - gText_Rom_25A2BA)
	.endif

	@ data/text/trainers.inc:305 Route105_Text_FosterDefeated (+1 aliases)
	.globl gText_Rom_25A2DD
gText_Rom_25A2DD: @ 0x0825A2DD
	.string "いわのこと ばかり かんがえて\nポケモン よわいまま だったか……$"
	.if (. - gText_Rom_25A2DD) > 0x22
	.error "gText_Rom_25A2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2DD) < 0x22
	.space 0x22 - (. - gText_Rom_25A2DD)
	.endif

	@ data/text/trainers.inc:308 Route105_Text_FosterPostBattle
	.globl gText_Rom_25A2FF
gText_Rom_25A2FF: @ 0x0825A2FF
	.string "すてきな いわ だったら\nなんじかん みていても あきないよ……$"
	.if (. - gText_Rom_25A2FF) > 0x21
	.error "gText_Rom_25A2FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2FF) < 0x21
	.space 0x21 - (. - gText_Rom_25A2FF)
	.endif

	@ data/text/trainers.inc:311 Route105_Text_LuisIntro (+1 aliases)
	.globl gText_Rom_25A320
gText_Rom_25A320: @ 0x0825A320
	.string "よかった! こどもが\nおぼれているのかと しんぱい したよ!\pだいじょうぶ そうだから しょうぶ だな!$"
	.if (. - gText_Rom_25A320) > 0x35
	.error "gText_Rom_25A320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A320) < 0x35
	.space 0x35 - (. - gText_Rom_25A320)
	.endif

	@ data/text/trainers.inc:314 Route105_Text_LuisDefeated (+1 aliases)
	.globl gText_Rom_25A355
gText_Rom_25A355: @ 0x0825A355
	.string "ゴボゴボ……$"
	.if (. - gText_Rom_25A355) > 0x7
	.error "gText_Rom_25A355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A355) < 0x7
	.space 0x7 - (. - gText_Rom_25A355)
	.endif

	@ data/text/trainers.inc:317 Route105_Text_LuisPostBattle
	.globl gText_Rom_25A35C
gText_Rom_25A35C: @ 0x0825A35C
	.string "すなはまに むかって かたてを ふるのが\nおぼれたときの サインだぜ!$"
	.if (. - gText_Rom_25A35C) > 0x24
	.error "gText_Rom_25A35C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A35C) < 0x24
	.space 0x24 - (. - gText_Rom_25A35C)
	.endif

	@ data/text/trainers.inc:320 Route105_Text_DominikIntro (+1 aliases)
	.globl gText_Rom_25A380
gText_Rom_25A380: @ 0x0825A380
	.string "あおい うみで およいでいると\nさいこうの きぶん だな!$"
	.if (. - gText_Rom_25A380) > 0x1e
	.error "gText_Rom_25A380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A380) < 0x1e
	.space 0x1e - (. - gText_Rom_25A380)
	.endif

	@ data/text/trainers.inc:323 Route105_Text_DominikDefeated (+1 aliases)
	.globl gText_Rom_25A39E
gText_Rom_25A39E: @ 0x0825A39E
	.string "まけた……\nブルーな きぶん……$"
	.if (. - gText_Rom_25A39E) > 0x11
	.error "gText_Rom_25A39E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A39E) < 0x11
	.space 0x11 - (. - gText_Rom_25A39E)
	.endif

	@ data/text/trainers.inc:326 Route105_Text_DominikPostBattle
	.globl gText_Rom_25A3AF
gText_Rom_25A3AF: @ 0x0825A3AF
	.string "うみが あおい りゆう!?\pカイナの はくぶつかんで きいたけど\nそんなの わすれちまったよ!$"
	.if (. - gText_Rom_25A3AF) > 0x30
	.error "gText_Rom_25A3AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A3AF) < 0x30
	.space 0x30 - (. - gText_Rom_25A3AF)
	.endif

	@ data/text/trainers.inc:329 Route105_Text_BeverlyIntro (+1 aliases)
	.globl gText_Rom_25A3DF
gText_Rom_25A3DF: @ 0x0825A3DF
	.string "みずに はいると からだが かるくなるわね\nなんだか スリムに なったみたい!$"
	.if (. - gText_Rom_25A3DF) > 0x28
	.error "gText_Rom_25A3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A3DF) < 0x28
	.space 0x28 - (. - gText_Rom_25A3DF)
	.endif

	@ data/text/trainers.inc:332 Route105_Text_BeverlyDefeated (+1 aliases)
	.globl gText_Rom_25A407
gText_Rom_25A407: @ 0x0825A407
	.string "ぷかぷか……$"
	.if (. - gText_Rom_25A407) > 0x7
	.error "gText_Rom_25A407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A407) < 0x7
	.space 0x7 - (. - gText_Rom_25A407)
	.endif

	@ data/text/trainers.inc:335 Route105_Text_PostBattle
	.globl gText_Rom_25A40E
gText_Rom_25A40E: @ 0x0825A40E
	.string "みずの なかでは たいじゅうが\n10ぶんの1 くらいに なるのよ\pと すると いま わたしは……\nいけない! たいじゅうが バレちゃうわ!$"
	.if (. - gText_Rom_25A40E) > 0x46
	.error "gText_Rom_25A40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A40E) < 0x46
	.space 0x46 - (. - gText_Rom_25A40E)
	.endif

	@ data/text/trainers.inc:338 Route105_Text_ImaniIntro (+1 aliases)
	.globl gText_Rom_25A454
gText_Rom_25A454: @ 0x0825A454
	.string "あおい そら……\nひろい うみ……\lのどか よねー……$"
	.if (. - gText_Rom_25A454) > 0x1c
	.error "gText_Rom_25A454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A454) < 0x1c
	.space 0x1c - (. - gText_Rom_25A454)
	.endif

	@ data/text/trainers.inc:341 Route105_Text_ImaniDefeated (+1 aliases)
	.globl gText_Rom_25A470
gText_Rom_25A470: @ 0x0825A470
	.string "なごんでいる うちに\nまけちゃったわーっ!$"
	.if (. - gText_Rom_25A470) > 0x16
	.error "gText_Rom_25A470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A470) < 0x16
	.space 0x16 - (. - gText_Rom_25A470)
	.endif

	@ data/text/trainers.inc:344 Route105_Text_ImaniPostBattle
	.globl gText_Rom_25A486
gText_Rom_25A486: @ 0x0825A486
	.string "あたしと いると なごむって いわれたいの\nうふふふふ!$"
	.if (. - gText_Rom_25A486) > 0x1d
	.error "gText_Rom_25A486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A486) < 0x1d
	.space 0x1d - (. - gText_Rom_25A486)
	.endif

	@ data/text/trainers.inc:347 Route105_Text_AndresIntro (+1 aliases)
	.globl gText_Rom_25A4A3
gText_Rom_25A4A3: @ 0x0825A4A3
	.string "うみに こそ なにかが あると\nかくしんが ある!$"
	.if (. - gText_Rom_25A4A3) > 0x1a
	.error "gText_Rom_25A4A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4A3) < 0x1a
	.space 0x1a - (. - gText_Rom_25A4A3)
	.endif

	@ data/text/trainers.inc:350 Route105_Text_AndresDefeated (+1 aliases)
	.globl gText_Rom_25A4BD
gText_Rom_25A4BD: @ 0x0825A4BD
	.string "うん…… わし\nしょうぶは よわいんだよ$"
	.if (. - gText_Rom_25A4BD) > 0x15
	.error "gText_Rom_25A4BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4BD) < 0x15
	.space 0x15 - (. - gText_Rom_25A4BD)
	.endif

	@ data/text/trainers.inc:353 Route105_Text_AndresPostBattle
	.globl gText_Rom_25A4D2
gText_Rom_25A4D2: @ 0x0825A4D2
	.string "せかいじゅうの うみには\nまだまだ ひみつが あるはずだ!\lぜんぶ さがしまくるぞ!$"
	.if (. - gText_Rom_25A4D2) > 0x2b
	.error "gText_Rom_25A4D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4D2) < 0x2b
	.space 0x2b - (. - gText_Rom_25A4D2)
	.endif

	@ data/text/trainers.inc:356 Route105_Text_AndresRegister
	.globl gText_Rom_25A4FD
gText_Rom_25A4FD: @ 0x0825A4FD
	.string "ん? こんな よわい わしでも\nポケナビ とうろくして くれるのか?$"
	.if (. - gText_Rom_25A4FD) > 0x23
	.error "gText_Rom_25A4FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4FD) < 0x23
	.space 0x23 - (. - gText_Rom_25A4FD)
	.endif

	@ data/text/trainers.inc:359 Route105_Text_AndresRematchIntro (+1 aliases)
	.globl gText_Rom_25A520
gText_Rom_25A520: @ 0x0825A520
	.string "しょうぶは よわいと いっているのに……\nわし なんかで いいのか?$"
	.if (. - gText_Rom_25A520) > 0x23
	.error "gText_Rom_25A520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A520) < 0x23
	.space 0x23 - (. - gText_Rom_25A520)
	.endif

	@ data/text/trainers.inc:362 Route105_Text_AndresRematchDefeated (+1 aliases)
	.globl gText_Rom_25A543
gText_Rom_25A543: @ 0x0825A543
	.string "うん…… やっぱり かてないな$"
	.if (. - gText_Rom_25A543) > 0x10
	.error "gText_Rom_25A543 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A543) < 0x10
	.space 0x10 - (. - gText_Rom_25A543)
	.endif

	@ data/text/trainers.inc:365 Route105_Text_AndresRematchPostBattle
	.globl gText_Rom_25A553
gText_Rom_25A553: @ 0x0825A553
	.string "しょうぶは よわいが\nたんきゅうしんは きみにも まけん!\lせかいじゅうの うみを たび するぞ!$"
	.if (. - gText_Rom_25A553) > 0x32
	.error "gText_Rom_25A553 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A553) < 0x32
	.space 0x32 - (. - gText_Rom_25A553)
	.endif

	@ data/text/trainers.inc:368 Route105_Text_JosueIntro (+1 aliases)
	.globl gText_Rom_25A585
gText_Rom_25A585: @ 0x0825A585
	.string "なれない およぎで つかれたー\nきばらしに ポケモンしょうぶ じゃい!$"
	.if (. - gText_Rom_25A585) > 0x24
	.error "gText_Rom_25A585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A585) < 0x24
	.space 0x24 - (. - gText_Rom_25A585)
	.endif

	@ data/text/trainers.inc:371 Route105_Text_JosueDefeated (+1 aliases)
	.globl gText_Rom_25A5A9
gText_Rom_25A5A9: @ 0x0825A5A9
	.string "うみで たたかった から まけたんだ$"
	.if (. - gText_Rom_25A5A9) > 0x13
	.error "gText_Rom_25A5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5A9) < 0x13
	.space 0x13 - (. - gText_Rom_25A5A9)
	.endif

	@ data/text/trainers.inc:374 Route105_Text_JosuePostBattle
	.globl gText_Rom_25A5BC
gText_Rom_25A5BC: @ 0x0825A5BC
	.string "やっぱりさ おれには\nうみより そらが にあってるんだよ$"
	.if (. - gText_Rom_25A5BC) > 0x1d
	.error "gText_Rom_25A5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5BC) < 0x1d
	.space 0x1d - (. - gText_Rom_25A5BC)
	.endif

	@ data/text/trainers.inc:377 Route106_Text_ElliotIntro (+1 aliases)
	.globl gText_Rom_25A5D9
gText_Rom_25A5D9: @ 0x0825A5D9
	.string "うみづりと かわづり\nキミは どっちが すき?$"
	.if (. - gText_Rom_25A5D9) > 0x18
	.error "gText_Rom_25A5D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5D9) < 0x18
	.space 0x18 - (. - gText_Rom_25A5D9)
	.endif

	@ data/text/trainers.inc:380 Route106_Text_ElliotDefeated (+1 aliases)
	.globl gText_Rom_25A5F1
gText_Rom_25A5F1: @ 0x0825A5F1
	.string "まるで うみづりの ように\nごうかいに まけたぞーっ!$"
	.if (. - gText_Rom_25A5F1) > 0x1c
	.error "gText_Rom_25A5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5F1) < 0x1c
	.space 0x1c - (. - gText_Rom_25A5F1)
	.endif

	@ data/text/trainers.inc:383 Route106_Text_ElliotPostBattle
	.globl gText_Rom_25A60D
gText_Rom_25A60D: @ 0x0825A60D
	.string "うみでも かわでも つりは サイコーだ!\nキミも そう おもうだろ!?$"
	.if (. - gText_Rom_25A60D) > 0x24
	.error "gText_Rom_25A60D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A60D) < 0x24
	.space 0x24 - (. - gText_Rom_25A60D)
	.endif

	@ data/text/trainers.inc:386 Route106_Text_ElliotRegister
	.globl gText_Rom_25A631
gText_Rom_25A631: @ 0x0825A631
	.string "つりも いいけど しょうぶも いいな!\nキミ よかったら また たのむよ!$"
	.if (. - gText_Rom_25A631) > 0x26
	.error "gText_Rom_25A631 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A631) < 0x26
	.space 0x26 - (. - gText_Rom_25A631)
	.endif

	@ data/text/trainers.inc:389 Route106_Text_ElliotRematchIntro (+1 aliases)
	.globl gText_Rom_25A657
gText_Rom_25A657: @ 0x0825A657
	.string "ポケモン つりまくったからね\nすごい しょうぶを してみせるぞー!$"
	.if (. - gText_Rom_25A657) > 0x22
	.error "gText_Rom_25A657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A657) < 0x22
	.space 0x22 - (. - gText_Rom_25A657)
	.endif

	@ data/text/trainers.inc:392 Route106_Text_ElliotRematchDefeated (+1 aliases)
	.globl gText_Rom_25A679
gText_Rom_25A679: @ 0x0825A679
	.string "また ごうかいに まけたぞーっ!$"
	.if (. - gText_Rom_25A679) > 0x11
	.error "gText_Rom_25A679 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A679) < 0x11
	.space 0x11 - (. - gText_Rom_25A679)
	.endif

	@ data/text/trainers.inc:395 Route106_Text_ElliotRematchPostBattle
	.globl gText_Rom_25A68A
gText_Rom_25A68A: @ 0x0825A68A
	.string "かっても まけても ポケモンは サイコーだ!\nキミも そう おもうだろ!?$"
	.if (. - gText_Rom_25A68A) > 0x26
	.error "gText_Rom_25A68A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A68A) < 0x26
	.space 0x26 - (. - gText_Rom_25A68A)
	.endif

	@ data/text/trainers.inc:398 Route106_Text_NedIntro (+1 aliases)
	.globl gText_Rom_25A6B0
gText_Rom_25A6B0: @ 0x0825A6B0
	.string "トイレに いきたくなったとき\nみんなは どうしてるんだろう……?\pトイレに いっている あいだに\nもし おおものが かかったらと おもうと……$"
	.if (. - gText_Rom_25A6B0) > 0x48
	.error "gText_Rom_25A6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A6B0) < 0x48
	.space 0x48 - (. - gText_Rom_25A6B0)
	.endif

	@ data/text/trainers.inc:401 Route106_Text_NedDefeated (+1 aliases)
	.globl gText_Rom_25A6F8
gText_Rom_25A6F8: @ 0x0825A6F8
	.string "トイレを がまん してたから\nまけたんだよ きっと……$"
	.if (. - gText_Rom_25A6F8) > 0x1c
	.error "gText_Rom_25A6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A6F8) < 0x1c
	.space 0x1c - (. - gText_Rom_25A6F8)
	.endif

	@ data/text/trainers.inc:404 Route106_Text_NedPostBattle
	.globl gText_Rom_25A714
gText_Rom_25A714: @ 0x0825A714
	.string "ああっ!\nおおものが つれそうな よかん……!$"
	.if (. - gText_Rom_25A714) > 0x18
	.error "gText_Rom_25A714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A714) < 0x18
	.space 0x18 - (. - gText_Rom_25A714)
	.endif

	@ data/text/trainers.inc:407 Route106_Text_DouglasIntro (+1 aliases)
	.globl gText_Rom_25A72C
gText_Rom_25A72C: @ 0x0825A72C
	.string "はっはっはっ!\nりくでは はやく はしれないが\lみずの なかなら まけないぞ!$"
	.if (. - gText_Rom_25A72C) > 0x28
	.error "gText_Rom_25A72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A72C) < 0x28
	.space 0x28 - (. - gText_Rom_25A72C)
	.endif

	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25A754
gText_Rom_25A754: @ 0x0825A754
	.string "まいりましたーっ!$"
	.if (. - gText_Rom_25A754) > 0xa
	.error "gText_Rom_25A754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A754) < 0xa
	.space 0xa - (. - gText_Rom_25A754)
	.endif

	@ data/text/trainers.inc:413 Route106_Text_DouglasPostBattle
	.globl gText_Rom_25A75E
gText_Rom_25A75E: @ 0x0825A75E
	.string "すいえいの きょうそうなら まけないのに……$"
	.if (. - gText_Rom_25A75E) > 0x17
	.error "gText_Rom_25A75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A75E) < 0x17
	.space 0x17 - (. - gText_Rom_25A75E)
	.endif

	@ data/text/trainers.inc:416 Route106_Text_KylaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A775
gText_Rom_25A775: @ 0x0825A775
	.string "うみは わたしの にわ\nこども だからって てかげん しないわよ!$"
	.if (. - gText_Rom_25A775) != 0x22
	.error "gText_Rom_25A775 must retain its original byte length"
	.endif
	.globl gText_Rom_25A793
	.set gText_Rom_25A793, gText_Rom_25A775 + 0x1e

	@ data/text/trainers.inc:419 Route106_Text_KylaDefeated (+1 aliases)
	.globl gText_Rom_25A797
gText_Rom_25A797: @ 0x0825A797
	.string "ひょっとして\nてかげん してないよね?$"
	.if (. - gText_Rom_25A797) > 0x14
	.error "gText_Rom_25A797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A797) < 0x14
	.space 0x14 - (. - gText_Rom_25A797)
	.endif

	@ data/text/trainers.inc:422 Route106_Text_KylaPostBattle
	.globl gText_Rom_25A7AB
gText_Rom_25A7AB: @ 0x0825A7AB
	.string "なみに ゆられて ただようのが だいすき\nあなたも やってみない?$"
	.if (. - gText_Rom_25A7AB) > 0x22
	.error "gText_Rom_25A7AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7AB) < 0x22
	.space 0x22 - (. - gText_Rom_25A7AB)
	.endif

	@ data/text/trainers.inc:425 Route107_Text_DarrinIntro (+1 aliases)
	.globl gText_Rom_25A7CD
gText_Rom_25A7CD: @ 0x0825A7CD
	.string "むにゃむにゃ……\pなみに ゆられてたら きもちよくなって\nうっかり ねてしまった!$"
	.if (. - gText_Rom_25A7CD) > 0x2a
	.error "gText_Rom_25A7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7CD) < 0x2a
	.space 0x2a - (. - gText_Rom_25A7CD)
	.endif

	@ data/text/trainers.inc:428 Route107_Text_DarrinDefeated (+1 aliases)
	.globl gText_Rom_25A7F7
gText_Rom_25A7F7: @ 0x0825A7F7
	.string "あはは まけた……\nまた ねますか……$"
	.if (. - gText_Rom_25A7F7) > 0x14
	.error "gText_Rom_25A7F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7F7) < 0x14
	.space 0x14 - (. - gText_Rom_25A7F7)
	.endif

	@ data/text/trainers.inc:431 Route107_Text_DarrinPostBattle
	.globl gText_Rom_25A80B
gText_Rom_25A80B: @ 0x0825A80B
	.string "うみに うかんで なみに ゆられてると\nふかふかの ベッドで ねてる みたいだよ!$"
	.if (. - gText_Rom_25A80B) > 0x2a
	.error "gText_Rom_25A80B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A80B) < 0x2a
	.space 0x2a - (. - gText_Rom_25A80B)
	.endif

	@ data/text/trainers.inc:434 Route107_Text_TonyIntro (+1 aliases)
	.globl gText_Rom_25A835
gText_Rom_25A835: @ 0x0825A835
	.string "うみは オレの にわ みたいな もの!\nしょうぶ しようぜ!$"
	.if (. - gText_Rom_25A835) > 0x1f
	.error "gText_Rom_25A835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A835) < 0x1f
	.space 0x1f - (. - gText_Rom_25A835)
	.endif

	@ data/text/trainers.inc:437 Route107_Text_TonyDefeated (+1 aliases)
	.globl gText_Rom_25A854
gText_Rom_25A854: @ 0x0825A854
	.string "ホームグラウンドで まけた……\nショック!$"
	.if (. - gText_Rom_25A854) > 0x16
	.error "gText_Rom_25A854 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A854) < 0x16
	.space 0x16 - (. - gText_Rom_25A854)
	.endif

	@ data/text/trainers.inc:440 Route107_Text_TonyPostBattle
	.globl gText_Rom_25A86A
gText_Rom_25A86A: @ 0x0825A86A
	.string "おおきな ユメを いっぱい つめてー\nでっかい うみを ひとおよぎー\pさぁて まだまだ およぐぞー!$"
	.if (. - gText_Rom_25A86A) > 0x33
	.error "gText_Rom_25A86A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A86A) < 0x33
	.space 0x33 - (. - gText_Rom_25A86A)
	.endif

	@ data/text/trainers.inc:443 Route107_Text_TonyRegister
	.globl gText_Rom_25A89D
gText_Rom_25A89D: @ 0x0825A89D
	.string "ショックを うけたオレを\nきみが わすれない ために……!$"
	.if (. - gText_Rom_25A89D) > 0x1e
	.error "gText_Rom_25A89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A89D) < 0x1e
	.space 0x1e - (. - gText_Rom_25A89D)
	.endif

	@ data/text/trainers.inc:446 Route107_Text_TonyRematchIntro (+1 aliases)
	.globl gText_Rom_25A8BB
gText_Rom_25A8BB: @ 0x0825A8BB
	.string "でっかい うみを およいでいたら\nポケモンが すっごく つよくなったぞー!$"
	.if (. - gText_Rom_25A8BB) > 0x26
	.error "gText_Rom_25A8BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A8BB) < 0x26
	.space 0x26 - (. - gText_Rom_25A8BB)
	.endif

	@ data/text/trainers.inc:449 Route107_Text_TonyRematchDefeated (+1 aliases)
	.globl gText_Rom_25A8E1
gText_Rom_25A8E1: @ 0x0825A8E1
	.string "ショック!!\pポケモンは つよくなったが\nトレーナーの おれが よわいまま!?$"
	.if (. - gText_Rom_25A8E1) > 0x28
	.error "gText_Rom_25A8E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A8E1) < 0x28
	.space 0x28 - (. - gText_Rom_25A8E1)
	.endif

	@ data/text/trainers.inc:452 Route107_Text_TonyRematchPostBattle
	.globl gText_Rom_25A909
gText_Rom_25A909: @ 0x0825A909
	.string "たたかいの なかで おぼえたことが\nトレーナーとしての つよさに つながる!\lでっかい うみが そう いっていたぞー!$"
	.if (. - gText_Rom_25A909) > 0x3c
	.error "gText_Rom_25A909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A909) < 0x3c
	.space 0x3c - (. - gText_Rom_25A909)
	.endif

	@ data/text/trainers.inc:455 Route107_Text_DeniseIntro (+1 aliases)
	.globl gText_Rom_25A945
gText_Rom_25A945: @ 0x0825A945
	.string "ムロタウン っていう\nちいさな まちを しってる?$"
	.if (. - gText_Rom_25A945) > 0x1a
	.error "gText_Rom_25A945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A945) < 0x1a
	.space 0x1a - (. - gText_Rom_25A945)
	.endif

	@ data/text/trainers.inc:458 Route107_Text_DeniseDefeated (+1 aliases)
	.globl gText_Rom_25A95F
gText_Rom_25A95F: @ 0x0825A95F
	.string "ヤダ もーっ!$"
	.if (. - gText_Rom_25A95F) > 0x8
	.error "gText_Rom_25A95F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A95F) < 0x8
	.space 0x8 - (. - gText_Rom_25A95F)
	.endif

	@ data/text/trainers.inc:461 Route107_Text_DenisePostBattle
	.globl gText_Rom_25A967
gText_Rom_25A967: @ 0x0825A967
	.string "ムロタウンの しゅうかいじょで\nふしぎな ことばが はやって いるのよ!$"
	.if (. - gText_Rom_25A967) > 0x25
	.error "gText_Rom_25A967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A967) < 0x25
	.space 0x25 - (. - gText_Rom_25A967)
	.endif

	@ data/text/trainers.inc:464 Route107_Text_BethIntro (+1 aliases)
	.globl gText_Rom_25A98C
gText_Rom_25A98C: @ 0x0825A98C
	.string "わたしと しょうぶが したいの?\nいいわ! あいてに なって あげる!$"
	.if (. - gText_Rom_25A98C) > 0x24
	.error "gText_Rom_25A98C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A98C) < 0x24
	.space 0x24 - (. - gText_Rom_25A98C)
	.endif

	@ data/text/trainers.inc:467 Route107_Text_BethDefeated (+1 aliases)
	.globl gText_Rom_25A9B0
gText_Rom_25A9B0: @ 0x0825A9B0
	.string "わたしじゃ あいてに ならなかったわ!$"
	.if (. - gText_Rom_25A9B0) > 0x14
	.error "gText_Rom_25A9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9B0) < 0x14
	.space 0x14 - (. - gText_Rom_25A9B0)
	.endif

	@ data/text/trainers.inc:470 Route107_Text_BethPostBattle
	.globl gText_Rom_25A9C4
gText_Rom_25A9C4: @ 0x0825A9C4
	.string "あなた まだまだ つよく なりそうね\nわたしも がんばろうっと!$"
	.if (. - gText_Rom_25A9C4) > 0x21
	.error "gText_Rom_25A9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9C4) < 0x21
	.space 0x21 - (. - gText_Rom_25A9C4)
	.endif

	@ data/text/trainers.inc:473 Route107_Text_LisaIntro (+1 aliases)
	.globl gText_Rom_25A9E5
gText_Rom_25A9E5: @ 0x0825A9E5
	.string "ユミ『あたしたち きょうだい ふたりで\nしょうぶを させてもらうわ!$"
	.if (. - gText_Rom_25A9E5) > 0x23
	.error "gText_Rom_25A9E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9E5) < 0x23
	.space 0x23 - (. - gText_Rom_25A9E5)
	.endif

	@ data/text/trainers.inc:476 Route107_Text_LisaDefeated (+1 aliases)
	.globl gText_Rom_25AA08
gText_Rom_25AA08: @ 0x0825AA08
	.string "ユミ『すごいわ\nつよさの レベルが ちがうのね$"
	.if (. - gText_Rom_25AA08) > 0x18
	.error "gText_Rom_25AA08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA08) < 0x18
	.space 0x18 - (. - gText_Rom_25AA08)
	.endif

	@ data/text/trainers.inc:479 Route107_Text_LisaPostBattle
	.globl gText_Rom_25AA20
gText_Rom_25AA20: @ 0x0825AA20
	.string "ユミ『あなたは いっしょに\nうみに あそびに いくような\lおともだち いるのかしら?$"
	.if (. - gText_Rom_25AA20) > 0x2b
	.error "gText_Rom_25AA20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA20) < 0x2b
	.space 0x2b - (. - gText_Rom_25AA20)
	.endif

	@ data/text/trainers.inc:482 Route107_Text_LisaNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25AA4B
gText_Rom_25AA4B: @ 0x0825AA4B
	.string "ユミ『アタシたちと たたかうなら\nポケモン もっと つれてきなさいな$"
	.if (. - gText_Rom_25AA4B) > 0x23
	.error "gText_Rom_25AA4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA4B) < 0x23
	.space 0x23 - (. - gText_Rom_25AA4B)
	.endif

	@ data/text/trainers.inc:485 Route107_Text_RayIntro (+1 aliases)
	.globl gText_Rom_25AA6E
gText_Rom_25AA6E: @ 0x0825AA6E
	.string "シン『いつも きょうだいで\nポケモンしょうぶ してるんだ!\p……いっつも おれが まけるけど\n2たい2なら きみに かてるよ!$"
	.if (. - gText_Rom_25AA6E) > 0x40
	.error "gText_Rom_25AA6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA6E) < 0x40
	.space 0x40 - (. - gText_Rom_25AA6E)
	.endif

	@ data/text/trainers.inc:488 Route107_Text_RayDefeated (+1 aliases)
	.globl gText_Rom_25AAAE
gText_Rom_25AAAE: @ 0x0825AAAE
	.string "シン『ひゃー\nつよさの レベルが ちがいすぎるや$"
	.if (. - gText_Rom_25AAAE) > 0x19
	.error "gText_Rom_25AAAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAAE) < 0x19
	.space 0x19 - (. - gText_Rom_25AAAE)
	.endif

	@ data/text/trainers.inc:491 Route107_Text_RayPostBattle
	.globl gText_Rom_25AAC7
gText_Rom_25AAC7: @ 0x0825AAC7
	.string "シン『おれの ポケモン\nねえちゃんから もらって そだてた\lだいじな あいぼう なんだぜ!$"
	.if (. - gText_Rom_25AAC7) > 0x2e
	.error "gText_Rom_25AAC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAC7) < 0x2e
	.space 0x2e - (. - gText_Rom_25AAC7)
	.endif

	@ data/text/trainers.inc:494 Route107_Text_RayNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25AAF5
gText_Rom_25AAF5: @ 0x0825AAF5
	.string "シン『オレらと たたかうなら\nもっと ポケモン つれてきてよ!$"
	.if (. - gText_Rom_25AAF5) > 0x20
	.error "gText_Rom_25AAF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AAF5) < 0x20
	.space 0x20 - (. - gText_Rom_25AAF5)
	.endif

	@ data/text/trainers.inc:497 Route107_Text_CamronIntro (+1 aliases)
	.globl gText_Rom_25AB15
gText_Rom_25AB15: @ 0x0825AB15
	.string "トライアスロンの とちゅう だが\nぜんぜん つかれて いないぜ!$"
	.if (. - gText_Rom_25AB15) > 0x21
	.error "gText_Rom_25AB15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB15) < 0x21
	.space 0x21 - (. - gText_Rom_25AB15)
	.endif

	@ data/text/trainers.inc:500 Route107_Text_CamronDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AB36
gText_Rom_25AB36: @ 0x0825AB36
	.string "いまので つかれて しまった$"
	.if (. - gText_Rom_25AB36) != 0xf
	.error "gText_Rom_25AB36 must retain its original byte length"
	.endif
	.globl gText_Rom_25AB40
	.set gText_Rom_25AB40, gText_Rom_25AB36 + 0xa

	@ data/text/trainers.inc:503 Route107_Text_CamronPostBattle
	.globl gText_Rom_25AB45
gText_Rom_25AB45: @ 0x0825AB45
	.string "こ このあと まだ\nすいえい ランニングが のこっているぜ\lだいじょうぶか おれ……?$"
	.if (. - gText_Rom_25AB45) > 0x2c
	.error "gText_Rom_25AB45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB45) < 0x2c
	.space 0x2c - (. - gText_Rom_25AB45)
	.endif

	@ data/text/trainers.inc:506 Route108_Text_JeromeIntro (+1 aliases)
	.globl gText_Rom_25AB71
gText_Rom_25AB71: @ 0x0825AB71
	.string "オレの ユメは せかいに ある\n7つのうみ すべてで およぐこと!$"
	.if (. - gText_Rom_25AB71) > 0x22
	.error "gText_Rom_25AB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB71) < 0x22
	.space 0x22 - (. - gText_Rom_25AB71)
	.endif

	@ data/text/trainers.inc:509 Route108_Text_JeromeDefeated (+1 aliases)
	.globl gText_Rom_25AB93
gText_Rom_25AB93: @ 0x0825AB93
	.string "これじゃ\n7つのうみ すべてで およげない……$"
	.if (. - gText_Rom_25AB93) > 0x18
	.error "gText_Rom_25AB93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB93) < 0x18
	.space 0x18 - (. - gText_Rom_25AB93)
	.endif

	@ data/text/trainers.inc:512 Route108_Text_JeromePostBattle
	.globl gText_Rom_25ABAB
gText_Rom_25ABAB: @ 0x0825ABAB
	.string "うみの ポケモンと あそぶことも\nおよいでいる ときの たのしみだね!$"
	.if (. - gText_Rom_25ABAB) > 0x24
	.error "gText_Rom_25ABAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABAB) < 0x24
	.space 0x24 - (. - gText_Rom_25ABAB)
	.endif

	@ data/text/trainers.inc:515 Route108_Text_MatthewIntro (+1 aliases)
	.globl gText_Rom_25ABCF
gText_Rom_25ABCF: @ 0x0825ABCF
	.string "なあ キミ!\nキミも すてられた ふねに いくのかい?$"
	.if (. - gText_Rom_25ABCF) > 0x1c
	.error "gText_Rom_25ABCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABCF) < 0x1c
	.space 0x1c - (. - gText_Rom_25ABCF)
	.endif

	@ data/text/trainers.inc:518 Route108_Text_MatthewDefeated (+1 aliases)
	.globl gText_Rom_25ABEB
gText_Rom_25ABEB: @ 0x0825ABEB
	.string "ああ ぼくが しずむ……\nぶくぶく……$"
	.if (. - gText_Rom_25ABEB) > 0x14
	.error "gText_Rom_25ABEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABEB) < 0x14
	.space 0x14 - (. - gText_Rom_25ABEB)
	.endif

	@ data/text/trainers.inc:521 Route108_Text_MatthewPostBattle
	.globl gText_Rom_25ABFF
gText_Rom_25ABFF: @ 0x0825ABFF
	.string "すてられぶねの なかに\nはいっていく やつらが いるんだよ!$"
	.if (. - gText_Rom_25ABFF) > 0x1f
	.error "gText_Rom_25ABFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABFF) < 0x1f
	.space 0x1f - (. - gText_Rom_25ABFF)
	.endif

	@ data/text/trainers.inc:524 Route108_Text_TaraIntro (+1 aliases)
	.globl gText_Rom_25AC1E
gText_Rom_25AC1E: @ 0x0825AC1E
	.string "ウソつきな カレに いわれたのよ\nビキニが にあってて カワイイって……$"
	.if (. - gText_Rom_25AC1E) > 0x25
	.error "gText_Rom_25AC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC1E) < 0x25
	.space 0x25 - (. - gText_Rom_25AC1E)
	.endif

	@ data/text/trainers.inc:527 Route108_Text_TaraDefeated (+1 aliases)
	.globl gText_Rom_25AC43
gText_Rom_25AC43: @ 0x0825AC43
	.string "いやん まけたわーっ!$"
	.if (. - gText_Rom_25AC43) > 0xc
	.error "gText_Rom_25AC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC43) < 0xc
	.space 0xc - (. - gText_Rom_25AC43)
	.endif

	@ data/text/trainers.inc:530 Route108_Text_TaraPostBattle
	.globl gText_Rom_25AC4F
gText_Rom_25AC4F: @ 0x0825AC4F
	.string "ウソでも いいから カワイイって いわれたい\nふくざつな おんなごころ……$"
	.if (. - gText_Rom_25AC4F) > 0x26
	.error "gText_Rom_25AC4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC4F) < 0x26
	.space 0x26 - (. - gText_Rom_25AC4F)
	.endif

	@ data/text/trainers.inc:533 Route108_Text_MissyIntro (+1 aliases)
	.globl gText_Rom_25AC75
gText_Rom_25AC75: @ 0x0825AC75
	.string "うみって だいすき!\nおよいでいれば イヤなことも わすれるわ!$"
	.if (. - gText_Rom_25AC75) > 0x21
	.error "gText_Rom_25AC75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC75) < 0x21
	.space 0x21 - (. - gText_Rom_25AC75)
	.endif

	@ data/text/trainers.inc:536 Route108_Text_MissyDefeated (+1 aliases)
	.globl gText_Rom_25AC96
gText_Rom_25AC96: @ 0x0825AC96
	.string "しょうぶに まけると\nストレスが たまるーっ!$"
	.if (. - gText_Rom_25AC96) > 0x18
	.error "gText_Rom_25AC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC96) < 0x18
	.space 0x18 - (. - gText_Rom_25AC96)
	.endif

	@ data/text/trainers.inc:539 Route108_Text_MissyPostBattle
	.globl gText_Rom_25ACAE
gText_Rom_25ACAE: @ 0x0825ACAE
	.string "ストレスは およいで はっさん!\nけんこうてき よねー!$"
	.if (. - gText_Rom_25ACAE) > 0x1d
	.error "gText_Rom_25ACAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACAE) < 0x1d
	.space 0x1d - (. - gText_Rom_25ACAE)
	.endif

	@ data/text/trainers.inc:542 Route108_Text_CoryIntro (+1 aliases)
	.globl gText_Rom_25ACCB
gText_Rom_25ACCB: @ 0x0825ACCB
	.string "みずポケモンが だいすきだー!\nほかの ポケモンも だいすきだー!$"
	.if (. - gText_Rom_25ACCB) > 0x22
	.error "gText_Rom_25ACCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACCB) < 0x22
	.space 0x22 - (. - gText_Rom_25ACCB)
	.endif

	@ data/text/trainers.inc:545 Route108_Text_CoryDefeated (+1 aliases)
	.globl gText_Rom_25ACED
gText_Rom_25ACED: @ 0x0825ACED
	.string "わー まけたー!\nわーわー!$"
	.if (. - gText_Rom_25ACED) > 0xf
	.error "gText_Rom_25ACED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACED) < 0xf
	.space 0xf - (. - gText_Rom_25ACED)
	.endif

	@ data/text/trainers.inc:548 Route108_Text_CoryPostBattle
	.globl gText_Rom_25ACFC
gText_Rom_25ACFC: @ 0x0825ACFC
	.string "おおごえで さけべば\nスッキリ するなあーっ!$"
	.if (. - gText_Rom_25ACFC) > 0x18
	.error "gText_Rom_25ACFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACFC) < 0x18
	.space 0x18 - (. - gText_Rom_25ACFC)
	.endif

	@ data/text/trainers.inc:551 Route108_Text_CoryRegister
	.globl gText_Rom_25AD14
gText_Rom_25AD14: @ 0x0825AD14
	.string "つよい トレーナーも だいすきだー!\nポケナビの とうろくを してくれー!$"
	.if (. - gText_Rom_25AD14) > 0x26
	.error "gText_Rom_25AD14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD14) < 0x26
	.space 0x26 - (. - gText_Rom_25AD14)
	.endif

	@ data/text/trainers.inc:554 Route108_Text_CoryRematchIntro (+1 aliases)
	.globl gText_Rom_25AD3A
gText_Rom_25AD3A: @ 0x0825AD3A
	.string "かっても まけても\nうみ での しょうぶが だいすきだー!$"
	.if (. - gText_Rom_25AD3A) > 0x1e
	.error "gText_Rom_25AD3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD3A) < 0x1e
	.space 0x1e - (. - gText_Rom_25AD3A)
	.endif

	@ data/text/trainers.inc:557 Route108_Text_CoryRematchDefeated (+1 aliases)
	.globl gText_Rom_25AD58
gText_Rom_25AD58: @ 0x0825AD58
	.string "わーっ また まけた!\nわー わー!$"
	.if (. - gText_Rom_25AD58) > 0x13
	.error "gText_Rom_25AD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD58) < 0x13
	.space 0x13 - (. - gText_Rom_25AD58)
	.endif

	@ data/text/trainers.inc:560 Route108_Text_CoryRematchPostBattle
	.globl gText_Rom_25AD6B
gText_Rom_25AD6B: @ 0x0825AD6B
	.string "きみも いきづまった ときは\nなにかを うみに むかって さけべーっ!$"
	.if (. - gText_Rom_25AD6B) > 0x24
	.error "gText_Rom_25AD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD6B) < 0x24
	.space 0x24 - (. - gText_Rom_25AD6B)
	.endif

	@ data/text/trainers.inc:563 Route108_Text_CarolinaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AD8F
gText_Rom_25AD8F: @ 0x0825AD8F
	.string "じまんの ポケモンたちで\nスピーディに たたかうわよ!$"
	.if (. - gText_Rom_25AD8F) != 0x1c
	.error "gText_Rom_25AD8F must retain its original byte length"
	.endif
	.globl gText_Rom_25ADA7
	.set gText_Rom_25ADA7, gText_Rom_25AD8F + 0x18

	@ data/text/trainers.inc:566 Route108_Text_CarolinaDefeated (+1 aliases)
	.globl gText_Rom_25ADAB
gText_Rom_25ADAB: @ 0x0825ADAB
	.string "あら かわいくないわね!$"
	.if (. - gText_Rom_25ADAB) > 0xd
	.error "gText_Rom_25ADAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADAB) < 0xd
	.space 0xd - (. - gText_Rom_25ADAB)
	.endif

	@ data/text/trainers.inc:569 Route108_Text_CarolinaPostBattle
	.globl gText_Rom_25ADB8
gText_Rom_25ADB8: @ 0x0825ADB8
	.string "せっかくの うみ だし\nピンクの フリフリの ビキニも\lちょっと きてみたい……$"
	.if (. - gText_Rom_25ADB8) > 0x29
	.error "gText_Rom_25ADB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADB8) < 0x29
	.space 0x29 - (. - gText_Rom_25ADB8)
	.endif

	@ data/text/trainers.inc:572 Route109_Text_DavidIntro (+1 aliases)
	.globl gText_Rom_25ADE1
gText_Rom_25ADE1: @ 0x0825ADE1
	.string "うりゃーっ!!\nみごとに われた ふっきんを みろーっ!!$"
	.if (. - gText_Rom_25ADE1) > 0x1e
	.error "gText_Rom_25ADE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADE1) < 0x1e
	.space 0x1e - (. - gText_Rom_25ADE1)
	.endif

	@ data/text/trainers.inc:575 Route109_Text_DavidDefeated (+1 aliases)
	.globl gText_Rom_25ADFF
gText_Rom_25ADFF: @ 0x0825ADFF
	.string "うりゃーっ!!\nまけたーっ!!$"
	.if (. - gText_Rom_25ADFF) > 0x10
	.error "gText_Rom_25ADFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADFF) < 0x10
	.space 0x10 - (. - gText_Rom_25ADFF)
	.endif

	@ data/text/trainers.inc:578 Route109_Text_DavidPostBattle
	.globl gText_Rom_25AE0F
gText_Rom_25AE0F: @ 0x0825AE0F
	.string "うりゃーっ!!\pふっきんと ポケモンの しょうぶは\nかんけい ないぞーっ!!$"
	.if (. - gText_Rom_25AE0F) > 0x27
	.error "gText_Rom_25AE0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE0F) < 0x27
	.space 0x27 - (. - gText_Rom_25AE0F)
	.endif

	@ data/text/trainers.inc:581 Route109_Text_AliceIntro (+1 aliases)
	.globl gText_Rom_25AE36
gText_Rom_25AE36: @ 0x0825AE36
	.string "ひやけ たいさく\nあなたは してる?$"
	.if (. - gText_Rom_25AE36) > 0x13
	.error "gText_Rom_25AE36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE36) < 0x13
	.space 0x13 - (. - gText_Rom_25AE36)
	.endif

	@ data/text/trainers.inc:584 Route109_Text_AliceDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AE49
gText_Rom_25AE49: @ 0x0825AE49
	.string "あちちちちっ!$"
	.if (. - gText_Rom_25AE49) != 0x8
	.error "gText_Rom_25AE49 must retain its original byte length"
	.endif
	.globl gText_Rom_25AE4D
	.set gText_Rom_25AE4D, gText_Rom_25AE49 + 0x4

	@ data/text/trainers.inc:587 Route109_Text_AlicePostBattle
	.globl gText_Rom_25AE51
gText_Rom_25AE51: @ 0x0825AE51
	.string "ほっぺの あたりが いちばん\nひやけ しやすい ばしょ なのよ!$"
	.if (. - gText_Rom_25AE51) > 0x21
	.error "gText_Rom_25AE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE51) < 0x21
	.space 0x21 - (. - gText_Rom_25AE51)
	.endif

	@ data/text/trainers.inc:590 Route109_Text_HueyIntro (+1 aliases)
	.globl gText_Rom_25AE72
gText_Rom_25AE72: @ 0x0825AE72
	.string "せかいじゅうの みなとを おとずれたが\nカイナは さいこーの みなとまち だぜ!$"
	.if (. - gText_Rom_25AE72) > 0x29
	.error "gText_Rom_25AE72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE72) < 0x29
	.space 0x29 - (. - gText_Rom_25AE72)
	.endif

	@ data/text/trainers.inc:593 Route109_Text_HueyDefeated (+1 aliases)
	.globl gText_Rom_25AE9B
gText_Rom_25AE9B: @ 0x0825AE9B
	.string "あんた さいこー だぜ……$"
	.if (. - gText_Rom_25AE9B) > 0xe
	.error "gText_Rom_25AE9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE9B) < 0xe
	.space 0xe - (. - gText_Rom_25AE9B)
	.endif

	@ data/text/trainers.inc:596 Route109_Text_HueyPostBattle
	.globl gText_Rom_25AEA9
gText_Rom_25AEA9: @ 0x0825AEA9
	.string "さいこーの みなとまちには\nさいこーの トレーナーが いたぜ……$"
	.if (. - gText_Rom_25AEA9) > 0x21
	.error "gText_Rom_25AEA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEA9) < 0x21
	.space 0x21 - (. - gText_Rom_25AEA9)
	.endif

	@ data/text/trainers.inc:599 Route109_Text_EdmondIntro (+1 aliases)
	.globl gText_Rom_25AECA
gText_Rom_25AECA: @ 0x0825AECA
	.string "ううう……\nしょうぶ するの? オレと?$"
	.if (. - gText_Rom_25AECA) > 0x15
	.error "gText_Rom_25AECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AECA) < 0x15
	.space 0x15 - (. - gText_Rom_25AECA)
	.endif

	@ data/text/trainers.inc:602 Route109_Text_EdmondDefeated (+1 aliases)
	.globl gText_Rom_25AEDF
gText_Rom_25AEDF: @ 0x0825AEDF
	.string "げろげろ……$"
	.if (. - gText_Rom_25AEDF) > 0x7
	.error "gText_Rom_25AEDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEDF) < 0x7
	.space 0x7 - (. - gText_Rom_25AEDF)
	.endif

	@ data/text/trainers.inc:605 Route109_Text_EdmondPostBattle
	.globl gText_Rom_25AEE6
gText_Rom_25AEE6: @ 0x0825AEE6
	.string "いつもは もっと つよいんだぞ!\nふなよいで ちょうしが わるいだけだ!\pふなのり だけど……$"
	.if (. - gText_Rom_25AEE6) > 0x30
	.error "gText_Rom_25AEE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AEE6) < 0x30
	.space 0x30 - (. - gText_Rom_25AEE6)
	.endif

	@ data/text/trainers.inc:608 Route109_Text_RickyIntro (+1 aliases)
	.globl gText_Rom_25AF16
gText_Rom_25AF16: @ 0x0825AF16
	.string "のどが かわいたよ……\nうみのいえで サイコソーダ のみたいな……$"
	.if (. - gText_Rom_25AF16) > 0x22
	.error "gText_Rom_25AF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF16) < 0x22
	.space 0x22 - (. - gText_Rom_25AF16)
	.endif

	@ data/text/trainers.inc:611 Route109_Text_RickyDefeated (+1 aliases)
	.globl gText_Rom_25AF38
gText_Rom_25AF38: @ 0x0825AF38
	.string "うーん……$"
	.if (. - gText_Rom_25AF38) > 0x6
	.error "gText_Rom_25AF38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF38) < 0x6
	.space 0x6 - (. - gText_Rom_25AF38)
	.endif

	@ data/text/trainers.inc:614 Route109_Text_RickyPostBattle
	.globl gText_Rom_25AF3E
gText_Rom_25AF3E: @ 0x0825AF3E
	.string "おなかも へってきた……\nうきわが おっきな ドーナッツに みえるよ$"
	.if (. - gText_Rom_25AF3E) > 0x23
	.error "gText_Rom_25AF3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF3E) < 0x23
	.space 0x23 - (. - gText_Rom_25AF3E)
	.endif

	@ data/text/trainers.inc:617 Route109_Text_RickyRegister
	.globl gText_Rom_25AF61
gText_Rom_25AF61: @ 0x0825AF61
	.string "こんど のどが かわいて ないときに\nもういっかい しょうぶ してくれる?$"
	.if (. - gText_Rom_25AF61) > 0x26
	.error "gText_Rom_25AF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF61) < 0x26
	.space 0x26 - (. - gText_Rom_25AF61)
	.endif

	@ data/text/trainers.inc:620 Route109_Text_RickyRematchIntro (+1 aliases)
	.globl gText_Rom_25AF87
gText_Rom_25AF87: @ 0x0825AF87
	.string "おなか へってるけど\nしょうぶ するなら げんき だよ!$"
	.if (. - gText_Rom_25AF87) > 0x1d
	.error "gText_Rom_25AF87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF87) < 0x1d
	.space 0x1d - (. - gText_Rom_25AF87)
	.endif

	@ data/text/trainers.inc:623 Route109_Text_RickyRematchDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AFA4
gText_Rom_25AFA4: @ 0x0825AFA4
	.string "まけた……\nおなかが へってるからだ$"
	.if (. - gText_Rom_25AFA4) != 0x13
	.error "gText_Rom_25AFA4 must retain its original byte length"
	.endif
	.globl gText_Rom_25AFB3
	.set gText_Rom_25AFB3, gText_Rom_25AFA4 + 0xf

	@ data/text/trainers.inc:626 Route109_Text_RickyRematchPostBattle
	.globl gText_Rom_25AFB7
gText_Rom_25AFB7: @ 0x0825AFB7
	.string "すなはまで たべると\nなんでも おいしく おもえるよね$"
	.if (. - gText_Rom_25AFB7) > 0x1c
	.error "gText_Rom_25AFB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFB7) < 0x1c
	.space 0x1c - (. - gText_Rom_25AFB7)
	.endif

	@ data/text/trainers.inc:629 Route109_Text_LolaIntro (+1 aliases)
	.globl gText_Rom_25AFD3
gText_Rom_25AFD3: @ 0x0825AFD3
	.string "ビーチパラソルって\nおおきな おはな みたいよねー!$"
	.if (. - gText_Rom_25AFD3) > 0x1b
	.error "gText_Rom_25AFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFD3) < 0x1b
	.space 0x1b - (. - gText_Rom_25AFD3)
	.endif

	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25AFEE
gText_Rom_25AFEE: @ 0x0825AFEE
	.string "ママーっ!$"
	.if (. - gText_Rom_25AFEE) > 0x6
	.error "gText_Rom_25AFEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFEE) < 0x6
	.space 0x6 - (. - gText_Rom_25AFEE)
	.endif

	@ data/text/trainers.inc:635 Route109_Text_LolaPostBattle
	.globl gText_Rom_25AFF4
gText_Rom_25AFF4: @ 0x0825AFF4
	.string "おそらの うえから すなはまを みたら\nおはなばたけ みたいに みえるのよ!$"
	.if (. - gText_Rom_25AFF4) > 0x27
	.error "gText_Rom_25AFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFF4) < 0x27
	.space 0x27 - (. - gText_Rom_25AFF4)
	.endif

	@ data/text/trainers.inc:638 Route109_Text_LolaRegister
	.globl gText_Rom_25B01B
gText_Rom_25B01B: @ 0x0825B01B
	.string "わたし だったら\nまいにち ここに きているよ!$"
	.if (. - gText_Rom_25B01B) > 0x19
	.error "gText_Rom_25B01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B01B) < 0x19
	.space 0x19 - (. - gText_Rom_25B01B)
	.endif

	@ data/text/trainers.inc:641 Route109_Text_LolaRematchIntro (+1 aliases)
	.globl gText_Rom_25B034
gText_Rom_25B034: @ 0x0825B034
	.string "もう あなたには まけません!\nそのために うきわ してるんだから!$"
	.if (. - gText_Rom_25B034) > 0x23
	.error "gText_Rom_25B034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B034) < 0x23
	.space 0x23 - (. - gText_Rom_25B034)
	.endif

	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25B057
gText_Rom_25B057: @ 0x0825B057
	.string "ママーっ!$"
	.if (. - gText_Rom_25B057) > 0x6
	.error "gText_Rom_25B057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B057) < 0x6
	.space 0x6 - (. - gText_Rom_25B057)
	.endif

	@ data/text/trainers.inc:647 Route109_Text_LolaRematchPostBattle
	.globl gText_Rom_25B05D
gText_Rom_25B05D: @ 0x0825B05D
	.string "うきわ もってると あたしと ポケモンの\nかわいさが ぐぐーんと アップするの!$"
	.if (. - gText_Rom_25B05D) > 0x29
	.error "gText_Rom_25B05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B05D) < 0x29
	.space 0x29 - (. - gText_Rom_25B05D)
	.endif

	@ data/text/trainers.inc:650 Route109_Text_AustinaIntro (+1 aliases)
	.globl gText_Rom_25B086
gText_Rom_25B086: @ 0x0825B086
	.string "うきわが ないと およげないけど\nポケモンなら だれにも まけないよ!$"
	.if (. - gText_Rom_25B086) > 0x24
	.error "gText_Rom_25B086 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B086) < 0x24
	.space 0x24 - (. - gText_Rom_25B086)
	.endif

	@ data/text/trainers.inc:653 Route109_Text_AustinaDefeated (+1 aliases)
	.globl gText_Rom_25B0AA
gText_Rom_25B0AA: @ 0x0825B0AA
	.string "うきわが あるから まけちゃったのかな?$"
	.if (. - gText_Rom_25B0AA) > 0x15
	.error "gText_Rom_25B0AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0AA) < 0x15
	.space 0x15 - (. - gText_Rom_25B0AA)
	.endif

	@ data/text/trainers.inc:656 Route109_Text_AustinaPostBattle
	.globl gText_Rom_25B0BF
gText_Rom_25B0BF: @ 0x0825B0BF
	.string "あたしの うきわ\nオシャレだから てばなせないの$"
	.if (. - gText_Rom_25B0BF) > 0x19
	.error "gText_Rom_25B0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0BF) < 0x19
	.space 0x19 - (. - gText_Rom_25B0BF)
	.endif

	@ data/text/trainers.inc:659 Route109_Text_GwenIntro (+1 aliases)
	.globl gText_Rom_25B0D8
gText_Rom_25B0D8: @ 0x0825B0D8
	.string "そこの トレーナーさん\nあたしと たたかう でちゅ!$"
	.if (. - gText_Rom_25B0D8) > 0x1b
	.error "gText_Rom_25B0D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0D8) < 0x1b
	.space 0x1b - (. - gText_Rom_25B0D8)
	.endif

	@ data/text/trainers.inc:662 Route109_Text_GwenDefeated (+1 aliases)
	.globl gText_Rom_25B0F3
gText_Rom_25B0F3: @ 0x0825B0F3
	.string "つよいでちゅね……$"
	.if (. - gText_Rom_25B0F3) > 0xa
	.error "gText_Rom_25B0F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0F3) < 0xa
	.space 0xa - (. - gText_Rom_25B0F3)
	.endif

	@ data/text/trainers.inc:665 Route109_Text_GwenPostBattle
	.globl gText_Rom_25B0FD
gText_Rom_25B0FD: @ 0x0825B0FD
	.string "どうしたら そんなに\nつよくなれる でちゅか……?$"
	.if (. - gText_Rom_25B0FD) > 0x1a
	.error "gText_Rom_25B0FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0FD) < 0x1a
	.space 0x1a - (. - gText_Rom_25B0FD)
	.endif

	@ data/text/trainers.inc:668 Route109_Text_CarterIntro (+1 aliases)
	.globl gText_Rom_25B117
gText_Rom_25B117: @ 0x0825B117
	.string "わはは!\nおじさん おおもの つっちゃうぞ!$"
	.if (. - gText_Rom_25B117) > 0x17
	.error "gText_Rom_25B117 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B117) < 0x17
	.space 0x17 - (. - gText_Rom_25B117)
	.endif

	@ data/text/trainers.inc:671 Route109_Text_CarterDefeated (+1 aliases)
	.globl gText_Rom_25B12E
gText_Rom_25B12E: @ 0x0825B12E
	.string "おじさん まけちゃったな……$"
	.if (. - gText_Rom_25B12E) > 0xf
	.error "gText_Rom_25B12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B12E) < 0xf
	.space 0xf - (. - gText_Rom_25B12E)
	.endif

	@ data/text/trainers.inc:674 Route109_Text_CarterPostBattle
	.globl gText_Rom_25B13D
gText_Rom_25B13D: @ 0x0825B13D
	.string "たしかに きみは おおもの だな!\nいや きっと おおものに なるぞ!$"
	.if (. - gText_Rom_25B13D) > 0x24
	.error "gText_Rom_25B13D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B13D) < 0x24
	.space 0x24 - (. - gText_Rom_25B13D)
	.endif

	@ data/text/trainers.inc:677 Route109_Text_PaulIntro (+1 aliases)
	.globl gText_Rom_25B161
gText_Rom_25B161: @ 0x0825B161
	.string "リキ『やあ こまったなあ\pふたりっきりの じかん\nじゃま して ほしくないなあ$"
	.if (. - gText_Rom_25B161) > 0x28
	.error "gText_Rom_25B161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B161) < 0x28
	.space 0x28 - (. - gText_Rom_25B161)
	.endif

	@ data/text/trainers.inc:680 Route109_Text_PaulDefeated (+1 aliases)
	.globl gText_Rom_25B189
gText_Rom_25B189: @ 0x0825B189
	.string "リキ『やあ まいったな……$"
	.if (. - gText_Rom_25B189) > 0xe
	.error "gText_Rom_25B189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B189) < 0xe
	.space 0xe - (. - gText_Rom_25B189)
	.endif

	@ data/text/trainers.inc:683 Route109_Text_PaulPostBattle
	.globl gText_Rom_25B197
gText_Rom_25B197: @ 0x0825B197
	.string "リキ『やあ ぼくたちが ここに いること\nだれにも いわないで くれよ!\lふたりっきりの せかい なんだからさ!$"
	.if (. - gText_Rom_25B197) > 0x39
	.error "gText_Rom_25B197 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B197) < 0x39
	.space 0x39 - (. - gText_Rom_25B197)
	.endif

	@ data/text/trainers.inc:686 Route109_Text_PaulNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25B1D0
gText_Rom_25B1D0: @ 0x0825B1D0
	.string "リキ『ぼくたち ラブラブ だからね\nぼくたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!$"
	.if (. - gText_Rom_25B1D0) > 0x32
	.error "gText_Rom_25B1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B1D0) < 0x32
	.space 0x32 - (. - gText_Rom_25B1D0)
	.endif

	@ data/text/trainers.inc:689 Route109_Text_MelIntro (+1 aliases)
	.globl gText_Rom_25B202
gText_Rom_25B202: @ 0x0825B202
	.string "シキ『あたしたちが ラブラブだから\nホウエンは あっついのよお!$"
	.if (. - gText_Rom_25B202) > 0x21
	.error "gText_Rom_25B202 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B202) < 0x21
	.space 0x21 - (. - gText_Rom_25B202)
	.endif

	@ data/text/trainers.inc:692 Route109_Text_MelDefeated (+1 aliases)
	.globl gText_Rom_25B223
gText_Rom_25B223: @ 0x0825B223
	.string "シキ『あたしの せいで まけたんだわ……\nこんなんじゃ リキに きらわれちゃう!$"
	.if (. - gText_Rom_25B223) > 0x29
	.error "gText_Rom_25B223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B223) < 0x29
	.space 0x29 - (. - gText_Rom_25B223)
	.endif

	@ data/text/trainers.inc:695 Route109_Text_MelPostBattle
	.globl gText_Rom_25B24C
gText_Rom_25B24C: @ 0x0825B24C
	.string "シキ『ねえ リキ\nあたしのこと おこってない?\lおこっちゃ いやよ$"
	.if (. - gText_Rom_25B24C) > 0x22
	.error "gText_Rom_25B24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B24C) < 0x22
	.space 0x22 - (. - gText_Rom_25B24C)
	.endif

	@ data/text/trainers.inc:698 Route109_Text_MelNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25B26E
gText_Rom_25B26E: @ 0x0825B26E
	.string "シキ『あたしたち ラブラブ だからね\nあたしたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!$"
	.if (. - gText_Rom_25B26E) > 0x34
	.error "gText_Rom_25B26E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B26E) < 0x34
	.space 0x34 - (. - gText_Rom_25B26E)
	.endif

	@ data/text/trainers.inc:701 Route109_Text_ChandlerIntro (+1 aliases)
	.globl gText_Rom_25B2A2
gText_Rom_25B2A2: @ 0x0825B2A2
	.string "じゃーん!\nボクの うきわ まるいでしょーっ!$"
	.if (. - gText_Rom_25B2A2) > 0x18
	.error "gText_Rom_25B2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2A2) < 0x18
	.space 0x18 - (. - gText_Rom_25B2A2)
	.endif

	@ data/text/trainers.inc:704 Route109_Text_ChandlerDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B2BA
gText_Rom_25B2BA: @ 0x0825B2BA
	.string "あーあ! ざんねん$"
	.if (. - gText_Rom_25B2BA) != 0xa
	.error "gText_Rom_25B2BA must retain its original byte length"
	.endif
	.globl gText_Rom_25B2BF
	.set gText_Rom_25B2BF, gText_Rom_25B2BA + 0x5

	@ data/text/trainers.inc:707 Route109_Text_ChandlerPostBattle
	.globl gText_Rom_25B2C4
gText_Rom_25B2C4: @ 0x0825B2C4
	.string "せっかく まるい うきわを\nみせて あげたのにさ$"
	.if (. - gText_Rom_25B2C4) > 0x19
	.error "gText_Rom_25B2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2C4) < 0x19
	.space 0x19 - (. - gText_Rom_25B2C4)
	.endif

	@ data/text/trainers.inc:710 Route109_Text_HaileyIntro (+1 aliases)
	.globl gText_Rom_25B2DD
gText_Rom_25B2DD: @ 0x0825B2DD
	.string "およげない から\nおよぐ ふりを してるの!$"
	.if (. - gText_Rom_25B2DD) > 0x17
	.error "gText_Rom_25B2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2DD) < 0x17
	.space 0x17 - (. - gText_Rom_25B2DD)
	.endif

	@ data/text/trainers.inc:713 Route109_Text_HaileyDefeated (+1 aliases)
	.globl gText_Rom_25B2F4
gText_Rom_25B2F4: @ 0x0825B2F4
	.string "やっぱね!\nかてないって おもってたんだ$"
	.if (. - gText_Rom_25B2F4) > 0x15
	.error "gText_Rom_25B2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2F4) < 0x15
	.space 0x15 - (. - gText_Rom_25B2F4)
	.endif

	@ data/text/trainers.inc:716 Route109_Text_HaileyPostBattle
	.globl gText_Rom_25B309
gText_Rom_25B309: @ 0x0825B309
	.string "およげるように なったら\nポケモンも つよく なると おもう!$"
	.if (. - gText_Rom_25B309) > 0x20
	.error "gText_Rom_25B309 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B309) < 0x20
	.space 0x20 - (. - gText_Rom_25B309)
	.endif

	@ data/text/trainers.inc:719 Route109_Text_ElijahIntro (+1 aliases)
	.globl gText_Rom_25B329
gText_Rom_25B329: @ 0x0825B329
	.string "こうはの おれさまには\nこんな ポケモンが おにあいだぜ!$"
	.if (. - gText_Rom_25B329) > 0x1e
	.error "gText_Rom_25B329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B329) < 0x1e
	.space 0x1e - (. - gText_Rom_25B329)
	.endif

	@ data/text/trainers.inc:722 Route109_Text_ElijahDefeated (+1 aliases)
	.globl gText_Rom_25B347
gText_Rom_25B347: @ 0x0825B347
	.string "まけても カッコ いいだろ?$"
	.if (. - gText_Rom_25B347) > 0xf
	.error "gText_Rom_25B347 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B347) < 0xf
	.space 0xf - (. - gText_Rom_25B347)
	.endif

	@ data/text/trainers.inc:725 Route109_Text_ElijahPostBattle
	.globl gText_Rom_25B356
gText_Rom_25B356: @ 0x0825B356
	.string "こうはの おれさまには\nみなとまちが おにあいだぜ!\lカイナシティに いってくるか$"
	.if (. - gText_Rom_25B356) > 0x2a
	.error "gText_Rom_25B356 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B356) < 0x2a
	.space 0x2a - (. - gText_Rom_25B356)
	.endif

	@ data/text/trainers.inc:728 Route110_Text_JacobIntro (+1 aliases)
	.globl gText_Rom_25B380
gText_Rom_25B380: @ 0x0825B380
	.string "おっと あぶない!\nバイク レースに なれてない ようだな!$"
	.if (. - gText_Rom_25B380) > 0x1f
	.error "gText_Rom_25B380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B380) < 0x1f
	.space 0x1f - (. - gText_Rom_25B380)
	.endif

	@ data/text/trainers.inc:731 Route110_Text_JacobDefeated (+1 aliases)
	.globl gText_Rom_25B39F
gText_Rom_25B39F: @ 0x0825B39F
	.string "キキーッ!\nブレーキが こしょうした!$"
	.if (. - gText_Rom_25B39F) > 0x14
	.error "gText_Rom_25B39F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B39F) < 0x14
	.space 0x14 - (. - gText_Rom_25B39F)
	.endif

	@ data/text/trainers.inc:734 Route110_Text_JacobPostBattle
	.globl gText_Rom_25B3B3
gText_Rom_25B3B3: @ 0x0825B3B3
	.string "タイヤの パンクや\nブレーキの こしょうは ケガのもと\lちゃんと てんけん しないとな$"
	.if (. - gText_Rom_25B3B3) > 0x2c
	.error "gText_Rom_25B3B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3B3) < 0x2c
	.space 0x2c - (. - gText_Rom_25B3B3)
	.endif

	@ data/text/trainers.inc:737 Route110_Text_AnthonyIntro (+1 aliases)
	.globl gText_Rom_25B3DF
gText_Rom_25B3DF: @ 0x0825B3DF
	.string "ヘイ ユー!\nワタシの スピードに ついてこれるかな!?$"
	.if (. - gText_Rom_25B3DF) > 0x1d
	.error "gText_Rom_25B3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3DF) < 0x1d
	.space 0x1d - (. - gText_Rom_25B3DF)
	.endif

	@ data/text/trainers.inc:740 Route110_Text_AnthonyDefeated (+1 aliases)
	.globl gText_Rom_25B3FC
gText_Rom_25B3FC: @ 0x0825B3FC
	.string "オー マイ ガッ!$"
	.if (. - gText_Rom_25B3FC) > 0xa
	.error "gText_Rom_25B3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B3FC) < 0xa
	.space 0xa - (. - gText_Rom_25B3FC)
	.endif

	@ data/text/trainers.inc:743 Route110_Text_AnthonyPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B406
gText_Rom_25B406: @ 0x0825B406
	.string "スピードだけじゃ ポケモンしょうぶ\nかてませーん! ハンセイしまーす!$"
	.if (. - gText_Rom_25B406) != 0x24
	.error "gText_Rom_25B406 must retain its original byte length"
	.endif
	.globl gText_Rom_25B425
	.set gText_Rom_25B425, gText_Rom_25B406 + 0x1f

	@ data/text/trainers.inc:746 Route110_Text_BenjaminIntro (+1 aliases)
	.globl gText_Rom_25B42A
gText_Rom_25B42A: @ 0x0825B42A
	.string "じてんしゃの スピード でても\nあせっちゃ いけないよ!$"
	.if (. - gText_Rom_25B42A) > 0x1d
	.error "gText_Rom_25B42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B42A) < 0x1d
	.space 0x1d - (. - gText_Rom_25B42A)
	.endif

	@ data/text/trainers.inc:749 Route110_Text_BenjaminDefeated (+1 aliases)
	.globl gText_Rom_25B447
gText_Rom_25B447: @ 0x0825B447
	.string "ポケモンしょうぶも\nあせっちゃ いけないな……$"
	.if (. - gText_Rom_25B447) > 0x18
	.error "gText_Rom_25B447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B447) < 0x18
	.space 0x18 - (. - gText_Rom_25B447)
	.endif

	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl gText_Rom_25B45F
gText_Rom_25B45F: @ 0x0825B45F
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!$"
	.if (. - gText_Rom_25B45F) > 0x20
	.error "gText_Rom_25B45F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B45F) < 0x20
	.space 0x20 - (. - gText_Rom_25B45F)
	.endif

	@ data/text/trainers.inc:755 Route110_Text_BenjaminRegister
	.globl gText_Rom_25B47F
gText_Rom_25B47F: @ 0x0825B47F
	.string "あせらずに また がんばるか!\nよかったらさ れんらく くれよな$"
	.if (. - gText_Rom_25B47F) > 0x21
	.error "gText_Rom_25B47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B47F) < 0x21
	.space 0x21 - (. - gText_Rom_25B47F)
	.endif

	@ data/text/trainers.inc:758 Route110_Text_BenjaminRematchIntro (+1 aliases)
	.globl gText_Rom_25B4A0
gText_Rom_25B4A0: @ 0x0825B4A0
	.string "おっ! スピード だしすぎ じゃない?\nちょっと のんびり しょうぶ しようよ!$"
	.if (. - gText_Rom_25B4A0) > 0x29
	.error "gText_Rom_25B4A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4A0) < 0x29
	.space 0x29 - (. - gText_Rom_25B4A0)
	.endif

	@ data/text/trainers.inc:761 Route110_Text_BenjaminRematchDefeated (+1 aliases)
	.globl gText_Rom_25B4C9
gText_Rom_25B4C9: @ 0x0825B4C9
	.string "べつに あせってないけど\nなぜだか まけて しまうな……$"
	.if (. - gText_Rom_25B4C9) > 0x1d
	.error "gText_Rom_25B4C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4C9) < 0x1d
	.space 0x1d - (. - gText_Rom_25B4C9)
	.endif

	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl gText_Rom_25B4E6
gText_Rom_25B4E6: @ 0x0825B4E6
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!$"
	.if (. - gText_Rom_25B4E6) > 0x20
	.error "gText_Rom_25B4E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4E6) < 0x20
	.space 0x20 - (. - gText_Rom_25B4E6)
	.endif

	@ data/text/trainers.inc:767 Route110_Text_AbigailIntro (+1 aliases)
	.globl gText_Rom_25B506
gText_Rom_25B506: @ 0x0825B506
	.string "トライアスロンは ハードな スポーツ\nすいえい じてんしゃ マラソンの\l3しゅもくを こなすのよ!$"
	.if (. - gText_Rom_25B506) > 0x32
	.error "gText_Rom_25B506 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B506) < 0x32
	.space 0x32 - (. - gText_Rom_25B506)
	.endif

	@ data/text/trainers.inc:770 Route110_Text_AbigailDefeated (+1 aliases)
	.globl gText_Rom_25B538
gText_Rom_25B538: @ 0x0825B538
	.string "ポケモン しょうぶも ハードだわ!$"
	.if (. - gText_Rom_25B538) > 0x12
	.error "gText_Rom_25B538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B538) < 0x12
	.space 0x12 - (. - gText_Rom_25B538)
	.endif

	@ data/text/trainers.inc:773 Route110_Text_AbigailPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B54A
gText_Rom_25B54A: @ 0x0825B54A
	.string "つかれたから ひとやすみ\nきゅうけいは たいせつ なのよ$"
	.if (. - gText_Rom_25B54A) != 0x1d
	.error "gText_Rom_25B54A must retain its original byte length"
	.endif
	.globl gText_Rom_25B563
	.set gText_Rom_25B563, gText_Rom_25B54A + 0x19

	@ data/text/trainers.inc:776 Route110_Text_AbigailRegister
	.globl gText_Rom_25B567
gText_Rom_25B567: @ 0x0825B567
	.string "あなた きにいったわ!\nまた サイクリングロードで たたかいましょ$"
	.if (. - gText_Rom_25B567) > 0x22
	.error "gText_Rom_25B567 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B567) < 0x22
	.space 0x22 - (. - gText_Rom_25B567)
	.endif

	@ data/text/trainers.inc:779 Route110_Text_AbigailRematchIntro (+1 aliases)
	.globl gText_Rom_25B589
gText_Rom_25B589: @ 0x0825B589
	.string "じてんしゃに のりながら\nポケモンしょうぶ ってのも いいものよね!$"
	.if (. - gText_Rom_25B589) > 0x23
	.error "gText_Rom_25B589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B589) < 0x23
	.space 0x23 - (. - gText_Rom_25B589)
	.endif

	@ data/text/trainers.inc:782 Route110_Text_AbigailRematchDefeated (+1 aliases)
	.globl gText_Rom_25B5AC
gText_Rom_25B5AC: @ 0x0825B5AC
	.string "うわー\nどうして そんなに つよいの?$"
	.if (. - gText_Rom_25B5AC) > 0x14
	.error "gText_Rom_25B5AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5AC) < 0x14
	.space 0x14 - (. - gText_Rom_25B5AC)
	.endif

	@ data/text/trainers.inc:785 Route110_Text_AbigailRematchPostBattle
	.globl gText_Rom_25B5C0
gText_Rom_25B5C0: @ 0x0825B5C0
	.string "ひょっとして きろくに\nちょうせん していたのかしら?\pだったら ジャマして ゴメンねー$"
	.if (. - gText_Rom_25B5C0) > 0x2d
	.error "gText_Rom_25B5C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5C0) < 0x2d
	.space 0x2d - (. - gText_Rom_25B5C0)
	.endif

	@ data/text/trainers.inc:788 Route110_Text_JasmineIntro (+1 aliases)
	.globl gText_Rom_25B5ED
gText_Rom_25B5ED: @ 0x0825B5ED
	.string "じてんしゃを こぎつづけて\nふとももが パンパンに なっちゃった$"
	.if (. - gText_Rom_25B5ED) > 0x21
	.error "gText_Rom_25B5ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5ED) < 0x21
	.space 0x21 - (. - gText_Rom_25B5ED)
	.endif

	@ data/text/trainers.inc:791 Route110_Text_JasmineDefeated (+1 aliases)
	.globl gText_Rom_25B60E
gText_Rom_25B60E: @ 0x0825B60E
	.string "きんにくつうが しんぱいだわ……$"
	.if (. - gText_Rom_25B60E) > 0x11
	.error "gText_Rom_25B60E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B60E) < 0x11
	.space 0x11 - (. - gText_Rom_25B60E)
	.endif

	@ data/text/trainers.inc:794 Route110_Text_JasminePostBattle
	.globl gText_Rom_25B61F
gText_Rom_25B61F: @ 0x0825B61F
	.string "ジムの バッチを もってるの?\nどうりで つよい はずだわ!$"
	.if (. - gText_Rom_25B61F) > 0x1f
	.error "gText_Rom_25B61F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B61F) < 0x1f
	.space 0x1f - (. - gText_Rom_25B61F)
	.endif

	@ data/text/trainers.inc:797 Route110_Text_EdwardIntro (+1 aliases)
	.globl gText_Rom_25B63E
gText_Rom_25B63E: @ 0x0825B63E
	.string "おまえの さくせんは すべて みえた!\nわたしが まけるはず ない!$"
	.if (. - gText_Rom_25B63E) > 0x23
	.error "gText_Rom_25B63E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B63E) < 0x23
	.space 0x23 - (. - gText_Rom_25B63E)
	.endif

	@ data/text/trainers.inc:800 Route110_Text_EdwardDefeated (+1 aliases)
	.globl gText_Rom_25B661
gText_Rom_25B661: @ 0x0825B661
	.string "じぶんの はいぼくは みえなかった……!$"
	.if (. - gText_Rom_25B661) > 0x15
	.error "gText_Rom_25B661 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B661) < 0x15
	.space 0x15 - (. - gText_Rom_25B661)
	.endif

	@ data/text/trainers.inc:803 Route110_Text_EdwardPostBattle
	.globl gText_Rom_25B676
gText_Rom_25B676: @ 0x0825B676
	.string "おまえの みらいが みえる……\pふうむ……\nあかるい ひかりが みえるぞ……!$"
	.if (. - gText_Rom_25B676) > 0x28
	.error "gText_Rom_25B676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B676) < 0x28
	.space 0x28 - (. - gText_Rom_25B676)
	.endif

	@ data/text/trainers.inc:806 Route110_Text_JaclynIntro (+1 aliases)
	.globl gText_Rom_25B69E
gText_Rom_25B69E: @ 0x0825B69E
	.string "おほほほほっ!\nわたくしの ミラクルを みせてあげるわ!$"
	.if (. - gText_Rom_25B69E) > 0x1d
	.error "gText_Rom_25B69E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B69E) < 0x1d
	.space 0x1d - (. - gText_Rom_25B69E)
	.endif

	@ data/text/trainers.inc:809 Route110_Text_JaclynDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B6BB
gText_Rom_25B6BB: @ 0x0825B6BB
	.string "ミラクルに まけたーっ!$"
	.if (. - gText_Rom_25B6BB) != 0xd
	.error "gText_Rom_25B6BB must retain its original byte length"
	.endif
	.globl gText_Rom_25B6C1
	.set gText_Rom_25B6C1, gText_Rom_25B6BB + 0x6

	@ data/text/trainers.inc:812 Route110_Text_JaclynPostBattle
	.globl gText_Rom_25B6C8
gText_Rom_25B6C8: @ 0x0825B6C8
	.string "わたくしに かったことが ミラクル……\nそう きせき なのよ!\lいつでも かてるなんて おもわないことね!$"
	.if (. - gText_Rom_25B6C8) > 0x36
	.error "gText_Rom_25B6C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B6C8) < 0x36
	.space 0x36 - (. - gText_Rom_25B6C8)
	.endif

	@ data/text/trainers.inc:815 Route110_Text_EdwinIntro (+1 aliases)
	.globl gText_Rom_25B6FE
gText_Rom_25B6FE: @ 0x0825B6FE
	.string "キミの ポケモン みせてくれない?\nひとめで いいから おねがい!$"
	.if (. - gText_Rom_25B6FE) > 0x22
	.error "gText_Rom_25B6FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B6FE) < 0x22
	.space 0x22 - (. - gText_Rom_25B6FE)
	.endif

	@ data/text/trainers.inc:818 Route110_Text_EdwinDefeated (+1 aliases)
	.globl gText_Rom_25B720
gText_Rom_25B720: @ 0x0825B720
	.string "コンプリート したかった……!$"
	.if (. - gText_Rom_25B720) > 0x10
	.error "gText_Rom_25B720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B720) < 0x10
	.space 0x10 - (. - gText_Rom_25B720)
	.endif

	@ data/text/trainers.inc:821 Route110_Text_EdwinPostBattle
	.globl gText_Rom_25B730
gText_Rom_25B730: @ 0x0825B730
	.string "みたことのない ポケモンに であうと\nボクの コレクターだましいが もえるなぁ!$"
	.if (. - gText_Rom_25B730) > 0x29
	.error "gText_Rom_25B730 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B730) < 0x29
	.space 0x29 - (. - gText_Rom_25B730)
	.endif

	@ data/text/trainers.inc:824 Route110_Text_EdwinRegister
	.globl gText_Rom_25B759
gText_Rom_25B759: @ 0x0825B759
	.string "ぼく エントリーコールも\nたくさん あつめたいんだよねぇ$"
	.if (. - gText_Rom_25B759) > 0x1d
	.error "gText_Rom_25B759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B759) < 0x1d
	.space 0x1d - (. - gText_Rom_25B759)
	.endif

	@ data/text/trainers.inc:827 Route110_Text_EdwinRematchIntro (+1 aliases)
	.globl gText_Rom_25B776
gText_Rom_25B776: @ 0x0825B776
	.string "ねえ キミ\nあたらしい ポケモン つかまえた?\pよかったら ポケモン みせてくれない?\nひとめで いいから おねがい!$"
	.if (. - gText_Rom_25B776) > 0x3c
	.error "gText_Rom_25B776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B776) < 0x3c
	.space 0x3c - (. - gText_Rom_25B776)
	.endif

	@ data/text/trainers.inc:830 Route110_Text_EdwinRematchDefeated (+1 aliases)
	.globl gText_Rom_25B7B2
gText_Rom_25B7B2: @ 0x0825B7B2
	.string "キミの ポケモン\nうらやましいな……$"
	.if (. - gText_Rom_25B7B2) > 0x13
	.error "gText_Rom_25B7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7B2) < 0x13
	.space 0x13 - (. - gText_Rom_25B7B2)
	.endif

	@ data/text/trainers.inc:833 Route110_Text_EdwinRematchPostBattle
	.globl gText_Rom_25B7C5
gText_Rom_25B7C5: @ 0x0825B7C5
	.string "ああ! とにかく めずらしい ポケモン\nぜんぶ ボクの ものに したいよー!$"
	.if (. - gText_Rom_25B7C5) > 0x27
	.error "gText_Rom_25B7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7C5) < 0x27
	.space 0x27 - (. - gText_Rom_25B7C5)
	.endif

	@ data/text/trainers.inc:836 Route110_Text_DaleIntro (+1 aliases)
	.globl gText_Rom_25B7EC
gText_Rom_25B7EC: @ 0x0825B7EC
	.string "ええーい!\nうしろから はなしかけるなー!$"
	.if (. - gText_Rom_25B7EC) > 0x16
	.error "gText_Rom_25B7EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7EC) < 0x16
	.space 0x16 - (. - gText_Rom_25B7EC)
	.endif

	@ data/text/trainers.inc:839 Route110_Text_DaleDefeated (+1 aliases)
	.globl gText_Rom_25B802
gText_Rom_25B802: @ 0x0825B802
	.string "まけたっ!\nくやしいっ!!$"
	.if (. - gText_Rom_25B802) > 0xe
	.error "gText_Rom_25B802 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B802) < 0xe
	.space 0xe - (. - gText_Rom_25B802)
	.endif

	@ data/text/trainers.inc:842 Route110_Text_DalePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B810
gText_Rom_25B810: @ 0x0825B810
	.string "すいめんに うかぶ うきを じっと みる……\nしゅうちゅうりょくが たいせつ なんだ$"
	.if (. - gText_Rom_25B810) != 0x2b
	.error "gText_Rom_25B810 must retain its original byte length"
	.endif
	.globl gText_Rom_25B837
	.set gText_Rom_25B837, gText_Rom_25B810 + 0x27

	@ data/text/trainers.inc:845 Route110_Text_IsabelIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B83B
gText_Rom_25B83B: @ 0x0825B83B
	.string "おほほ! だいじな ポケモンを\nじまん するためなら どこにでも いきますわ$"
	.if (. - gText_Rom_25B83B) != 0x27
	.error "gText_Rom_25B83B must retain its original byte length"
	.endif
	.globl gText_Rom_25B85E
	.set gText_Rom_25B85E, gText_Rom_25B83B + 0x23

	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B862
gText_Rom_25B862: @ 0x0825B862
	.string "あら まあ イヤですわ$"
	.if (. - gText_Rom_25B862) != 0xc
	.error "gText_Rom_25B862 must retain its original byte length"
	.endif
	.globl gText_Rom_25B86A
	.set gText_Rom_25B86A, gText_Rom_25B862 + 0x8

	@ data/text/trainers.inc:851 Route110_Text_IsabelPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B86E
gText_Rom_25B86E: @ 0x0825B86E
	.string "しょうぶ させるよりも\nだいすきクラブで じまんして こようかしら$"
	.if (. - gText_Rom_25B86E) != 0x22
	.error "gText_Rom_25B86E must retain its original byte length"
	.endif
	.globl gText_Rom_25B88C
	.set gText_Rom_25B88C, gText_Rom_25B86E + 0x1e

	@ field-script:0x1E91B6 FieldScriptText_25B890
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B890
gText_Rom_25B890: @ 0x0825B890
	.string "わたしの　じまんは　こんなんじゃ\nおわりませんわ！\lなんかいも　つきあって　もらいますわよ！$"
	.if (. - gText_Rom_25B890) != 0x2f
	.error "gText_Rom_25B890 must retain its original byte length"
	.endif
	.globl gText_Rom_25B8BB
	.set gText_Rom_25B8BB, gText_Rom_25B890 + 0x2b

	@ data/text/trainers.inc:857 Route110_Text_IsabelRematchIntro (+1 aliases)
	.globl gText_Rom_25B8BF
gText_Rom_25B8BF: @ 0x0825B8BF
	.string "おほほ! だいじな ポケモンなら\nなんどだって じまん しますわ!$"
	.if (. - gText_Rom_25B8BF) > 0x22
	.error "gText_Rom_25B8BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B8BF) < 0x22
	.space 0x22 - (. - gText_Rom_25B8BF)
	.endif

	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B8E1
gText_Rom_25B8E1: @ 0x0825B8E1
	.string "あら まあ イヤですわ$"
	.if (. - gText_Rom_25B8E1) != 0xc
	.error "gText_Rom_25B8E1 must retain its original byte length"
	.endif
	.globl gText_Rom_25B8E9
	.set gText_Rom_25B8E9, gText_Rom_25B8E1 + 0x8

	@ data/text/trainers.inc:863 Route110_Text_IsabelRematchPostBattle
	.globl gText_Rom_25B8ED
gText_Rom_25B8ED: @ 0x0825B8ED
	.string "ポケモンじまんも やめられないけど\nしょうぶ するのも すきなのよ!$"
	.if (. - gText_Rom_25B8ED) > 0x23
	.error "gText_Rom_25B8ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B8ED) < 0x23
	.space 0x23 - (. - gText_Rom_25B8ED)
	.endif

	@ data/text/trainers.inc:866 Route110_Text_TimmyIntro (+1 aliases)
	.globl gText_Rom_25B910
gText_Rom_25B910: @ 0x0825B910
	.string "この あたりの くさむらで\nかっこいい ポケモン みつけたんだぜ!$"
	.if (. - gText_Rom_25B910) > 0x22
	.error "gText_Rom_25B910 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B910) < 0x22
	.space 0x22 - (. - gText_Rom_25B910)
	.endif

	@ data/text/trainers.inc:869 Route110_Text_TimmyDefeated (+1 aliases)
	.globl gText_Rom_25B932
gText_Rom_25B932: @ 0x0825B932
	.string "かっこいい だけじゃ だめかぁ……$"
	.if (. - gText_Rom_25B932) > 0x12
	.error "gText_Rom_25B932 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B932) < 0x12
	.space 0x12 - (. - gText_Rom_25B932)
	.endif

	@ data/text/trainers.inc:872 Route110_Text_TimmyPostBattle
	.globl gText_Rom_25B944
gText_Rom_25B944: @ 0x0825B944
	.string "つかまえた ばかりの ポケモンじゃ\nうまく たたかえないや!$"
	.if (. - gText_Rom_25B944) > 0x1f
	.error "gText_Rom_25B944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B944) < 0x1f
	.space 0x1f - (. - gText_Rom_25B944)
	.endif

	@ data/text/trainers.inc:875 Route110_Text_AlyssaIntro (+1 aliases)
	.globl gText_Rom_25B963
gText_Rom_25B963: @ 0x0825B963
	.string "サイクリングロード から おちちゃった!\nはずかしい…… しょうぶで まぎらわすわ!$"
	.if (. - gText_Rom_25B963) > 0x2b
	.error "gText_Rom_25B963 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B963) < 0x2b
	.space 0x2b - (. - gText_Rom_25B963)
	.endif

	@ data/text/trainers.inc:878 Route110_Text_AlyssaDefeated (+1 aliases)
	.globl gText_Rom_25B98E
gText_Rom_25B98E: @ 0x0825B98E
	.string "ひぇ まけて しまったわ!$"
	.if (. - gText_Rom_25B98E) > 0xe
	.error "gText_Rom_25B98E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B98E) < 0xe
	.space 0xe - (. - gText_Rom_25B98E)
	.endif

	@ data/text/trainers.inc:881 Route110_Text_AlyssaPostBattle
	.globl gText_Rom_25B99C
gText_Rom_25B99C: @ 0x0825B99C
	.string "おっこちるは まけるはで\nはずかし すぎます! わたし!$"
	.if (. - gText_Rom_25B99C) > 0x1d
	.error "gText_Rom_25B99C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B99C) < 0x1d
	.space 0x1d - (. - gText_Rom_25B99C)
	.endif

	@ data/text/trainers.inc:884 Route110_Text_JosephIntro (+1 aliases)
	.globl gText_Rom_25B9B9
gText_Rom_25B9B9: @ 0x0825B9B9
	.string "よぉぉし とばして いくぜえェ!\nノリの わるいやつは おいてくぜェ!$"
	.if (. - gText_Rom_25B9B9) > 0x24
	.error "gText_Rom_25B9B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9B9) < 0x24
	.space 0x24 - (. - gText_Rom_25B9B9)
	.endif

	@ data/text/trainers.inc:887 Route110_Text_JosephDefeated (+1 aliases)
	.globl gText_Rom_25B9DD
gText_Rom_25B9DD: @ 0x0825B9DD
	.string "ノリが いいね あんた……$"
	.if (. - gText_Rom_25B9DD) > 0xe
	.error "gText_Rom_25B9DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9DD) < 0xe
	.space 0xe - (. - gText_Rom_25B9DD)
	.endif

	@ data/text/trainers.inc:890 Route110_Text_JosephPostBattle
	.globl gText_Rom_25B9EB
gText_Rom_25B9EB: @ 0x0825B9EB
	.string "こんなこと では へこたれないぜェ!\nおれは まけて またひとつ\lいいオトコに なったぜェ!$"
	.if (. - gText_Rom_25B9EB) > 0x2f
	.error "gText_Rom_25B9EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B9EB) < 0x2f
	.space 0x2f - (. - gText_Rom_25B9EB)
	.endif

	@ data/text/trainers.inc:893 Route110_Text_KalebIntro (+1 aliases)
	.globl gText_Rom_25BA1A
gText_Rom_25BA1A: @ 0x0825BA1A
	.string "かわいい ポケモンたちが\nたすけあう ところは かわいいぞーーっ!$"
	.if (. - gText_Rom_25BA1A) > 0x22
	.error "gText_Rom_25BA1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA1A) < 0x22
	.space 0x22 - (. - gText_Rom_25BA1A)
	.endif

	@ data/text/trainers.inc:896 Route110_Text_KalebDefeated (+1 aliases)
	.globl gText_Rom_25BA3C
gText_Rom_25BA3C: @ 0x0825BA3C
	.string "きみは ちも なみだも ないんだな$"
	.if (. - gText_Rom_25BA3C) > 0x12
	.error "gText_Rom_25BA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA3C) < 0x12
	.space 0x12 - (. - gText_Rom_25BA3C)
	.endif

	@ data/text/trainers.inc:899 Route110_Text_KalebPostBattle
	.globl gText_Rom_25BA4E
gText_Rom_25BA4E: @ 0x0825BA4E
	.string "おう よしよし\nよくやったよ かわいい おまえたち$"
	.if (. - gText_Rom_25BA4E) > 0x1a
	.error "gText_Rom_25BA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA4E) < 0x1a
	.space 0x1a - (. - gText_Rom_25BA4E)
	.endif

	@ data/text/trainers.inc:902 Route111_Text_DrewIntro (+1 aliases)
	.globl gText_Rom_25BA68
gText_Rom_25BA68: @ 0x0825BA68
	.string "おっ! ゴーゴーゴーグル にあってるね!\nでも ぼくの ほうが にあってるだろ?\lどっちが にあうか しょうぶだよ!$"
	.if (. - gText_Rom_25BA68) > 0x3b
	.error "gText_Rom_25BA68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA68) < 0x3b
	.space 0x3b - (. - gText_Rom_25BA68)
	.endif

	@ data/text/trainers.inc:905 Route111_Text_DrewDefeat (+1 aliases)
	.globl gText_Rom_25BAA3
gText_Rom_25BAA3: @ 0x0825BAA3
	.string "ゴーゴーゴーグルで まわりが\nよく わからなかったよ$"
	.if (. - gText_Rom_25BAA3) > 0x1b
	.error "gText_Rom_25BAA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BAA3) < 0x1b
	.space 0x1b - (. - gText_Rom_25BAA3)
	.endif

	@ data/text/trainers.inc:908 Route111_Text_DrewPostBattle
	.globl gText_Rom_25BABE
gText_Rom_25BABE: @ 0x0825BABE
	.string "ゴーゴーゴーグルが あると\nさばくの すなあらしも へいき だから\lそれだけで うれしくなるよ!$"
	.if (. - gText_Rom_25BABE) > 0x31
	.error "gText_Rom_25BABE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BABE) < 0x31
	.space 0x31 - (. - gText_Rom_25BABE)
	.endif

	@ data/text/trainers.inc:911 Route111_Text_HeidiIntro (+1 aliases)
	.globl gText_Rom_25BAEF
gText_Rom_25BAEF: @ 0x0825BAEF
	.string "さばくの なかでも ピクニック!\pどんな ところでも トレーナー いるから\nしょうぶも できるもんね!$"
	.if (. - gText_Rom_25BAEF) > 0x34
	.error "gText_Rom_25BAEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BAEF) < 0x34
	.space 0x34 - (. - gText_Rom_25BAEF)
	.endif

	@ data/text/trainers.inc:914 Route111_Text_HeidiDefeat (+1 aliases)
	.globl gText_Rom_25BB23
gText_Rom_25BB23: @ 0x0825BB23
	.string "いやーん いじわるー!$"
	.if (. - gText_Rom_25BB23) > 0xc
	.error "gText_Rom_25BB23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB23) < 0xc
	.space 0xc - (. - gText_Rom_25BB23)
	.endif

	@ data/text/trainers.inc:917 Route111_Text_HeidiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BB2F
gText_Rom_25BB2F: @ 0x0825BB2F
	.string "すなあらしの なかで たたかうなら\nポケモンの たいりょくに きを つけないと\lすぐに きぜつ しちゃうわよ!$"
	.if (. - gText_Rom_25BB2F) != 0x38
	.error "gText_Rom_25BB2F must retain its original byte length"
	.endif
	.globl gText_Rom_25BB63
	.set gText_Rom_25BB63, gText_Rom_25BB2F + 0x34

	@ data/text/trainers.inc:920 Route111_Text_BeauIntro (+1 aliases)
	.globl gText_Rom_25BB67
gText_Rom_25BB67: @ 0x0825BB67
	.string "ゴーゴーゴーグルを つけてると\nなんとなく ヒーローきぶん!\lいまの ぼくなら だれにだって かてるさ!$"
	.if (. - gText_Rom_25BB67) > 0x35
	.error "gText_Rom_25BB67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB67) < 0x35
	.space 0x35 - (. - gText_Rom_25BB67)
	.endif

	@ data/text/trainers.inc:923 Route111_Text_BeauDefeat (+1 aliases)
	.globl gText_Rom_25BB9C
gText_Rom_25BB9C: @ 0x0825BB9C
	.string "きぶん だけじゃ かてないか……$"
	.if (. - gText_Rom_25BB9C) > 0x11
	.error "gText_Rom_25BB9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BB9C) < 0x11
	.space 0x11 - (. - gText_Rom_25BB9C)
	.endif

	@ data/text/trainers.inc:926 Route111_Text_BeauPostBattle
	.globl gText_Rom_25BBAD
gText_Rom_25BBAD: @ 0x0825BBAD
	.string "いつかは ほんものの ヒーローに なる!\nそのために もっと がんばって\lポケモンと じぶんを きたえてみせるよ$"
	.if (. - gText_Rom_25BBAD) > 0x39
	.error "gText_Rom_25BBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BBAD) < 0x39
	.space 0x39 - (. - gText_Rom_25BBAD)
	.endif

	@ data/text/trainers.inc:929 Route111_Text_BeckyIntro (+1 aliases)
	.globl gText_Rom_25BBE6
gText_Rom_25BBE6: @ 0x0825BBE6
	.string "さばくで カセキが みつかるって きいたけど\nどこに あるのかなあ?$"
	.if (. - gText_Rom_25BBE6) > 0x23
	.error "gText_Rom_25BBE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BBE6) < 0x23
	.space 0x23 - (. - gText_Rom_25BBE6)
	.endif

	@ data/text/trainers.inc:932 Route111_Text_BeckyDefeat (+1 aliases)
	.globl gText_Rom_25BC09
gText_Rom_25BC09: @ 0x0825BC09
	.string "いまいち だわ……$"
	.if (. - gText_Rom_25BC09) > 0xa
	.error "gText_Rom_25BC09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC09) < 0xa
	.space 0xa - (. - gText_Rom_25BC09)
	.endif

	@ data/text/trainers.inc:935 Route111_Text_BeckyPostBattle
	.globl gText_Rom_25BC13
gText_Rom_25BC13: @ 0x0825BC13
	.string "さばくで カセキが みつかると いうことは\nむかし ここは うみ だったのね!$"
	.if (. - gText_Rom_25BC13) > 0x28
	.error "gText_Rom_25BC13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC13) < 0x28
	.space 0x28 - (. - gText_Rom_25BC13)
	.endif

	@ data/text/trainers.inc:938 Route111_Text_DustyIntro (+1 aliases)
	.globl gText_Rom_25BC3B
gText_Rom_25BC3B: @ 0x0825BC3B
	.string "いせきを さがして 30ねん!\nそんな わたしと たたかうのかね?$"
	.if (. - gText_Rom_25BC3B) > 0x22
	.error "gText_Rom_25BC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC3B) < 0x22
	.space 0x22 - (. - gText_Rom_25BC3B)
	.endif

	@ data/text/trainers.inc:941 Route111_Text_DustyDefeat (+1 aliases)
	.globl gText_Rom_25BC5D
gText_Rom_25BC5D: @ 0x0825BC5D
	.string "いせきを さがしてるけど\nつよい ポケモンは さがしてないんだ$"
	.if (. - gText_Rom_25BC5D) > 0x20
	.error "gText_Rom_25BC5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC5D) < 0x20
	.space 0x20 - (. - gText_Rom_25BC5D)
	.endif

	@ data/text/trainers.inc:944 Route111_Text_DustyPostBattle
	.globl gText_Rom_25BC7D
gText_Rom_25BC7D: @ 0x0825BC7D
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\nあれ どうだったかな?$"
	.if (. - gText_Rom_25BC7D) > 0x30
	.error "gText_Rom_25BC7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC7D) < 0x30
	.space 0x30 - (. - gText_Rom_25BC7D)
	.endif

	@ data/text/trainers.inc:947 Route111_Text_DustyRegister
	.globl gText_Rom_25BCAD
gText_Rom_25BCAD: @ 0x0825BCAD
	.string "つよい ポケモンは さがしてないけど\nなぜだか ポケナビは おきにいり なんだ!$"
	.if (. - gText_Rom_25BCAD) > 0x29
	.error "gText_Rom_25BCAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BCAD) < 0x29
	.space 0x29 - (. - gText_Rom_25BCAD)
	.endif

	@ data/text/trainers.inc:950 Route111_Text_DustyRematchIntro (+1 aliases)
	.globl gText_Rom_25BCD6
gText_Rom_25BCD6: @ 0x0825BCD6
	.string "いせきを さがして 30ねん!\pいや いせきを さがして 40ねん!\nそんな わたしと たたかうのかね?$"
	.if (. - gText_Rom_25BCD6) > 0x35
	.error "gText_Rom_25BCD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BCD6) < 0x35
	.space 0x35 - (. - gText_Rom_25BCD6)
	.endif

	@ data/text/trainers.inc:953 Route111_Text_DustyRematchDefeat (+1 aliases)
	.globl gText_Rom_25BD0B
gText_Rom_25BD0B: @ 0x0825BD0B
	.string "いせきは みつからない\nつよい ポケモンも みつからない$"
	.if (. - gText_Rom_25BD0B) > 0x1d
	.error "gText_Rom_25BD0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD0B) < 0x1d
	.space 0x1d - (. - gText_Rom_25BD0B)
	.endif

	@ data/text/trainers.inc:956 Route111_Text_DustyPostRematch
	.globl gText_Rom_25BD28
gText_Rom_25BD28: @ 0x0825BD28
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\pうーん 50ねん だった きもする……\nあれ どうだったかな?$"
	.if (. - gText_Rom_25BD28) > 0x44
	.error "gText_Rom_25BD28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD28) < 0x44
	.space 0x44 - (. - gText_Rom_25BD28)
	.endif

	@ data/text/trainers.inc:959 Route111_Text_TravisIntro (+1 aliases)
	.globl gText_Rom_25BD6C
gText_Rom_25BD6C: @ 0x0825BD6C
	.string "ぼくも げんき いっぱい!\nポケモンも げんき いっぱい だよ!$"
	.if (. - gText_Rom_25BD6C) > 0x21
	.error "gText_Rom_25BD6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD6C) < 0x21
	.space 0x21 - (. - gText_Rom_25BD6C)
	.endif

	@ data/text/trainers.inc:962 Route111_Text_TravisDefeat (+1 aliases)
	.globl gText_Rom_25BD8D
gText_Rom_25BD8D: @ 0x0825BD8D
	.string "ポケモンの げんき なくなったよ$"
	.if (. - gText_Rom_25BD8D) > 0x11
	.error "gText_Rom_25BD8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD8D) < 0x11
	.space 0x11 - (. - gText_Rom_25BD8D)
	.endif

	@ data/text/trainers.inc:965 Route111_Text_TravisPostBattle
	.globl gText_Rom_25BD9E
gText_Rom_25BD9E: @ 0x0825BD9E
	.string "げんき いっぱいに はしりまわる\nトレーナーが いると\lつい そっちを みちゃうよね!$"
	.if (. - gText_Rom_25BD9E) > 0x2c
	.error "gText_Rom_25BD9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD9E) < 0x2c
	.space 0x2c - (. - gText_Rom_25BD9E)
	.endif

	@ data/text/trainers.inc:968 Route111_Text_IreneIntro (+1 aliases)
	.globl gText_Rom_25BDCA
gText_Rom_25BDCA: @ 0x0825BDCA
	.string "どこに いくのか しらないけど\nちょっと しょうぶ してみない?$"
	.if (. - gText_Rom_25BDCA) > 0x21
	.error "gText_Rom_25BDCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDCA) < 0x21
	.space 0x21 - (. - gText_Rom_25BDCA)
	.endif

	@ data/text/trainers.inc:971 Route111_Text_IreneDefeat (+1 aliases)
	.globl gText_Rom_25BDEB
gText_Rom_25BDEB: @ 0x0825BDEB
	.string "にくらしいほど つよいのね!$"
	.if (. - gText_Rom_25BDEB) > 0xf
	.error "gText_Rom_25BDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDEB) < 0xf
	.space 0xf - (. - gText_Rom_25BDEB)
	.endif

	@ data/text/trainers.inc:974 Route111_Text_IrenePostBattle
	.globl gText_Rom_25BDFA
gText_Rom_25BDFA: @ 0x0825BDFA
	.string "えんとつやまに いこうかな? って\nおもって いるんだけど\lこのあたりの けしきも いいのよね!$"
	.if (. - gText_Rom_25BDFA) > 0x31
	.error "gText_Rom_25BDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDFA) < 0x31
	.space 0x31 - (. - gText_Rom_25BDFA)
	.endif

	@ data/text/trainers.inc:977 Route111_Text_DaisukeIntro (+1 aliases)
	.globl gText_Rom_25BE2B
gText_Rom_25BE2B: @ 0x0825BE2B
	.string "おのれを きたえるため\nであう にんげん すべてに\lしょうぶを もうしこんでるッス!$"
	.if (. - gText_Rom_25BE2B) > 0x2b
	.error "gText_Rom_25BE2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE2B) < 0x2b
	.space 0x2b - (. - gText_Rom_25BE2B)
	.endif

	@ data/text/trainers.inc:980 Route111_Text_DaisukeDefeat (+1 aliases)
	.globl gText_Rom_25BE56
gText_Rom_25BE56: @ 0x0825BE56
	.string "まいったッス……!$"
	.if (. - gText_Rom_25BE56) > 0xa
	.error "gText_Rom_25BE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE56) < 0xa
	.space 0xa - (. - gText_Rom_25BE56)
	.endif

	@ data/text/trainers.inc:983 Route111_Text_DaisukePostBattle
	.globl gText_Rom_25BE60
gText_Rom_25BE60: @ 0x0825BE60
	.string "おぬしの ように\nつよい トレーナーに かてるまで\lしゅぎょう あるのみッス!$"
	.if (. - gText_Rom_25BE60) > 0x28
	.error "gText_Rom_25BE60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE60) < 0x28
	.space 0x28 - (. - gText_Rom_25BE60)
	.endif

	@ data/text/trainers.inc:986 Route111_Text_WiltonIntro (+1 aliases)
	.globl gText_Rom_25BE88
gText_Rom_25BE88: @ 0x0825BE88
	.string "きみが ポケモンを どこまで\nきたえているか みせて もらおう!$"
	.if (. - gText_Rom_25BE88) > 0x21
	.error "gText_Rom_25BE88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE88) < 0x21
	.space 0x21 - (. - gText_Rom_25BE88)
	.endif

	@ data/text/trainers.inc:989 Route111_Text_WiltonDefeat (+1 aliases)
	.globl gText_Rom_25BEA9
gText_Rom_25BEA9: @ 0x0825BEA9
	.string "なるほど\nかなり きたえてるね!$"
	.if (. - gText_Rom_25BEA9) > 0x11
	.error "gText_Rom_25BEA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BEA9) < 0x11
	.space 0x11 - (. - gText_Rom_25BEA9)
	.endif

	@ data/text/trainers.inc:992 Route111_Text_WiltonPostBattle
	.globl gText_Rom_25BEBA
gText_Rom_25BEBA: @ 0x0825BEBA
	.string "ポケモンも トレーナーも\nたたかうことで いろんなことを まなぶ!\pだいじ なのは\nまけても あきらめないことさ!$"
	.if (. - gText_Rom_25BEBA) > 0x3a
	.error "gText_Rom_25BEBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BEBA) < 0x3a
	.space 0x3a - (. - gText_Rom_25BEBA)
	.endif

	@ data/text/trainers.inc:995 Route111_Text_WiltonRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BEF4
gText_Rom_25BEF4: @ 0x0825BEF4
	.string "きみの きたえかた さんこうに なるな!\nきが むいたら さいど たたかってほしい$"
	.if (. - gText_Rom_25BEF4) != 0x2a
	.error "gText_Rom_25BEF4 must retain its original byte length"
	.endif
	.globl gText_Rom_25BF1A
	.set gText_Rom_25BF1A, gText_Rom_25BEF4 + 0x26

	@ data/text/trainers.inc:998 Route111_Text_WiltonRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BF1E
gText_Rom_25BF1E: @ 0x0825BF1E
	.string "ぼくたちは さらなる たかみを めざして\nここで ポケモンを きたえている\lきみも いっしょに しゅぎょう しよう!$"
	.if (. - gText_Rom_25BF1E) != 0x3b
	.error "gText_Rom_25BF1E must retain its original byte length"
	.endif
	.globl gText_Rom_25BF54
	.set gText_Rom_25BF54, gText_Rom_25BF1E + 0x36

	@ data/text/trainers.inc:1001 Route111_Text_WiltonRematchDefeat (+1 aliases)
	.globl gText_Rom_25BF59
gText_Rom_25BF59: @ 0x0825BF59
	.string "なかなか やるな!$"
	.if (. - gText_Rom_25BF59) > 0xa
	.error "gText_Rom_25BF59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF59) < 0xa
	.space 0xa - (. - gText_Rom_25BF59)
	.endif

	@ data/text/trainers.inc:1004 Route111_Text_WiltonPostRematch
	.globl gText_Rom_25BF63
gText_Rom_25BF63: @ 0x0825BF63
	.string "そんなに つよいなら\nポケモンリーグを めざすと いいよ!$"
	.if (. - gText_Rom_25BF63) > 0x1e
	.error "gText_Rom_25BF63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF63) < 0x1e
	.space 0x1e - (. - gText_Rom_25BF63)
	.endif

	@ data/text/trainers.inc:1007 Route111_Text_BrookeIntro (+1 aliases)
	.globl gText_Rom_25BF81
gText_Rom_25BF81: @ 0x0825BF81
	.string "あら あなたの ポケモン\nかなり つよそうだわ!\lぜひ おてあわせ してくれない?$"
	.if (. - gText_Rom_25BF81) > 0x2a
	.error "gText_Rom_25BF81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF81) < 0x2a
	.space 0x2a - (. - gText_Rom_25BF81)
	.endif

	@ data/text/trainers.inc:1010 Route111_Text_BrookeDefeat (+1 aliases)
	.globl gText_Rom_25BFAB
gText_Rom_25BFAB: @ 0x0825BFAB
	.string "つよそう じゃなくて\nつよいのね!$"
	.if (. - gText_Rom_25BFAB) > 0x12
	.error "gText_Rom_25BFAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFAB) < 0x12
	.space 0x12 - (. - gText_Rom_25BFAB)
	.endif

	@ data/text/trainers.inc:1013 Route111_Text_BrookePostBattle
	.globl gText_Rom_25BFBD
gText_Rom_25BFBD: @ 0x0825BFBD
	.string "あたしも がんばって\nポケモン そだてた つもりだけど\lまだ やること いっぱい あるわね!$"
	.if (. - gText_Rom_25BFBD) > 0x2f
	.error "gText_Rom_25BFBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFBD) < 0x2f
	.space 0x2f - (. - gText_Rom_25BFBD)
	.endif

	@ data/text/trainers.inc:1016 Route111_Text_BrookeRegister
	.globl gText_Rom_25BFEC
gText_Rom_25BFEC: @ 0x0825BFEC
	.string "あなた みたいな つよいひとと\nおともだちに なりたいわ!$"
	.if (. - gText_Rom_25BFEC) > 0x1e
	.error "gText_Rom_25BFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFEC) < 0x1e
	.space 0x1e - (. - gText_Rom_25BFEC)
	.endif

	@ data/text/trainers.inc:1019 Route111_Text_BrookeRematchIntro (+1 aliases)
	.globl gText_Rom_25C00A
gText_Rom_25C00A: @ 0x0825C00A
	.string "ポケモンは つかう わざによって\nつよくなったり よわくなったりも するわ!\pあなたの ポケモン\nどんな わざを おぼえているの?$"
	.if (. - gText_Rom_25C00A) > 0x42
	.error "gText_Rom_25C00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C00A) < 0x42
	.space 0x42 - (. - gText_Rom_25C00A)
	.endif

	@ data/text/trainers.inc:1022 Route111_Text_BrookeRematchDefeat (+1 aliases)
	.globl gText_Rom_25C04C
gText_Rom_25C04C: @ 0x0825C04C
	.string "いい わざを おぼえているのね!$"
	.if (. - gText_Rom_25C04C) > 0x11
	.error "gText_Rom_25C04C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C04C) < 0x11
	.space 0x11 - (. - gText_Rom_25C04C)
	.endif

	@ data/text/trainers.inc:1025 Route111_Text_BrookePostRematch
	.globl gText_Rom_25C05D
gText_Rom_25C05D: @ 0x0825C05D
	.string "あたしの ポケモン しんか させずに\nさきに わざを おぼえさせてから\lそだてた ほうが よかったかな?$"
	.if (. - gText_Rom_25C05D) > 0x35
	.error "gText_Rom_25C05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C05D) < 0x35
	.space 0x35 - (. - gText_Rom_25C05D)
	.endif

	@ data/text/trainers.inc:1028 Route111_Text_CeliaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C092
gText_Rom_25C092: @ 0x0825C092
	.string "こんな ところで\nピクニックを するんじゃ なかった!$"
	.if (. - gText_Rom_25C092) != 0x1c
	.error "gText_Rom_25C092 must retain its original byte length"
	.endif
	.globl gText_Rom_25C0A9
	.set gText_Rom_25C0A9, gText_Rom_25C092 + 0x17

	@ data/text/trainers.inc:1031 Route111_Text_CeliaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C0AE
gText_Rom_25C0AE: @ 0x0825C0AE
	.string "もー\nほんとに くるんじゃ なかった!$"
	.if (. - gText_Rom_25C0AE) != 0x14
	.error "gText_Rom_25C0AE must retain its original byte length"
	.endif
	.globl gText_Rom_25C0BD
	.set gText_Rom_25C0BD, gText_Rom_25C0AE + 0xf

	@ data/text/trainers.inc:1034 Route111_Text_CeliaPostBattle
	.globl gText_Rom_25C0C2
gText_Rom_25C0C2: @ 0x0825C0C2
	.string "この すなあらし じゃ\nゴーゴーゴーグルを つけて いても\lおべんとうが ひろげられないんだもん……$"
	.if (. - gText_Rom_25C0C2) > 0x33
	.error "gText_Rom_25C0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C0C2) < 0x33
	.space 0x33 - (. - gText_Rom_25C0C2)
	.endif

	@ data/text/trainers.inc:1037 Route111_Text_BryanIntro (+1 aliases)
	.globl gText_Rom_25C0F5
gText_Rom_25C0F5: @ 0x0825C0F5
	.string "きみの つよさは どのくらいか?\nその ナゾを ときあかそう!$"
	.if (. - gText_Rom_25C0F5) > 0x20
	.error "gText_Rom_25C0F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C0F5) < 0x20
	.space 0x20 - (. - gText_Rom_25C0F5)
	.endif

	@ data/text/trainers.inc:1040 Route111_Text_BryanDefeat (+1 aliases)
	.globl gText_Rom_25C115
gText_Rom_25C115: @ 0x0825C115
	.string "おお そのつよさ\nナゾに みちておる!$"
	.if (. - gText_Rom_25C115) > 0x14
	.error "gText_Rom_25C115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C115) < 0x14
	.space 0x14 - (. - gText_Rom_25C115)
	.endif

	@ data/text/trainers.inc:1043 Route111_Text_BryanPostBattle
	.globl gText_Rom_25C129
gText_Rom_25C129: @ 0x0825C129
	.string "この さばくには\nナゾが おおい ですぞーっ!$"
	.if (. - gText_Rom_25C129) > 0x18
	.error "gText_Rom_25C129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C129) < 0x18
	.space 0x18 - (. - gText_Rom_25C129)
	.endif

	@ data/text/trainers.inc:1046 Route111_Text_BrandenIntro (+1 aliases)
	.globl gText_Rom_25C141
gText_Rom_25C141: @ 0x0825C141
	.string "ぼくに まけて くれたら\nサンドイッチ わけて あげるよ!$"
	.if (. - gText_Rom_25C141) > 0x1e
	.error "gText_Rom_25C141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C141) < 0x1e
	.space 0x1e - (. - gText_Rom_25C141)
	.endif

	@ data/text/trainers.inc:1049 Route111_Text_BrandenDefeat (+1 aliases)
	.globl gText_Rom_25C15F
gText_Rom_25C15F: @ 0x0825C15F
	.string "ちぇっ!\nサンドイッチに つられると おもったのに$"
	.if (. - gText_Rom_25C15F) > 0x1a
	.error "gText_Rom_25C15F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C15F) < 0x1a
	.space 0x1a - (. - gText_Rom_25C15F)
	.endif

	@ data/text/trainers.inc:1052 Route111_Text_BrandenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C179
gText_Rom_25C179: @ 0x0825C179
	.string "ぼくの サンドも\nサンドイッチ だいすき なんだ$"
	.if (. - gText_Rom_25C179) != 0x19
	.error "gText_Rom_25C179 must retain its original byte length"
	.endif
	.globl gText_Rom_25C18E
	.set gText_Rom_25C18E, gText_Rom_25C179 + 0x15

	@ data/text/trainers.inc:1055 Route111_Text_TyronIntro (+1 aliases)
	.globl gText_Rom_25C192
gText_Rom_25C192: @ 0x0825C192
	.string "ぼくは こんな ポケモンが すきなんだ!$"
	.if (. - gText_Rom_25C192) > 0x15
	.error "gText_Rom_25C192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C192) < 0x15
	.space 0x15 - (. - gText_Rom_25C192)
	.endif

	@ data/text/trainers.inc:1058 Route111_Text_TyronDefeat (+1 aliases)
	.globl gText_Rom_25C1A7
gText_Rom_25C1A7: @ 0x0825C1A7
	.string "ちょっと! ぼくの ポケモン\nちゃんと みてくれてた!?$"
	.if (. - gText_Rom_25C1A7) > 0x1d
	.error "gText_Rom_25C1A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1A7) < 0x1d
	.space 0x1d - (. - gText_Rom_25C1A7)
	.endif

	@ data/text/trainers.inc:1061 Route111_Text_TyronPostBattle
	.globl gText_Rom_25C1C4
gText_Rom_25C1C4: @ 0x0825C1C4
	.string "しょうぶを する ときって\nじぶんの ポケモンを みせびらかす\lたのしみが ゼッタイ あるよねー$"
	.if (. - gText_Rom_25C1C4) > 0x31
	.error "gText_Rom_25C1C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1C4) < 0x31
	.space 0x31 - (. - gText_Rom_25C1C4)
	.endif

	@ data/text/trainers.inc:1064 Route111_Text_CelinaIntro (+1 aliases)
	.globl gText_Rom_25C1F5
gText_Rom_25C1F5: @ 0x0825C1F5
	.string "うふん……\nわたくしを ドキドキ させてね!$"
	.if (. - gText_Rom_25C1F5) > 0x17
	.error "gText_Rom_25C1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C1F5) < 0x17
	.space 0x17 - (. - gText_Rom_25C1F5)
	.endif

	@ data/text/trainers.inc:1067 Route111_Text_CelinaDefeat (+1 aliases)
	.globl gText_Rom_25C20C
gText_Rom_25C20C: @ 0x0825C20C
	.string "す ……ごい\nなんて つよいの$"
	.if (. - gText_Rom_25C20C) > 0x10
	.error "gText_Rom_25C20C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C20C) < 0x10
	.space 0x10 - (. - gText_Rom_25C20C)
	.endif

	@ data/text/trainers.inc:1070 Route111_Text_CelinaPostBattle
	.globl gText_Rom_25C21C
gText_Rom_25C21C: @ 0x0825C21C
	.string "ま まだ ドキドキ しているわ\nあなたって…… ステキな トレーナーね$"
	.if (. - gText_Rom_25C21C) > 0x24
	.error "gText_Rom_25C21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C21C) < 0x24
	.space 0x24 - (. - gText_Rom_25C21C)
	.endif

	@ data/text/trainers.inc:1073 Route111_Text_HaydenIntro (+1 aliases)
	.globl gText_Rom_25C240
gText_Rom_25C240: @ 0x0825C240
	.string "おいらは いま はらが へっている\nだから ようしゃは しないぞ!$"
	.if (. - gText_Rom_25C240) > 0x22
	.error "gText_Rom_25C240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C240) < 0x22
	.space 0x22 - (. - gText_Rom_25C240)
	.endif

	@ data/text/trainers.inc:1076 Route111_Text_HaydenDefeat (+1 aliases)
	.globl gText_Rom_25C262
gText_Rom_25C262: @ 0x0825C262
	.string "ぐうぅ……$"
	.if (. - gText_Rom_25C262) > 0x6
	.error "gText_Rom_25C262 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C262) < 0x6
	.space 0x6 - (. - gText_Rom_25C262)
	.endif

	@ data/text/trainers.inc:1079 Route111_Text_HaydenPostBattle
	.globl gText_Rom_25C268
gText_Rom_25C268: @ 0x0825C268
	.string "はらが なった!\nきのみでも やいて たべようかナ?$"
	.if (. - gText_Rom_25C268) > 0x1b
	.error "gText_Rom_25C268 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C268) < 0x1b
	.space 0x1b - (. - gText_Rom_25C268)
	.endif

	@ data/text/trainers.inc:1082 Route111_Text_BiancaIntro (+1 aliases)
	.globl gText_Rom_25C283
gText_Rom_25C283: @ 0x0825C283
	.string "あなたは キンセツの ほうから きたの?\nじゃ たいりょくも バッチリね!$"
	.if (. - gText_Rom_25C283) > 0x26
	.error "gText_Rom_25C283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C283) < 0x26
	.space 0x26 - (. - gText_Rom_25C283)
	.endif

	@ data/text/trainers.inc:1085 Route111_Text_BiancaDefeat (+1 aliases)
	.globl gText_Rom_25C2A9
gText_Rom_25C2A9: @ 0x0825C2A9
	.string "あらら すごいんだー$"
	.if (. - gText_Rom_25C2A9) > 0xb
	.error "gText_Rom_25C2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C2A9) < 0xb
	.space 0xb - (. - gText_Rom_25C2A9)
	.endif

	@ data/text/trainers.inc:1088 Route111_Text_BiancaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2B4
gText_Rom_25C2B4: @ 0x0825C2B4
	.string "この さきの みちのりは\nけっこう ながいわよ!$"
	.if (. - gText_Rom_25C2B4) != 0x19
	.error "gText_Rom_25C2B4 must retain its original byte length"
	.endif
	.globl gText_Rom_25C2C9
	.set gText_Rom_25C2C9, gText_Rom_25C2B4 + 0x15

	@ data/text/trainers.inc:1091 Route112_Text_BriceIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2CD
gText_Rom_25C2CD: @ 0x0825C2CD
	.string "わっはっはっ!\nどうだ?\lオレと しょうぶ しないか?\lわっはっはっ!$"
	.if (. - gText_Rom_25C2CD) != 0x24
	.error "gText_Rom_25C2CD must retain its original byte length"
	.endif
	.globl gText_Rom_25C2ED
	.set gText_Rom_25C2ED, gText_Rom_25C2CD + 0x20

	@ data/text/trainers.inc:1094 Route112_Text_BriceDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2F1
gText_Rom_25C2F1: @ 0x0825C2F1
	.string "まけた……\nわっはっはっ!$"
	.if (. - gText_Rom_25C2F1) != 0xe
	.error "gText_Rom_25C2F1 must retain its original byte length"
	.endif
	.globl gText_Rom_25C2FB
	.set gText_Rom_25C2FB, gText_Rom_25C2F1 + 0xa

	@ data/text/trainers.inc:1097 Route112_Text_BricePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2FF
gText_Rom_25C2FF: @ 0x0825C2FF
	.string "いろあざやかな キノコを たべたら……\nわ わらいが とまらない!\lわっはっはっ!$"
	.if (. - gText_Rom_25C2FF) != 0x2a
	.error "gText_Rom_25C2FF must retain its original byte length"
	.endif
	.globl gText_Rom_25C325
	.set gText_Rom_25C325, gText_Rom_25C2FF + 0x26

	@ data/text/trainers.inc:1100 Route112_Text_TrentIntro (+1 aliases)
	.globl gText_Rom_25C329
gText_Rom_25C329: @ 0x0825C329
	.string "やまのぼりで きたえた オレの あしこし\nちょっとや そっとじゃ くじけないぜ!$"
	.if (. - gText_Rom_25C329) > 0x29
	.error "gText_Rom_25C329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C329) < 0x29
	.space 0x29 - (. - gText_Rom_25C329)
	.endif

	@ data/text/trainers.inc:1103 Route112_Text_TrentDefeat (+1 aliases)
	.globl gText_Rom_25C352
gText_Rom_25C352: @ 0x0825C352
	.string "あ……\nあしが つった……$"
	.if (. - gText_Rom_25C352) > 0xe
	.error "gText_Rom_25C352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C352) < 0xe
	.space 0xe - (. - gText_Rom_25C352)
	.endif

	@ data/text/trainers.inc:1106 Route112_Text_TrentPostBattle
	.globl gText_Rom_25C360
gText_Rom_25C360: @ 0x0825C360
	.string "なんじゅっキロも ある にもつを せおって\nやまみちを あるき つづけるんだ\lからだが じょうぶに なるぞ!$"
	.if (. - gText_Rom_25C360) > 0x37
	.error "gText_Rom_25C360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C360) < 0x37
	.space 0x37 - (. - gText_Rom_25C360)
	.endif

	@ data/text/trainers.inc:1109 Route112_Text_TrentRegister
	.globl gText_Rom_25C397
gText_Rom_25C397: @ 0x0825C397
	.string "つった あしが いたい……\nちょっと オレの リュックから\lほうたいを だしてくれ\pって ちがうよ それは ポケナビだろ!\nもういいよ とうろく するから$"
	.if (. - gText_Rom_25C397) > 0x4e
	.error "gText_Rom_25C397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C397) < 0x4e
	.space 0x4e - (. - gText_Rom_25C397)
	.endif

	@ data/text/trainers.inc:1112 Route112_Text_TrentRematchIntro (+1 aliases)
	.globl gText_Rom_25C3E5
gText_Rom_25C3E5: @ 0x0825C3E5
	.string "やまのぼりで きたえてるからな\nかなり パワフルだぞ!$"
	.if (. - gText_Rom_25C3E5) > 0x1c
	.error "gText_Rom_25C3E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C3E5) < 0x1c
	.space 0x1c - (. - gText_Rom_25C3E5)
	.endif

	@ data/text/trainers.inc:1115 Route112_Text_TrentRematchDefeat (+1 aliases)
	.globl gText_Rom_25C401
gText_Rom_25C401: @ 0x0825C401
	.string "パワーで まけたか?$"
	.if (. - gText_Rom_25C401) > 0xb
	.error "gText_Rom_25C401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C401) < 0xb
	.space 0xb - (. - gText_Rom_25C401)
	.endif

	@ data/text/trainers.inc:1118 Route112_Text_TrentRematchPostBattle
	.globl gText_Rom_25C40C
gText_Rom_25C40C: @ 0x0825C40C
	.string "えんとつやまの うえには\nすごい トレーナーが いるらしいぞ!\lこんど しょうぶに いくつもりだ!$"
	.if (. - gText_Rom_25C40C) > 0x32
	.error "gText_Rom_25C40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C40C) < 0x32
	.space 0x32 - (. - gText_Rom_25C40C)
	.endif

	@ data/text/trainers.inc:1121 Route112_Text_LarryIntro (+1 aliases)
	.globl gText_Rom_25C43E
gText_Rom_25C43E: @ 0x0825C43E
	.string "ぼくは つよいんだ……\nまけても ないたり しないぞ……!$"
	.if (. - gText_Rom_25C43E) > 0x1e
	.error "gText_Rom_25C43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C43E) < 0x1e
	.space 0x1e - (. - gText_Rom_25C43E)
	.endif

	@ data/text/trainers.inc:1124 Route112_Text_LarryDefeat (+1 aliases)
	.globl gText_Rom_25C45C
gText_Rom_25C45C: @ 0x0825C45C
	.string "うわーーーん!$"
	.if (. - gText_Rom_25C45C) > 0x8
	.error "gText_Rom_25C45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C45C) < 0x8
	.space 0x8 - (. - gText_Rom_25C45C)
	.endif

	@ data/text/trainers.inc:1127 Route112_Text_LarryPostBattle
	.globl gText_Rom_25C464
gText_Rom_25C464: @ 0x0825C464
	.string "おかあさんに あえなくて\nさみしいから ないてるんじゃ ないよ!\lぐすん……$"
	.if (. - gText_Rom_25C464) > 0x27
	.error "gText_Rom_25C464 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C464) < 0x27
	.space 0x27 - (. - gText_Rom_25C464)
	.endif

	@ data/text/trainers.inc:1130 Route112_Text_CarolIntro (+1 aliases)
	.globl gText_Rom_25C48B
gText_Rom_25C48B: @ 0x0825C48B
	.string "ピクニックと いえば うた!\nさあ いっしょに うたいましょ!$"
	.if (. - gText_Rom_25C48B) > 0x20
	.error "gText_Rom_25C48B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C48B) < 0x20
	.space 0x20 - (. - gText_Rom_25C48B)
	.endif

	@ data/text/trainers.inc:1133 Route112_Text_CarolDefeat (+1 aliases)
	.globl gText_Rom_25C4AB
gText_Rom_25C4AB: @ 0x0825C4AB
	.string "こんなに つよいなんて……!$"
	.if (. - gText_Rom_25C4AB) > 0xf
	.error "gText_Rom_25C4AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4AB) < 0xf
	.space 0xf - (. - gText_Rom_25C4AB)
	.endif

	@ data/text/trainers.inc:1136 Route112_Text_CarolPostBattle
	.globl gText_Rom_25C4BA
gText_Rom_25C4BA: @ 0x0825C4BA
	.string "うたも ポケモンしょうぶも\nうまい へた なんて かんけい ないよ!\lたのしんだ ほうが かち なのよ!$"
	.if (. - gText_Rom_25C4BA) > 0x35
	.error "gText_Rom_25C4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4BA) < 0x35
	.space 0x35 - (. - gText_Rom_25C4BA)
	.endif

	@ data/text/trainers.inc:1139 Route112_Text_BryantIntro (+1 aliases)
	.globl gText_Rom_25C4EF
gText_Rom_25C4EF: @ 0x0825C4EF
	.string "ほのおの ぬけみちで つかまえた\nホカホカの ポケモン みせてやろー!$"
	.if (. - gText_Rom_25C4EF) > 0x24
	.error "gText_Rom_25C4EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C4EF) < 0x24
	.space 0x24 - (. - gText_Rom_25C4EF)
	.endif

	@ data/text/trainers.inc:1142 Route112_Text_BryantDefeat (+1 aliases)
	.globl gText_Rom_25C513
gText_Rom_25C513: @ 0x0825C513
	.string "おお ボコボコだ$"
	.if (. - gText_Rom_25C513) > 0x9
	.error "gText_Rom_25C513 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C513) < 0x9
	.space 0x9 - (. - gText_Rom_25C513)
	.endif

	@ data/text/trainers.inc:1145 Route112_Text_BryantPostBattle
	.globl gText_Rom_25C51C
gText_Rom_25C51C: @ 0x0825C51C
	.string "ナカナカ すてきな\nたたかいかたじゃ ないか きみぃ!$"
	.if (. - gText_Rom_25C51C) > 0x1c
	.error "gText_Rom_25C51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C51C) < 0x1c
	.space 0x1c - (. - gText_Rom_25C51C)
	.endif

	@ data/text/trainers.inc:1148 Route112_Text_ShaylaIntro (+1 aliases)
	.globl gText_Rom_25C538
gText_Rom_25C538: @ 0x0825C538
	.string "アラ! すてきな トレーナーさん\nロマンチックな しょうぶを おねがいね!\lマアマア つよいわよ わたし!$"
	.if (. - gText_Rom_25C538) > 0x36
	.error "gText_Rom_25C538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C538) < 0x36
	.space 0x36 - (. - gText_Rom_25C538)
	.endif

	@ data/text/trainers.inc:1151 Route112_Text_ShaylaDefeat (+1 aliases)
	.globl gText_Rom_25C56E
gText_Rom_25C56E: @ 0x0825C56E
	.string "なんて つよいのかしら\nおねえさん おどろいちゃった!$"
	.if (. - gText_Rom_25C56E) > 0x1c
	.error "gText_Rom_25C56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C56E) < 0x1c
	.space 0x1c - (. - gText_Rom_25C56E)
	.endif

	@ data/text/trainers.inc:1154 Route112_Text_ShaylaPostBattle
	.globl gText_Rom_25C58A
gText_Rom_25C58A: @ 0x0825C58A
	.string "ねえ いま いそがしいの?\nえっと もし よかったら\lさっそく 2かいせん と おもって……\lん? いそがしいなら いいわ$"
	.if (. - gText_Rom_25C58A) > 0x3e
	.error "gText_Rom_25C58A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C58A) < 0x3e
	.space 0x3e - (. - gText_Rom_25C58A)
	.endif

	@ data/text/trainers.inc:1157 Route113_Text_JaylenIntro (+1 aliases)
	.globl gText_Rom_25C5C8
gText_Rom_25C5C8: @ 0x0825C5C8
	.string "この あたりが わりと すずしいの\nなんでか しってるかい?$"
	.if (. - gText_Rom_25C5C8) > 0x1f
	.error "gText_Rom_25C5C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C5C8) < 0x1f
	.space 0x1f - (. - gText_Rom_25C5C8)
	.endif

	@ data/text/trainers.inc:1160 Route113_Text_JaylenDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C5E7
gText_Rom_25C5E7: @ 0x0825C5E7
	.string "ぴゅーっ!\nまけたーっ!$"
	.if (. - gText_Rom_25C5E7) != 0xd
	.error "gText_Rom_25C5E7 must retain its original byte length"
	.endif
	.globl gText_Rom_25C5ED
	.set gText_Rom_25C5ED, gText_Rom_25C5E7 + 0x6

	@ data/text/trainers.inc:1163 Route113_Text_JaylenPostBattle
	.globl gText_Rom_25C5F4
gText_Rom_25C5F4: @ 0x0825C5F4
	.string "かざんばいが たいようの ひかりを\nさえぎってるから ひえるんだね!\lあつがりの オレには たすかるよ!$"
	.if (. - gText_Rom_25C5F4) > 0x35
	.error "gText_Rom_25C5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C5F4) < 0x35
	.space 0x35 - (. - gText_Rom_25C5F4)
	.endif

	@ data/text/trainers.inc:1166 Route113_Text_DillonIntro (+1 aliases)
	.globl gText_Rom_25C629
gText_Rom_25C629: @ 0x0825C629
	.string "やまの ふんかは\nちきゅうが いきている しょうこ!$"
	.if (. - gText_Rom_25C629) > 0x1b
	.error "gText_Rom_25C629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C629) < 0x1b
	.space 0x1b - (. - gText_Rom_25C629)
	.endif

	@ data/text/trainers.inc:1169 Route113_Text_DillonDefeat (+1 aliases)
	.globl gText_Rom_25C644
gText_Rom_25C644: @ 0x0825C644
	.string "つよいな おまえーっ!$"
	.if (. - gText_Rom_25C644) > 0xc
	.error "gText_Rom_25C644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C644) < 0xc
	.space 0xc - (. - gText_Rom_25C644)
	.endif

	@ data/text/trainers.inc:1172 Route113_Text_DillonPostBattle
	.globl gText_Rom_25C650
gText_Rom_25C650: @ 0x0825C650
	.string "ごほ がへっ!\nはいが はいに はいった……\pうけなかった……\nさむい…… ブルブル……$"
	.if (. - gText_Rom_25C650) > 0x2d
	.error "gText_Rom_25C650 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C650) < 0x2d
	.space 0x2d - (. - gText_Rom_25C650)
	.endif

	@ data/text/trainers.inc:1175 Route113_Text_MadelineIntro (+1 aliases)
	.globl gText_Rom_25C67D
gText_Rom_25C67D: @ 0x0825C67D
	.string "あたしの ドンメルちゃんに\nかざんばいが かからないように\lパラソルを さしているの$"
	.if (. - gText_Rom_25C67D) > 0x2b
	.error "gText_Rom_25C67D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C67D) < 0x2b
	.space 0x2b - (. - gText_Rom_25C67D)
	.endif

	@ data/text/trainers.inc:1178 Route113_Text_MadelineDefeat (+1 aliases)
	.globl gText_Rom_25C6A8
gText_Rom_25C6A8: @ 0x0825C6A8
	.string "はあ はあ……\nつかれましたわ……$"
	.if (. - gText_Rom_25C6A8) > 0x12
	.error "gText_Rom_25C6A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6A8) < 0x12
	.space 0x12 - (. - gText_Rom_25C6A8)
	.endif

	@ data/text/trainers.inc:1181 Route113_Text_MadelinePostBattle
	.globl gText_Rom_25C6BA
gText_Rom_25C6BA: @ 0x0825C6BA
	.string "とても おつよいのね\nおねえさん かんしん しちゃったわ$"
	.if (. - gText_Rom_25C6BA) > 0x1d
	.error "gText_Rom_25C6BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6BA) < 0x1d
	.space 0x1d - (. - gText_Rom_25C6BA)
	.endif

	@ data/text/trainers.inc:1184 Route113_Text_MadelineRegister
	.globl gText_Rom_25C6D7
gText_Rom_25C6D7: @ 0x0825C6D7
	.string "ね ちょっと パラソルに はいって\nポケナビを とうろく していって!$"
	.if (. - gText_Rom_25C6D7) > 0x24
	.error "gText_Rom_25C6D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6D7) < 0x24
	.space 0x24 - (. - gText_Rom_25C6D7)
	.endif

	@ data/text/trainers.inc:1187 Route113_Text_MadelineRematchIntro (+1 aliases)
	.globl gText_Rom_25C6FB
gText_Rom_25C6FB: @ 0x0825C6FB
	.string "おひさしぶりね\nよろしかったら しょうぶ しません?$"
	.if (. - gText_Rom_25C6FB) > 0x1b
	.error "gText_Rom_25C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6FB) < 0x1b
	.space 0x1b - (. - gText_Rom_25C6FB)
	.endif

	@ data/text/trainers.inc:1190 Route113_Text_MadelineRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C716
gText_Rom_25C716: @ 0x0825C716
	.string "おみごと ですわ$"
	.if (. - gText_Rom_25C716) != 0x9
	.error "gText_Rom_25C716 must retain its original byte length"
	.endif
	.globl gText_Rom_25C71B
	.set gText_Rom_25C71B, gText_Rom_25C716 + 0x5

	@ data/text/trainers.inc:1193 Route113_Text_MadelinePostRematch
	.globl gText_Rom_25C71F
gText_Rom_25C71F: @ 0x0825C71F
	.string "あいかわらず おつよいのね\nおねえさん かんしん しちゃったわ$"
	.if (. - gText_Rom_25C71F) > 0x20
	.error "gText_Rom_25C71F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C71F) < 0x20
	.space 0x20 - (. - gText_Rom_25C71F)
	.endif

	@ data/text/trainers.inc:1196 Route113_Text_LaoIntro (+1 aliases)
	.globl gText_Rom_25C73F
gText_Rom_25C73F: @ 0x0825C73F
	.string "はいの なかから ドロロンッ!!\nしょうぶで ござる!$"
	.if (. - gText_Rom_25C73F) > 0x1c
	.error "gText_Rom_25C73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C73F) < 0x1c
	.space 0x1c - (. - gText_Rom_25C73F)
	.endif

	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C75B
gText_Rom_25C75B: @ 0x0825C75B
	.string "まいったで ござる$"
	.if (. - gText_Rom_25C75B) > 0xa
	.error "gText_Rom_25C75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C75B) < 0xa
	.space 0xa - (. - gText_Rom_25C75B)
	.endif

	@ data/text/trainers.inc:1202 Route113_Text_LaoPostBattle
	.globl gText_Rom_25C765
gText_Rom_25C765: @ 0x0825C765
	.string "もっと かくれかたを けんきゅう しよう\nそれでは しつれいするで ござる$"
	.if (. - gText_Rom_25C765) > 0x26
	.error "gText_Rom_25C765 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C765) < 0x26
	.space 0x26 - (. - gText_Rom_25C765)
	.endif

	@ data/text/trainers.inc:1205 Route113_Text_LaoRegister
	.globl gText_Rom_25C78B
gText_Rom_25C78B: @ 0x0825C78B
	.string "やあ! にんぽう\nポケナビ とうろくのじゅつで ござる!$"
	.if (. - gText_Rom_25C78B) > 0x1d
	.error "gText_Rom_25C78B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C78B) < 0x1d
	.space 0x1d - (. - gText_Rom_25C78B)
	.endif

	@ data/text/trainers.inc:1208 Route113_Text_LaoRematchIntro (+1 aliases)
	.globl gText_Rom_25C7A8
gText_Rom_25C7A8: @ 0x0825C7A8
	.string "はいの なかから ドロロロンッ!!\nしょうぶで ござる!$"
	.if (. - gText_Rom_25C7A8) > 0x1d
	.error "gText_Rom_25C7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7A8) < 0x1d
	.space 0x1d - (. - gText_Rom_25C7A8)
	.endif

	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C7C5
gText_Rom_25C7C5: @ 0x0825C7C5
	.string "まいったで ござる$"
	.if (. - gText_Rom_25C7C5) > 0xa
	.error "gText_Rom_25C7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7C5) < 0xa
	.space 0xa - (. - gText_Rom_25C7C5)
	.endif

	@ data/text/trainers.inc:1214 Route113_Text_LaoPostRematch
	.globl gText_Rom_25C7CF
gText_Rom_25C7CF: @ 0x0825C7CF
	.string "かくれかたは よかったが\nしょうぶが いまいち だった……\pそれでは しつれいするで ござる$"
	.if (. - gText_Rom_25C7CF) > 0x2f
	.error "gText_Rom_25C7CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7CF) < 0x2f
	.space 0x2f - (. - gText_Rom_25C7CF)
	.endif

	@ data/text/trainers.inc:1217 Route113_Text_LungIntro (+1 aliases)
	.globl gText_Rom_25C7FE
gText_Rom_25C7FE: @ 0x0825C7FE
	.string "みつけてくれて ありがとう!\nでも しょうぶは べつだよ!$"
	.if (. - gText_Rom_25C7FE) > 0x1e
	.error "gText_Rom_25C7FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7FE) < 0x1e
	.space 0x1e - (. - gText_Rom_25C7FE)
	.endif

	@ data/text/trainers.inc:1220 Route113_Text_LungDefeat (+1 aliases)
	.globl gText_Rom_25C81C
gText_Rom_25C81C: @ 0x0825C81C
	.string "にんぽう かざんばい がくれ!\p…… って もう おわり?$"
	.if (. - gText_Rom_25C81C) > 0x1e
	.error "gText_Rom_25C81C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C81C) < 0x1e
	.space 0x1e - (. - gText_Rom_25C81C)
	.endif

	@ data/text/trainers.inc:1223 Route113_Text_LungPostBattle
	.globl gText_Rom_25C83A
gText_Rom_25C83A: @ 0x0825C83A
	.string "かくれていて なにが しんぱいって\nだれも とおらないと さびしいんだよね$"
	.if (. - gText_Rom_25C83A) > 0x26
	.error "gText_Rom_25C83A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C83A) < 0x26
	.space 0x26 - (. - gText_Rom_25C83A)
	.endif

	@ data/text/trainers.inc:1226 Route113_Text_ToriIntro (+1 aliases)
	.globl gText_Rom_25C860
gText_Rom_25C860: @ 0x0825C860
	.string "ナナ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!$"
	.if (. - gText_Rom_25C860) > 0x29
	.error "gText_Rom_25C860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C860) < 0x29
	.space 0x29 - (. - gText_Rom_25C860)
	.endif

	@ data/text/trainers.inc:1229 Route113_Text_ToriDefeat (+1 aliases)
	.globl gText_Rom_25C889
gText_Rom_25C889: @ 0x0825C889
	.string "ナナ『まけちゃった\nつまんないから かざんばい あつめよ!$"
	.if (. - gText_Rom_25C889) > 0x1e
	.error "gText_Rom_25C889 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C889) < 0x1e
	.space 0x1e - (. - gText_Rom_25C889)
	.endif

	@ data/text/trainers.inc:1232 Route113_Text_ToriPostBattle
	.globl gText_Rom_25C8A7
gText_Rom_25C8A7: @ 0x0825C8A7
	.string "ナナ『かざんばい どれくらい たまったかな?\nしろいビードロ つくれると いいのにね!$"
	.if (. - gText_Rom_25C8A7) > 0x2c
	.error "gText_Rom_25C8A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8A7) < 0x2c
	.space 0x2c - (. - gText_Rom_25C8A7)
	.endif

	@ data/text/trainers.inc:1235 Route113_Text_ToriNotEnoughMons (+1 aliases)
	.globl gText_Rom_25C8D3
gText_Rom_25C8D3: @ 0x0825C8D3
	.string "ナナ『あたしたち 2たい2で たたかいたいの\nそうしないと まけちゃうもん!$"
	.if (. - gText_Rom_25C8D3) > 0x27
	.error "gText_Rom_25C8D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8D3) < 0x27
	.space 0x27 - (. - gText_Rom_25C8D3)
	.endif

	@ data/text/trainers.inc:1238 Route113_Text_TiaIntro (+1 aliases)
	.globl gText_Rom_25C8FA
gText_Rom_25C8FA: @ 0x0825C8FA
	.string "ネネ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!$"
	.if (. - gText_Rom_25C8FA) > 0x29
	.error "gText_Rom_25C8FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8FA) < 0x29
	.space 0x29 - (. - gText_Rom_25C8FA)
	.endif

	@ data/text/trainers.inc:1241 Route113_Text_TiaDefeat (+1 aliases)
	.globl gText_Rom_25C923
gText_Rom_25C923: @ 0x0825C923
	.string "ネネ『かてなかった\nつまんないから かざんばい あつめよ!$"
	.if (. - gText_Rom_25C923) > 0x1e
	.error "gText_Rom_25C923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C923) < 0x1e
	.space 0x1e - (. - gText_Rom_25C923)
	.endif

	@ data/text/trainers.inc:1244 Route113_Text_TiaPostBattle
	.globl gText_Rom_25C941
gText_Rom_25C941: @ 0x0825C941
	.string "ネネ『かざんばい けっこう たまったよ!\nもう しろいビードロ つくれるよ きっと!$"
	.if (. - gText_Rom_25C941) > 0x2b
	.error "gText_Rom_25C941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C941) < 0x2b
	.space 0x2b - (. - gText_Rom_25C941)
	.endif

	@ data/text/trainers.inc:1247 Route113_Text_TiaNotEnoughMons (+1 aliases)
	.globl gText_Rom_25C96C
gText_Rom_25C96C: @ 0x0825C96C
	.string "ネネ『あたしたち 2たい2で たたかいたいの\nそうしないと かてないもん!$"
	.if (. - gText_Rom_25C96C) > 0x26
	.error "gText_Rom_25C96C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C96C) < 0x26
	.space 0x26 - (. - gText_Rom_25C96C)
	.endif

	@ data/text/trainers.inc:1250 Route113_Text_CobyIntro (+1 aliases)
	.globl gText_Rom_25C992
gText_Rom_25C992: @ 0x0825C992
	.string "おまえ なんか この つばさで\nふきとばして やるぜっ!$"
	.if (. - gText_Rom_25C992) > 0x1d
	.error "gText_Rom_25C992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C992) < 0x1d
	.space 0x1d - (. - gText_Rom_25C992)
	.endif

	@ data/text/trainers.inc:1253 Route113_Text_CobyDefeat (+1 aliases)
	.globl gText_Rom_25C9AF
gText_Rom_25C9AF: @ 0x0825C9AF
	.string "え あれ?$"
	.if (. - gText_Rom_25C9AF) > 0x6
	.error "gText_Rom_25C9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9AF) < 0x6
	.space 0x6 - (. - gText_Rom_25C9AF)
	.endif

	@ data/text/trainers.inc:1256 Route113_Text_CobyPostBattle
	.globl gText_Rom_25C9B5
gText_Rom_25C9B5: @ 0x0825C9B5
	.string "そんなに あっさり かたれると\nなにを いって いいか わからない……$"
	.if (. - gText_Rom_25C9B5) > 0x24
	.error "gText_Rom_25C9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9B5) < 0x24
	.space 0x24 - (. - gText_Rom_25C9B5)
	.endif

	@ data/text/trainers.inc:1259 Route113_Text_SophieIntro (+1 aliases)
	.globl gText_Rom_25C9D9
gText_Rom_25C9D9: @ 0x0825C9D9
	.string "あったかくて ねむく なっちゃう\nねむけ ざましに あいてを してよ!$"
	.if (. - gText_Rom_25C9D9) > 0x24
	.error "gText_Rom_25C9D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9D9) < 0x24
	.space 0x24 - (. - gText_Rom_25C9D9)
	.endif

	@ data/text/trainers.inc:1262 Route113_Text_SophieDefeat (+1 aliases)
	.globl gText_Rom_25C9FD
gText_Rom_25C9FD: @ 0x0825C9FD
	.string "きっと これは ユメなのよ……$"
	.if (. - gText_Rom_25C9FD) > 0x10
	.error "gText_Rom_25C9FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9FD) < 0x10
	.space 0x10 - (. - gText_Rom_25C9FD)
	.endif

	@ data/text/trainers.inc:1265 Route113_Text_SophiePostBattle
	.globl gText_Rom_25CA0D
gText_Rom_25CA0D: @ 0x0825CA0D
	.string "まけて くやしい から\nもう ここで フテね しちゃうわ!\lぐーぐー$"
	.if (. - gText_Rom_25CA0D) > 0x23
	.error "gText_Rom_25CA0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA0D) < 0x23
	.space 0x23 - (. - gText_Rom_25CA0D)
	.endif

	@ data/text/trainers.inc:1268 Route113_Text_LawrenceIntro (+1 aliases)
	.globl gText_Rom_25CA30
gText_Rom_25CA30: @ 0x0825CA30
	.string "もしかして かざんばい あつめの\nとちゅう だった?$"
	.if (. - gText_Rom_25CA30) > 0x1b
	.error "gText_Rom_25CA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA30) < 0x1b
	.space 0x1b - (. - gText_Rom_25CA30)
	.endif

	@ data/text/trainers.inc:1271 Route113_Text_LawrenceDefeat (+1 aliases)
	.globl gText_Rom_25CA4B
gText_Rom_25CA4B: @ 0x0825CA4B
	.string "えへへ まけちゃったね$"
	.if (. - gText_Rom_25CA4B) > 0xc
	.error "gText_Rom_25CA4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA4B) < 0xc
	.space 0xc - (. - gText_Rom_25CA4B)
	.endif

	@ data/text/trainers.inc:1274 Route113_Text_LawrencePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CA57
gText_Rom_25CA57: @ 0x0825CA57
	.string "ぼくも はいに もぐっちゃおう かしら$"
	.if (. - gText_Rom_25CA57) != 0x14
	.error "gText_Rom_25CA57 must retain its original byte length"
	.endif
	.globl gText_Rom_25CA67
	.set gText_Rom_25CA67, gText_Rom_25CA57 + 0x10

	@ data/text/trainers.inc:1277 Route113_Text_WyattIntro (+1 aliases)
	.globl gText_Rom_25CA6B
gText_Rom_25CA6B: @ 0x0825CA6B
	.string "ぼ ボクと たたかうって いうんですか!\nまだ つかまえた ばかりなのに!$"
	.if (. - gText_Rom_25CA6B) > 0x26
	.error "gText_Rom_25CA6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA6B) < 0x26
	.space 0x26 - (. - gText_Rom_25CA6B)
	.endif

	@ data/text/trainers.inc:1280 Route113_Text_WyattDefeat (+1 aliases)
	.globl gText_Rom_25CA91
gText_Rom_25CA91: @ 0x0825CA91
	.string "か かって うれしい ですか!\nこんな ボクに かって うれしいですか!$"
	.if (. - gText_Rom_25CA91) > 0x25
	.error "gText_Rom_25CA91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA91) < 0x25
	.space 0x25 - (. - gText_Rom_25CA91)
	.endif

	@ data/text/trainers.inc:1283 Route113_Text_WyattPostBattle
	.globl gText_Rom_25CAB6
gText_Rom_25CAB6: @ 0x0825CAB6
	.string "はいしゃに こえを かけて くれるって\nいうんですか!\lか カッコいい ですね! ふん!$"
	.if (. - gText_Rom_25CAB6) > 0x2d
	.error "gText_Rom_25CAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CAB6) < 0x2d
	.space 0x2d - (. - gText_Rom_25CAB6)
	.endif

	@ data/text/trainers.inc:1286 Route114_Text_LennyIntro (+1 aliases)
	.globl gText_Rom_25CAE3
gText_Rom_25CAE3: @ 0x0825CAE3
	.string "やっほーっ!\p……\pこだまの かわりに\nやっほー! って いってくれよ!$"
	.if (. - gText_Rom_25CAE3) > 0x25
	.error "gText_Rom_25CAE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CAE3) < 0x25
	.space 0x25 - (. - gText_Rom_25CAE3)
	.endif

	@ data/text/trainers.inc:1289 Route114_Text_LennyDefeat (+1 aliases)
	.globl gText_Rom_25CB08
gText_Rom_25CB08: @ 0x0825CB08
	.string "やっほーっ!$"
	.if (. - gText_Rom_25CB08) > 0x7
	.error "gText_Rom_25CB08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB08) < 0x7
	.space 0x7 - (. - gText_Rom_25CB08)
	.endif

	@ data/text/trainers.inc:1292 Route114_Text_LennyPostBattle
	.globl gText_Rom_25CB0F
gText_Rom_25CB0F: @ 0x0825CB0F
	.string "こどものころ こだま って\nむこうの やまにいる モノマネさんが\lやっほー! って いってると おもってた$"
	.if (. - gText_Rom_25CB0F) > 0x36
	.error "gText_Rom_25CB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB0F) < 0x36
	.space 0x36 - (. - gText_Rom_25CB0F)
	.endif

	@ data/text/trainers.inc:1295 Route114_Text_LucasIntro (+1 aliases)
	.globl gText_Rom_25CB45
gText_Rom_25CB45: @ 0x0825CB45
	.string "じゅんびを おこたる もの\nやまに のぼるべからず!$"
	.if (. - gText_Rom_25CB45) > 0x1b
	.error "gText_Rom_25CB45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB45) < 0x1b
	.space 0x1b - (. - gText_Rom_25CB45)
	.endif

	@ data/text/trainers.inc:1298 Route114_Text_LucasDefeat (+1 aliases)
	.globl gText_Rom_25CB60
gText_Rom_25CB60: @ 0x0825CB60
	.string "やまは こわい ところだ……$"
	.if (. - gText_Rom_25CB60) > 0xf
	.error "gText_Rom_25CB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB60) < 0xf
	.space 0xf - (. - gText_Rom_25CB60)
	.endif

	@ data/text/trainers.inc:1301 Route114_Text_LucasPostBattle
	.globl gText_Rom_25CB6F
gText_Rom_25CB6F: @ 0x0825CB6F
	.string "ふゆの やまは なだれや ふぶきで\nそうなんする きけんが おおいぞ!$"
	.if (. - gText_Rom_25CB6F) > 0x24
	.error "gText_Rom_25CB6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB6F) < 0x24
	.space 0x24 - (. - gText_Rom_25CB6F)
	.endif

	@ data/text/trainers.inc:1304 Route114_Text_ShaneIntro (+1 aliases)
	.globl gText_Rom_25CB93
gText_Rom_25CB93: @ 0x0825CB93
	.string "キャンプの たのしみと いえば\nつりに はなびに きもだめし!\pだけど いちばんは\nポケモンしょうぶ だね!$"
	.if (. - gText_Rom_25CB93) > 0x37
	.error "gText_Rom_25CB93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB93) < 0x37
	.space 0x37 - (. - gText_Rom_25CB93)
	.endif

	@ data/text/trainers.inc:1307 Route114_Text_ShaneDefeat (+1 aliases)
	.globl gText_Rom_25CBCA
gText_Rom_25CBCA: @ 0x0825CBCA
	.string "つよすぎるーっ!$"
	.if (. - gText_Rom_25CBCA) > 0x9
	.error "gText_Rom_25CBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBCA) < 0x9
	.space 0x9 - (. - gText_Rom_25CBCA)
	.endif

	@ data/text/trainers.inc:1310 Route114_Text_ShanePostBattle
	.globl gText_Rom_25CBD3
gText_Rom_25CBD3: @ 0x0825CBD3
	.string "ぼくね ポケモンと いっしょに\nキャンプ できるだけで しあわせ だよ$"
	.if (. - gText_Rom_25CBD3) > 0x24
	.error "gText_Rom_25CBD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBD3) < 0x24
	.space 0x24 - (. - gText_Rom_25CBD3)
	.endif

	@ data/text/trainers.inc:1313 Route114_Text_NancyIntro (+1 aliases)
	.globl gText_Rom_25CBF7
gText_Rom_25CBF7: @ 0x0825CBF7
	.string "しょくごの うんどう!\nわたしと しょうぶ しましょうよ!$"
	.if (. - gText_Rom_25CBF7) > 0x1e
	.error "gText_Rom_25CBF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBF7) < 0x1e
	.space 0x1e - (. - gText_Rom_25CBF7)
	.endif

	@ data/text/trainers.inc:1316 Route114_Text_NancyDefeat (+1 aliases)
	.globl gText_Rom_25CC15
gText_Rom_25CC15: @ 0x0825CC15
	.string "まけちゃったー!$"
	.if (. - gText_Rom_25CC15) > 0x9
	.error "gText_Rom_25CC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC15) < 0x9
	.space 0x9 - (. - gText_Rom_25CC15)
	.endif

	@ data/text/trainers.inc:1319 Route114_Text_NancyPostBattle
	.globl gText_Rom_25CC1E
gText_Rom_25CC1E: @ 0x0825CC1E
	.string "おいしい ごはんも たべたし\nなんだか ねむくなって きたわ……$"
	.if (. - gText_Rom_25CC1E) > 0x21
	.error "gText_Rom_25CC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC1E) < 0x21
	.space 0x21 - (. - gText_Rom_25CC1E)
	.endif

	@ data/text/trainers.inc:1322 Route114_Text_SteveIntro (+1 aliases)
	.globl gText_Rom_25CC3F
gText_Rom_25CC3F: @ 0x0825CC3F
	.string "うふふふふふ……\nボクの ポケモンと しょうぶしない?$"
	.if (. - gText_Rom_25CC3F) > 0x1c
	.error "gText_Rom_25CC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC3F) < 0x1c
	.space 0x1c - (. - gText_Rom_25CC3F)
	.endif

	@ data/text/trainers.inc:1325 Route114_Text_SteveDefeat (+1 aliases)
	.globl gText_Rom_25CC5B
gText_Rom_25CC5B: @ 0x0825CC5B
	.string "ボ ボクの ポケモン……$"
	.if (. - gText_Rom_25CC5B) > 0xd
	.error "gText_Rom_25CC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC5B) < 0xd
	.space 0xd - (. - gText_Rom_25CC5B)
	.endif

	@ data/text/trainers.inc:1328 Route114_Text_StevePostBattle
	.globl gText_Rom_25CC68
gText_Rom_25CC68: @ 0x0825CC68
	.string "からだが おおきくて ゴツゴツ かたくて\nおおきな ツノと するどい キバ……\lうふふふふ……\lそんな ポケモンが ほしいなぁ……$"
	.if (. - gText_Rom_25CC68) > 0x42
	.error "gText_Rom_25CC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC68) < 0x42
	.space 0x42 - (. - gText_Rom_25CC68)
	.endif

	@ data/text/trainers.inc:1331 Route114_Text_SteveRegister
	.globl gText_Rom_25CCAA
gText_Rom_25CCAA: @ 0x0825CCAA
	.string "お おぼえてろっ! ……いや\nわすれられない ように こうしてやる!$"
	.if (. - gText_Rom_25CCAA) > 0x23
	.error "gText_Rom_25CCAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCAA) < 0x23
	.space 0x23 - (. - gText_Rom_25CCAA)
	.endif

