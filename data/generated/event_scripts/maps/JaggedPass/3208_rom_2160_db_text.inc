	@ data/maps/JaggedPass/scripts.inc:150 JaggedPass_Text_EricIntro (+1 aliases)
	.globl gText_Rom_215D24
gText_Rom_215D24: @ 0x08215D24
	.string "えんとつやまの デコボコさんどう\nまさに わたしが もとめていた やま!\lこの デコボコした ところが たまらん!{EOS}"
	.if (. - gText_Rom_215D24) > 0x3a
	.error "gText_Rom_215D24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D24) < 0x3a
	.space 0x3a - (. - gText_Rom_215D24)
	.endif
	@ data/maps/JaggedPass/scripts.inc:157 JaggedPass_Text_EricDefeat (+1 aliases)
	.globl gText_Rom_215D5E
gText_Rom_215D5E: @ 0x08215D5E
	.string "まけて くやしいぞ!{EOS}"
	.if (. - gText_Rom_215D5E) > 0xb
	.error "gText_Rom_215D5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D5E) < 0xb
	.space 0xb - (. - gText_Rom_215D5E)
	.endif
	@ data/maps/JaggedPass/scripts.inc:160 JaggedPass_Text_EricPostBattle
	.globl gText_Rom_215D69
gText_Rom_215D69: @ 0x08215D69
	.string "たしかに ポケモンでは まけた……\pだが やまを あいする きもちなら\nわたしの ほうが まさっているだろ!{EOS}"
	.if (. - gText_Rom_215D69) > 0x37
	.error "gText_Rom_215D69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D69) < 0x37
	.space 0x37 - (. - gText_Rom_215D69)
	.endif
	@ data/maps/JaggedPass/scripts.inc:165 JaggedPass_Text_DianaIntro (+1 aliases)
	.globl gText_Rom_215DA0
gText_Rom_215DA0: @ 0x08215DA0
	.string "ここは きがるに のぼって いけないもの\nちょっと ピクニックむき じゃないわ{EOS}"
	.if (. - gText_Rom_215DA0) > 0x28
	.error "gText_Rom_215DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DA0) < 0x28
	.space 0x28 - (. - gText_Rom_215DA0)
	.endif
	@ data/maps/JaggedPass/scripts.inc:169 JaggedPass_Text_DianaDefeat (+1 aliases)
	.globl gText_Rom_215DC8
gText_Rom_215DC8: @ 0x08215DC8
	.string "あーん もう!\nしたが デコボコだから……{EOS}"
	.if (. - gText_Rom_215DC8) > 0x16
	.error "gText_Rom_215DC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DC8) < 0x16
	.space 0x16 - (. - gText_Rom_215DC8)
	.endif
	@ data/maps/JaggedPass/scripts.inc:173 JaggedPass_Text_DianaPostBattle
	.globl gText_Rom_215DDE
gText_Rom_215DDE: @ 0x08215DDE
	.string "こんな デコボコしたところ\nじてんしゃで じょうずに のぼっていく\lひとも いるのよ!{EOS}"
	.if (. - gText_Rom_215DDE) > 0x2c
	.error "gText_Rom_215DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DDE) < 0x2c
	.space 0x2c - (. - gText_Rom_215DDE)
	.endif
	@ data/maps/JaggedPass/scripts.inc:178 JaggedPass_Text_DianaRegister
	.globl gText_Rom_215E0A
gText_Rom_215E0A: @ 0x08215E0A
	.string "また ここに くることって あるかな?\nそしたら わたしと しょうぶしてね!{EOS}"
	.if (. - gText_Rom_215E0A) > 0x27
	.error "gText_Rom_215E0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E0A) < 0x27
	.space 0x27 - (. - gText_Rom_215E0A)
	.endif
	@ data/maps/JaggedPass/scripts.inc:182 JaggedPass_Text_DianaRematchIntro (+1 aliases)
	.globl gText_Rom_215E31
gText_Rom_215E31: @ 0x08215E31
	.string "どんな みちも ピクニックは たのしい!\nポケモンも いっしょ だしね!{EOS}"
	.if (. - gText_Rom_215E31) > 0x25
	.error "gText_Rom_215E31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E31) < 0x25
	.space 0x25 - (. - gText_Rom_215E31)
	.endif
	@ data/maps/JaggedPass/scripts.inc:186 JaggedPass_Text_DianaRematchDefeat (+1 aliases)
	.globl gText_Rom_215E56
gText_Rom_215E56: @ 0x08215E56
	.string "まけたのは\nしたが デコボコだからよ!{EOS}"
	.if (. - gText_Rom_215E56) > 0x14
	.error "gText_Rom_215E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E56) < 0x14
	.space 0x14 - (. - gText_Rom_215E56)
	.endif
	@ data/maps/JaggedPass/scripts.inc:190 JaggedPass_Text_DianaPostRematch
	.globl gText_Rom_215E6A
