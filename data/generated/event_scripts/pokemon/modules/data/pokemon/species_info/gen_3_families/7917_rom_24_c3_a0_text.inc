	@ asm/contest_painting.s:452 PrintContestPaintingCaption
	.globl gText_Rom_24C1F5
gText_Rom_24C1F5: @ 0x0824C1F5
	.string "{0xFD}{0x02}\n{0xFD}{0x03}　の　{0xFD}{0x04}{EOS}"
	.if (. - gText_Rom_24C1F5) > 0xb
	.error "gText_Rom_24C1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C1F5) < 0xb
	.space 0xb - (. - gText_Rom_24C1F5)
	.endif
	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Contest_Copy_EasyChat
gEasyChatWord_Contest_Copy_EasyChat: @ 0x0824C200
	.string "コンテスト{EOS}"
	.if (. - gEasyChatWord_Contest_Copy_EasyChat) != 0x6
	.error "gEasyChatWord_Contest_Copy_EasyChat must retain its original byte length"
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C206
gText_Rom_24C206: @ 0x0824C206
	.string "ノーマルランク{EOS}"
	.if (. - gText_Rom_24C206) != 0x8
	.error "gText_Rom_24C206 must retain its original byte length"
	.endif
	.globl gText_Rom_24C20A
	.set gText_Rom_24C20A, gText_Rom_24C206 + 0x4
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C20E
gText_Rom_24C20E: @ 0x0824C20E
	.string "スーパーランク{EOS}"
	.if (. - gText_Rom_24C20E) != 0x8
	.error "gText_Rom_24C20E must retain its original byte length"
	.endif
	.globl gText_Rom_24C212
	.set gText_Rom_24C212, gText_Rom_24C20E + 0x4
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C216
gText_Rom_24C216: @ 0x0824C216
	.string "ハイパーランク{EOS}"
	.if (. - gText_Rom_24C216) != 0x8
	.error "gText_Rom_24C216 must retain its original byte length"
	.endif
	.globl gText_Rom_24C21A
	.set gText_Rom_24C21A, gText_Rom_24C216 + 0x4
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C21E
gText_Rom_24C21E: @ 0x0824C21E
	.string "マスターランク{EOS}"
	.if (. - gText_Rom_24C21E) != 0x8
	.error "gText_Rom_24C21E must retain its original byte length"
	.endif
	.globl gText_Rom_24C222
	.set gText_Rom_24C222, gText_Rom_24C21E + 0x4
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C226
gText_Rom_24C226: @ 0x0824C226
	.string "つうしん{EOS}"
	.if (. - gText_Rom_24C226) > 0x5
	.error "gText_Rom_24C226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C226) < 0x5
	.space 0x5 - (. - gText_Rom_24C226)
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C22B
gText_Rom_24C22B: @ 0x0824C22B
	.string "かっこよさ{EOS}"
	.if (. - gText_Rom_24C22B) > 0x6
	.error "gText_Rom_24C22B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C22B) < 0x6
	.space 0x6 - (. - gText_Rom_24C22B)
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C231
gText_Rom_24C231: @ 0x0824C231
	.string "うつくしさ{EOS}"
	.if (. - gText_Rom_24C231) > 0x6
	.error "gText_Rom_24C231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C231) < 0x6
	.space 0x6 - (. - gText_Rom_24C231)
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C237
gText_Rom_24C237: @ 0x0824C237
	.string "かわいさ{EOS}"
	.if (. - gText_Rom_24C237) > 0x5
	.error "gText_Rom_24C237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C237) < 0x5
	.space 0x5 - (. - gText_Rom_24C237)
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C23C
gText_Rom_24C23C: @ 0x0824C23C
	.string "かしこさ{EOS}"
	.if (. - gText_Rom_24C23C) > 0x5
	.error "gText_Rom_24C23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C23C) < 0x5
	.space 0x5 - (. - gText_Rom_24C23C)
	.endif
	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C241
gText_Rom_24C241: @ 0x0824C241
	.string "たくましさ{EOS}"
	.if (. - gText_Rom_24C241) > 0x6
	.error "gText_Rom_24C241 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C241) < 0x6
	.space 0x6 - (. - gText_Rom_24C241)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C247
gText_Rom_24C247: @ 0x0824C247
	.string "スーパー　クール\nノンストップ　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C247) > 0x13
	.error "gText_Rom_24C247 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C247) < 0x13
	.space 0x13 - (. - gText_Rom_24C247)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C25A
gText_Rom_24C25A: @ 0x0824C25A
	.string "グッドルッキン　ポケモン　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C25A) > 0x10
	.error "gText_Rom_24C25A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C25A) < 0x10
	.space 0x10 - (. - gText_Rom_24C25A)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C26A
gText_Rom_24C26A: @ 0x0824C26A
	.string "マーベラス　ワンダフル\nグレート　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C26A) > 0x14
	.error "gText_Rom_24C26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C26A) < 0x14
	.space 0x14 - (. - gText_Rom_24C26A)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C27E
