	@ data/maps/JaggedPass/scripts.inc:150 JaggedPass_Text_EricIntro (+1 aliases)
	.globl JaggedPass_Text_EricIntro
JaggedPass_Text_EricIntro: @ 0x08215D24
	.string "えんとつやまの デコボコさんどう\nまさに わたしが もとめていた やま!\lこの デコボコした ところが たまらん!{EOS}"
	.if (. - JaggedPass_Text_EricIntro) > 0x3a
	.error "JaggedPass_Text_EricIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_EricIntro) < 0x3a
	.space 0x3a - (. - JaggedPass_Text_EricIntro)
	.endif
	@ data/maps/JaggedPass/scripts.inc:157 JaggedPass_Text_EricDefeat (+1 aliases)
	.globl JaggedPass_Text_EricDefeat
JaggedPass_Text_EricDefeat: @ 0x08215D5E
	.string "まけて くやしいぞ!{EOS}"
	.if (. - JaggedPass_Text_EricDefeat) > 0xb
	.error "JaggedPass_Text_EricDefeat may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_EricDefeat) < 0xb
	.space 0xb - (. - JaggedPass_Text_EricDefeat)
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
	.globl JaggedPass_Text_DianaIntro
JaggedPass_Text_DianaIntro: @ 0x08215DA0
	.string "ここは きがるに のぼって いけないもの\nちょっと ピクニックむき じゃないわ{EOS}"
	.if (. - JaggedPass_Text_DianaIntro) > 0x28
	.error "JaggedPass_Text_DianaIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaIntro) < 0x28
	.space 0x28 - (. - JaggedPass_Text_DianaIntro)
	.endif
	@ data/maps/JaggedPass/scripts.inc:169 JaggedPass_Text_DianaDefeat (+1 aliases)
	.globl JaggedPass_Text_DianaDefeat
JaggedPass_Text_DianaDefeat: @ 0x08215DC8
	.string "あーん もう!\nしたが デコボコだから……{EOS}"
	.if (. - JaggedPass_Text_DianaDefeat) > 0x16
	.error "JaggedPass_Text_DianaDefeat may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaDefeat) < 0x16
	.space 0x16 - (. - JaggedPass_Text_DianaDefeat)
	.endif
	@ data/maps/JaggedPass/scripts.inc:173 JaggedPass_Text_DianaPostBattle
	.globl JaggedPass_Text_DianaPostBattle
JaggedPass_Text_DianaPostBattle: @ 0x08215DDE
	.string "こんな デコボコしたところ\nじてんしゃで じょうずに のぼっていく\lひとも いるのよ!{EOS}"
	.if (. - JaggedPass_Text_DianaPostBattle) > 0x2c
	.error "JaggedPass_Text_DianaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaPostBattle) < 0x2c
	.space 0x2c - (. - JaggedPass_Text_DianaPostBattle)
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
	.globl JaggedPass_Text_DianaRematchIntro
JaggedPass_Text_DianaRematchIntro: @ 0x08215E31
	.string "どんな みちも ピクニックは たのしい!\nポケモンも いっしょ だしね!{EOS}"
	.if (. - JaggedPass_Text_DianaRematchIntro) > 0x25
	.error "JaggedPass_Text_DianaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaRematchIntro) < 0x25
	.space 0x25 - (. - JaggedPass_Text_DianaRematchIntro)
	.endif
	@ data/maps/JaggedPass/scripts.inc:186 JaggedPass_Text_DianaRematchDefeat (+1 aliases)
	.globl JaggedPass_Text_DianaRematchDefeat
JaggedPass_Text_DianaRematchDefeat: @ 0x08215E56
	.string "まけたのは\nしたが デコボコだからよ!{EOS}"
	.if (. - JaggedPass_Text_DianaRematchDefeat) > 0x14
	.error "JaggedPass_Text_DianaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaRematchDefeat) < 0x14
	.space 0x14 - (. - JaggedPass_Text_DianaRematchDefeat)
	.endif
	@ data/maps/JaggedPass/scripts.inc:190 JaggedPass_Text_DianaPostRematch
	.globl JaggedPass_Text_DianaPostRematch