gText_Rom_215E6A: @ 0x08215E6A
	.string "まけたことは さっさと わすれて\nこの デコボコみちを たのしんじゃお!{EOS}"
	.if (. - gText_Rom_215E6A) > 0x25
	.error "gText_Rom_215E6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E6A) < 0x25
	.space 0x25 - (. - gText_Rom_215E6A)
	.endif
	@ data/maps/JaggedPass/scripts.inc:194 JaggedPass_Text_EthanIntro (+1 aliases)
	.globl gText_Rom_215E8F
gText_Rom_215E8F: @ 0x08215E8F
	.string "この デコボコさんどうは あるきにくい!\nポケモンを きたえるのに むいてるよ!{EOS}"
	.if (. - gText_Rom_215E8F) > 0x29
	.error "gText_Rom_215E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E8F) < 0x29
	.space 0x29 - (. - gText_Rom_215E8F)
	.endif
	@ data/maps/JaggedPass/scripts.inc:198 JaggedPass_Text_EthanDefeat (+1 aliases)
	.globl gText_Rom_215EB8
gText_Rom_215EB8: @ 0x08215EB8
	.string "あしばを きにしてる うちに\nおわっちゃった かんじだ……{EOS}"
	.if (. - gText_Rom_215EB8) > 0x1e
	.error "gText_Rom_215EB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215EB8) < 0x1e
	.space 0x1e - (. - gText_Rom_215EB8)
	.endif
	@ data/maps/JaggedPass/scripts.inc:202 JaggedPass_Text_EthanPostBattle
	.globl gText_Rom_215ED6
gText_Rom_215ED6: @ 0x08215ED6
	.string "ぼくも ダートじてんしゃ もっていれば\nだんさを とびこえて いけるのにな{EOS}"
	.if (. - gText_Rom_215ED6) > 0x26
	.error "gText_Rom_215ED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215ED6) < 0x26
	.space 0x26 - (. - gText_Rom_215ED6)
	.endif
	@ data/maps/JaggedPass/scripts.inc:206 JaggedPass_Text_EthanRegister
	.globl gText_Rom_215EFC
gText_Rom_215EFC: @ 0x08215EFC
	.string "もうちょっと デコボコに なれたら\nこんどこそ かつぞ!\lぼくを ポケナビに とうろく しといてよ{EOS}"
	.if (. - gText_Rom_215EFC) > 0x32
	.error "gText_Rom_215EFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215EFC) < 0x32
	.space 0x32 - (. - gText_Rom_215EFC)
	.endif
	@ data/maps/JaggedPass/scripts.inc:211 JaggedPass_Text_EthanRematchIntro (+1 aliases)
	.globl gText_Rom_215F2E
gText_Rom_215F2E: @ 0x08215F2E
	.string "デコボコに なれちゃったから\nちかごろだと うたいながら のぼるのさ!{EOS}"
	.if (. - gText_Rom_215F2E) > 0x24
	.error "gText_Rom_215F2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F2E) < 0x24
	.space 0x24 - (. - gText_Rom_215F2E)
	.endif
	@ data/maps/JaggedPass/scripts.inc:215 JaggedPass_Text_EthanRematchDefeat (+1 aliases)
	.globl gText_Rom_215F52
gText_Rom_215F52: @ 0x08215F52
	.string "やっぱり デコボコだと\nたたかいにくいよ……{EOS}"
	.if (. - gText_Rom_215F52) > 0x17
	.error "gText_Rom_215F52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F52) < 0x17
	.space 0x17 - (. - gText_Rom_215F52)
	.endif
	@ data/maps/JaggedPass/scripts.inc:219 JaggedPass_Text_EthanPostRematch
	.globl gText_Rom_215F69
gText_Rom_215F69: @ 0x08215F69
	.string "ぼくも キンセツで カゼノさんから\nダートじてんしゃ もらおうかな{EOS}"
	.if (. - gText_Rom_215F69) > 0x22
	.error "gText_Rom_215F69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F69) < 0x22
	.space 0x22 - (. - gText_Rom_215F69)
	.endif
	@ data/maps/JaggedPass/scripts.inc:223 JaggedPass_Text_GruntIntro
	.globl gText_Rom_215F8B
gText_Rom_215F8B: @ 0x08215F8B
	.string "うわっ!? ……なんだ おまえ!\pオレが\n  こんな\l    ところで\lなにを\l  してるか\l    なんて\lおまえにゃ カンケー\lな い だ ろ が!{EOS}"
	.if (. - gText_Rom_215F8B) > 0x4d
	.error "gText_Rom_215F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F8B) < 0x4d
	.space 0x4d - (. - gText_Rom_215F8B)
	.endif
	@ data/maps/JaggedPass/scripts.inc:229 JaggedPass_Text_GruntDefeat (+1 aliases)
	.globl gText_Rom_215FD8
gText_Rom_215FD8: @ 0x08215FD8
	.string "うぐぐ……\pはやく\n  アジトに\l    にげこめば\l      よかった……{EOS}"
	.if (. - gText_Rom_215FD8) > 0x28
	.error "gText_Rom_215FD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215FD8) < 0x28
	.space 0x28 - (. - gText_Rom_215FD8)
	.endif
	@ data/maps/JaggedPass/scripts.inc:234 JaggedPass_Text_GoWhereverYouWant
	.globl gText_Rom_216000