gText_Rom_24C27E: @ 0x0824C27E
	.string "こんせいき　さいごの　ビーナス\nビューティー　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C27E) > 0x1a
	.error "gText_Rom_24C27E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C27E) < 0x1a
	.space 0x1a - (. - gText_Rom_24C27E)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C298
gText_Rom_24C298: @ 0x0824C298
	.string "{0xFD}{0x02}　クンの　マブシイ\nキラキラ　スマイル{EOS}"
	.if (. - gText_Rom_24C298) > 0x16
	.error "gText_Rom_24C298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C298) < 0x16
	.space 0x16 - (. - gText_Rom_24C298)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2AE
gText_Rom_24C2AE: @ 0x0824C2AE
	.string "ポケモンセンター　の\nスーパー　アイドル　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C2AE) > 0x18
	.error "gText_Rom_24C2AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2AE) < 0x18
	.space 0x18 - (. - gText_Rom_24C2AE)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2C6
gText_Rom_24C2C6: @ 0x0824C2C6
	.string "ラブリー　スウィート　{0xFD}{0x02}　ちゃん{EOS}"
	.if (. - gText_Rom_24C2C6) != 0x12
	.error "gText_Rom_24C2C6 must retain its original byte length"
	.endif
	.globl gText_Rom_24C2D4
	.set gText_Rom_24C2D4, gText_Rom_24C2C6 + 0xe
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2D8
gText_Rom_24C2D8: @ 0x0824C2D8
	.string "プリティー　{0xFD}{0x02}たんの\nおすまし　ショット{EOS}"
	.if (. - gText_Rom_24C2D8) > 0x16
	.error "gText_Rom_24C2D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2D8) < 0x16
	.space 0x16 - (. - gText_Rom_24C2D8)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2EE
gText_Rom_24C2EE: @ 0x0824C2EE
	.string "こっち　むいて！\nキュート　ポケモン　{0xFD}{0x02}　ちゃん{EOS}"
	.if (. - gText_Rom_24C2EE) != 0x1a
	.error "gText_Rom_24C2EE must retain its original byte length"
	.endif
	.globl gText_Rom_24C304
	.set gText_Rom_24C304, gText_Rom_24C2EE + 0x16
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C308
gText_Rom_24C308: @ 0x0824C308
	.string "かしこさ　マエストロ\nワイズ　ポケモン　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C308) > 0x17
	.error "gText_Rom_24C308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C308) < 0x17
	.space 0x17 - (. - gText_Rom_24C308)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C31F
gText_Rom_24C31F: @ 0x0824C31F
	.string "えらばれた　ポケモン…\nポケモンの　なかの　ポケモン　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C31F) > 0x1e
	.error "gText_Rom_24C31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C31F) < 0x1e
	.space 0x1e - (. - gText_Rom_24C31F)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C33D
gText_Rom_24C33D: @ 0x0824C33D
	.string "エクセレント　{0xFD}{0x02}　の\nゆうがな　ひととき{EOS}"
	.if (. - gText_Rom_24C33D) > 0x16
	.error "gText_Rom_24C33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C33D) < 0x16
	.space 0x16 - (. - gText_Rom_24C33D)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C353
gText_Rom_24C353: @ 0x0824C353
	.string "パワフル　マッスル\nハッスル　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C353) > 0x12
	.error "gText_Rom_24C353 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C353) < 0x12
	.space 0x12 - (. - gText_Rom_24C353)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C365
gText_Rom_24C365: @ 0x0824C365
	.string "ストロング　ストロンガー\nストロンゲスト　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_24C365) > 0x18
	.error "gText_Rom_24C365 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C365) < 0x18
	.space 0x18 - (. - gText_Rom_24C365)
	.endif
	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C37D
gText_Rom_24C37D: @ 0x0824C37D
	.string "タフネス　マイティー\nハイパーポケモン　{0xFD}{0x02}！{EOS}"
	.if (. - gText_Rom_24C37D) > 0x18
	.error "gText_Rom_24C37D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C37D) < 0x18
	.space 0x18 - (. - gText_Rom_24C37D)
	.endif
	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gText_Rom_24C395
gText_Rom_24C395: @ 0x0824C395
	.string "ナゾノクサ{EOS}"
	.if (. - gText_Rom_24C395) > 0x6
	.error "gText_Rom_24C395 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C395) < 0x6
	.space 0x6 - (. - gText_Rom_24C395)
	.endif
	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_24C39B
gText_Rom_24C39B: @ 0x0824C39B
	.string "ポチエナ{EOS}"
	.if (. - gText_Rom_24C39B) > 0x5
	.error "gText_Rom_24C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C39B) < 0x5
	.space 0x5 - (. - gText_Rom_24C39B)
	.endif
	@ src/data/pokemon/species_info/gen_3_families.h:2382 gen_3_families_line_2382 (+1 aliases)
	.globl gText_Rom_24C3A0
gText_Rom_24C3A0: @ 0x0824C3A0
	.string "スバメ{EOS}"
	.if (. - gText_Rom_24C3A0) > 0x4
	.error "gText_Rom_24C3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3A0) < 0x4
	.space 0x4 - (. - gText_Rom_24C3A0)
	.endif