JaggedPass_Text_DianaPostRematch: @ 0x08215E6A
	.string "まけたことは さっさと わすれて\nこの デコボコみちを たのしんじゃお!{EOS}"
	.if (. - JaggedPass_Text_DianaPostRematch) > 0x25
	.error "JaggedPass_Text_DianaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_DianaPostRematch) < 0x25
	.space 0x25 - (. - JaggedPass_Text_DianaPostRematch)
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
	.globl JaggedPass_Text_EthanRegister
JaggedPass_Text_EthanRegister: @ 0x08215EFC
	.string "もうちょっと デコボコに なれたら\nこんどこそ かつぞ!\lぼくを ポケナビに とうろく しといてよ{EOS}"
	.if (. - JaggedPass_Text_EthanRegister) > 0x32
	.error "JaggedPass_Text_EthanRegister may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_EthanRegister) < 0x32
	.space 0x32 - (. - JaggedPass_Text_EthanRegister)
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
	.globl JaggedPass_Text_GruntIntro
JaggedPass_Text_GruntIntro: @ 0x08215F8B
	.string "うわっ!? ……なんだ おまえ!\pオレが\n  こんな\l    ところで\lなにを\l  してるか\l    なんて\lおまえにゃ カンケー\lな い だ ろ が!{EOS}"
	.if (. - JaggedPass_Text_GruntIntro) > 0x4d
	.error "JaggedPass_Text_GruntIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_GruntIntro) < 0x4d
	.space 0x4d - (. - JaggedPass_Text_GruntIntro)
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
	.globl JaggedPass_Text_GoWhereverYouWant
JaggedPass_Text_GoWhereverYouWant: @ 0x08216000
	.string "わかった わかった!\nキミが つよいのは みとめて やるよ!\pオレのことは きにせず\nすきな ところへ いきな!{EOS}"
	.if (. - JaggedPass_Text_GoWhereverYouWant) > 0x39
	.error "JaggedPass_Text_GoWhereverYouWant may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_GoWhereverYouWant) < 0x39
	.space 0x39 - (. - JaggedPass_Text_GoWhereverYouWant)
	.endif
	@ data/maps/JaggedPass/scripts.inc:240 JaggedPass_Text_BoulderShakingInResponseToEmblem
	.globl JaggedPass_Text_BoulderShakingInResponseToEmblem
JaggedPass_Text_BoulderShakingInResponseToEmblem: @ 0x08216039
	.string "あ! マグマのしるしに はんのうして……\nおおきな いわが……\lブルブルと しんどう している!{EOS}"
	.if (. - JaggedPass_Text_BoulderShakingInResponseToEmblem) > 0x31
	.error "JaggedPass_Text_BoulderShakingInResponseToEmblem may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_BoulderShakingInResponseToEmblem) < 0x31
	.space 0x31 - (. - JaggedPass_Text_BoulderShakingInResponseToEmblem)
	.endif
	@ data/maps/JaggedPass/scripts.inc:244 JaggedPass_Text_JulioIntro (+1 aliases)
	.globl JaggedPass_Text_JulioIntro
JaggedPass_Text_JulioIntro: @ 0x0821606A
	.string "じてんしゃで いっきに\nおりて くると こわいぃぃ!{EOS}"
	.if (. - JaggedPass_Text_JulioIntro) > 0x1b
	.error "JaggedPass_Text_JulioIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_JulioIntro) < 0x1b
	.space 0x1b - (. - JaggedPass_Text_JulioIntro)
	.endif
	@ data/maps/JaggedPass/scripts.inc:248 JaggedPass_Text_JulioDefeat (+1 aliases)
	.globl JaggedPass_Text_JulioDefeat