gText_Rom_216000: @ 0x08216000
	.string "わかった わかった!\nキミが つよいのは みとめて やるよ!\pオレのことは きにせず\nすきな ところへ いきな!{EOS}"
	.if (. - gText_Rom_216000) > 0x39
	.error "gText_Rom_216000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216000) < 0x39
	.space 0x39 - (. - gText_Rom_216000)
	.endif
	@ data/maps/JaggedPass/scripts.inc:240 JaggedPass_Text_BoulderShakingInResponseToEmblem
	.globl gText_Rom_216039
gText_Rom_216039: @ 0x08216039
	.string "あ! マグマのしるしに はんのうして……\nおおきな いわが……\lブルブルと しんどう している!{EOS}"
	.if (. - gText_Rom_216039) > 0x31
	.error "gText_Rom_216039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216039) < 0x31
	.space 0x31 - (. - gText_Rom_216039)
	.endif
	@ data/maps/JaggedPass/scripts.inc:244 JaggedPass_Text_JulioIntro (+1 aliases)
	.globl gText_Rom_21606A
gText_Rom_21606A: @ 0x0821606A
	.string "じてんしゃで いっきに\nおりて くると こわいぃぃ!{EOS}"
	.if (. - gText_Rom_21606A) > 0x1b
	.error "gText_Rom_21606A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21606A) < 0x1b
	.space 0x1b - (. - gText_Rom_21606A)
	.endif
	@ data/maps/JaggedPass/scripts.inc:248 JaggedPass_Text_JulioDefeat (+1 aliases)
	.globl gText_Rom_216085
gText_Rom_216085: @ 0x08216085
	.string "ガッタガタ{EOS}"
	.if (. - gText_Rom_216085) > 0x6
	.error "gText_Rom_216085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216085) < 0x6
	.space 0x6 - (. - gText_Rom_216085)
	.endif
	@ data/maps/JaggedPass/scripts.inc:251 JaggedPass_Text_JulioPostBattle
	.globl gText_Rom_21608B
gText_Rom_21608B: @ 0x0821608B
	.string "じてんしゃが おもいっきり\nバウンド して おしりが イタイ……{EOS}"
	.if (. - gText_Rom_21608B) > 0x21
	.error "gText_Rom_21608B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21608B) < 0x21
	.space 0x21 - (. - gText_Rom_21608B)
	.endif
	@ data/maps/JaggedPass/scripts.inc:255 JaggedPass_Text_AutumnIntro (+1 aliases)
	.globl gText_Rom_2160AC
gText_Rom_2160AC: @ 0x082160AC
	.string "まいにち ここを のぼっているわ\nパワーには じしん あるんだから!{EOS}"
	.if (. - gText_Rom_2160AC) > 0x23
	.error "gText_Rom_2160AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2160AC) < 0x23
	.space 0x23 - (. - gText_Rom_2160AC)
	.endif
	@ data/maps/JaggedPass/scripts.inc:259 JaggedPass_Text_AutumnDefeat (+1 aliases)
	.globl gText_Rom_2160CF
gText_Rom_2160CF: @ 0x082160CF
	.string "んー おっかしいな……{EOS}"
	.if (. - gText_Rom_2160CF) > 0xc
	.error "gText_Rom_2160CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2160CF) < 0xc
	.space 0xc - (. - gText_Rom_2160CF)
	.endif
	@ data/maps/JaggedPass/scripts.inc:263 JaggedPass_Text_AutumnPostBattle
	.globl gText_Rom_2160DB
gText_Rom_2160DB: @ 0x082160DB
	.string "すこし のぼった ところにある\nおかしな でっぱりは なにかしら……?{EOS}"
	.if (. - gText_Rom_2160DB) > 0x24
	.error "gText_Rom_2160DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2160DB) < 0x24
	.space 0x24 - (. - gText_Rom_2160DB)
	.endif
	@ Embedded ROM bytes: file offset 0x2160FF, size 0x66
	.byte 0x03, 0x05, 0x61, 0x21, 0x08, 0x00, 0x2B, 0xAA, 0x08, 0x07, 0x00, 0x12, 0x61, 0x21, 0x08, 0x29
	.byte 0xAA, 0x08, 0x02, 0x29, 0xFE, 0x02, 0x2A, 0xFF, 0x02, 0x03, 0x00, 0x6A, 0x5A, 0x2B, 0x1A, 0x01
	.byte 0x06, 0x01, 0x49, 0x61, 0x21, 0x08, 0x0F, 0x00, 0x65, 0x61, 0x21, 0x08, 0x09, 0x04, 0x1A, 0x00
	.byte 0x80, 0xBE, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xE0, 0x30, 0x24, 0x08, 0x29, 0x1A, 0x01, 0x6C, 0x02, 0x0F, 0x00, 0xA6, 0x61, 0x21, 0x08
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0xE1, 0x61, 0x21, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x07
	.byte 0x62, 0x21, 0x08, 0x09, 0x02, 0x02