JaggedPass_Text_JulioDefeat: @ 0x08216085
	.string "ガッタガタ{EOS}"
	.if (. - JaggedPass_Text_JulioDefeat) > 0x6
	.error "JaggedPass_Text_JulioDefeat may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_JulioDefeat) < 0x6
	.space 0x6 - (. - JaggedPass_Text_JulioDefeat)
	.endif
	@ data/maps/JaggedPass/scripts.inc:251 JaggedPass_Text_JulioPostBattle
	.globl JaggedPass_Text_JulioPostBattle
JaggedPass_Text_JulioPostBattle: @ 0x0821608B
	.string "じてんしゃが おもいっきり\nバウンド して おしりが イタイ……{EOS}"
	.if (. - JaggedPass_Text_JulioPostBattle) > 0x21
	.error "JaggedPass_Text_JulioPostBattle may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_JulioPostBattle) < 0x21
	.space 0x21 - (. - JaggedPass_Text_JulioPostBattle)
	.endif
	@ data/maps/JaggedPass/scripts.inc:255 JaggedPass_Text_AutumnIntro (+1 aliases)
	.globl JaggedPass_Text_AutumnIntro
JaggedPass_Text_AutumnIntro: @ 0x082160AC
	.string "まいにち ここを のぼっているわ\nパワーには じしん あるんだから!{EOS}"
	.if (. - JaggedPass_Text_AutumnIntro) > 0x23
	.error "JaggedPass_Text_AutumnIntro may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_AutumnIntro) < 0x23
	.space 0x23 - (. - JaggedPass_Text_AutumnIntro)
	.endif
	@ data/maps/JaggedPass/scripts.inc:259 JaggedPass_Text_AutumnDefeat (+1 aliases)
	.globl JaggedPass_Text_AutumnDefeat
JaggedPass_Text_AutumnDefeat: @ 0x082160CF
	.string "んー おっかしいな……{EOS}"
	.if (. - JaggedPass_Text_AutumnDefeat) > 0xc
	.error "JaggedPass_Text_AutumnDefeat may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_AutumnDefeat) < 0xc
	.space 0xc - (. - JaggedPass_Text_AutumnDefeat)
	.endif
	@ data/maps/JaggedPass/scripts.inc:263 JaggedPass_Text_AutumnPostBattle
	.globl JaggedPass_Text_AutumnPostBattle
JaggedPass_Text_AutumnPostBattle: @ 0x082160DB
	.string "すこし のぼった ところにある\nおかしな でっぱりは なにかしら……?{EOS}"
	.if (. - JaggedPass_Text_AutumnPostBattle) > 0x24
	.error "JaggedPass_Text_AutumnPostBattle may not grow beyond its original slot"
	.endif
	.if (. - JaggedPass_Text_AutumnPostBattle) < 0x24
	.space 0x24 - (. - JaggedPass_Text_AutumnPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x2160FF, size 0x66
	.byte 0x03, 0x05, 0x61, 0x21, 0x08, 0x00, 0x2B, 0xAA, 0x08, 0x07, 0x00, 0x12, 0x61, 0x21, 0x08, 0x29
	.byte 0xAA, 0x08, 0x02, 0x29, 0xFE, 0x02, 0x2A, 0xFF, 0x02, 0x03, 0x00, 0x6A, 0x5A, 0x2B, 0x1A, 0x01
	.byte 0x06, 0x01, 0x49, 0x61, 0x21, 0x08, 0x0F, 0x00, 0x65, 0x61, 0x21, 0x08, 0x09, 0x04, 0x1A, 0x00
	.byte 0x80, 0xBE, 0x00, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xE0, 0x30, 0x24, 0x08, 0x29, 0x1A, 0x01, 0x6C, 0x02, 0x0F, 0x00, 0xA6, 0x61, 0x21, 0x08
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0xE1, 0x61, 0x21, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x07
	.byte 0x62, 0x21, 0x08, 0x09, 0x02, 0x02
