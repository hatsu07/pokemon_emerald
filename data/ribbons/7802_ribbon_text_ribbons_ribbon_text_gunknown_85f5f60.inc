	@ src/data/text/ribbon_descriptions.h:1 gRibbonDescriptionPart1_Champion
	.globl gRibbonDescriptionPart1_Champion
gRibbonDescriptionPart1_Champion: @ 0x085F5E58
	.string "チャンピオンを たおして{EOS}"
	.if (. - gRibbonDescriptionPart1_Champion) > 0xd
	.error "gRibbonDescriptionPart1_Champion may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Champion) < 0xd
	.space 0xd - (. - gRibbonDescriptionPart1_Champion)
	.endif
	@ src/data/text/ribbon_descriptions.h:2 gRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Champion
gRibbonDescriptionPart2_Champion: @ 0x085F5E65
	.string "でんどういり した きねんリボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Champion) != 0x11
	.error "gRibbonDescriptionPart2_Champion must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E6F
	.set gText_Rom_5F5E6F, gRibbonDescriptionPart2_Champion + 0xa
	.globl gText_Rom_5F5E72
	.set gText_Rom_5F5E72, gRibbonDescriptionPart2_Champion + 0xd
	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_CoolContest
gRibbonDescriptionPart1_CoolContest: @ 0x085F5E76
	.string "かっこよさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_CoolContest) != 0xb
	.error "gRibbonDescriptionPart1_CoolContest must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E7B
	.set gText_Rom_5F5E7B, gRibbonDescriptionPart1_CoolContest + 0x5
	.globl gText_Rom_5F5E7D
	.set gText_Rom_5F5E7D, gRibbonDescriptionPart1_CoolContest + 0x7
	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_BeautyContest
gRibbonDescriptionPart1_BeautyContest: @ 0x085F5E81
	.string "うつくしさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_BeautyContest) != 0xb
	.error "gRibbonDescriptionPart1_BeautyContest must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E86
	.set gText_Rom_5F5E86, gRibbonDescriptionPart1_BeautyContest + 0x5
	.globl gText_Rom_5F5E88
	.set gText_Rom_5F5E88, gRibbonDescriptionPart1_BeautyContest + 0x7
	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_CuteContest
gRibbonDescriptionPart1_CuteContest: @ 0x085F5E8C
	.string "かわいさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_CuteContest) != 0xa
	.error "gRibbonDescriptionPart1_CuteContest must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E90
	.set gText_Rom_5F5E90, gRibbonDescriptionPart1_CuteContest + 0x4
	.globl gText_Rom_5F5E92
	.set gText_Rom_5F5E92, gRibbonDescriptionPart1_CuteContest + 0x6
	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_SmartContest
gRibbonDescriptionPart1_SmartContest: @ 0x085F5E96
	.string "かしこさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_SmartContest) != 0xa
	.error "gRibbonDescriptionPart1_SmartContest must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E9A
	.set gText_Rom_5F5E9A, gRibbonDescriptionPart1_SmartContest + 0x4
	.globl gText_Rom_5F5E9C
	.set gText_Rom_5F5E9C, gRibbonDescriptionPart1_SmartContest + 0x6
	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_ToughContest
gRibbonDescriptionPart1_ToughContest: @ 0x085F5EA0
	.string "たくましさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_ToughContest) != 0xb
	.error "gRibbonDescriptionPart1_ToughContest must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EA5
	.set gText_Rom_5F5EA5, gRibbonDescriptionPart1_ToughContest + 0x5
	.globl gText_Rom_5F5EA7
	.set gText_Rom_5F5EA7, gRibbonDescriptionPart1_ToughContest + 0x7
	@ src/data/text/ribbon_descriptions.h:8 gRibbonDescriptionPart2_NormalRank
	.globl gRibbonDescriptionPart2_NormalRank
gRibbonDescriptionPart2_NormalRank: @ 0x085F5EAB
	.string "ノーマルランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_NormalRank) > 0xf
	.error "gRibbonDescriptionPart2_NormalRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_NormalRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_NormalRank)
	.endif
	@ src/data/text/ribbon_descriptions.h:9 gRibbonDescriptionPart2_SuperRank
	.globl gRibbonDescriptionPart2_SuperRank
gRibbonDescriptionPart2_SuperRank: @ 0x085F5EBA
	.string "スーパーランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_SuperRank) > 0xf
	.error "gRibbonDescriptionPart2_SuperRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_SuperRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_SuperRank)
	.endif
	@ src/data/text/ribbon_descriptions.h:10 gRibbonDescriptionPart2_HyperRank
	.globl gRibbonDescriptionPart2_HyperRank
gRibbonDescriptionPart2_HyperRank: @ 0x085F5EC9
	.string "ハイパーランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_HyperRank) > 0xf
	.error "gRibbonDescriptionPart2_HyperRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_HyperRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_HyperRank)
	.endif
	@ src/data/text/ribbon_descriptions.h:11 gRibbonDescriptionPart2_MasterRank
	.globl gRibbonDescriptionPart2_MasterRank
gRibbonDescriptionPart2_MasterRank: @ 0x085F5ED8
	.string "マスターランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_MasterRank) > 0xf
	.error "gRibbonDescriptionPart2_MasterRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_MasterRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_MasterRank)
	.endif
	@ src/data/text/ribbon_descriptions.h:12 gRibbonDescriptionPart1_Winning
	.globl gRibbonDescriptionPart1_Winning
gRibbonDescriptionPart1_Winning: @ 0x085F5EE7
	.string "バトルタワー レベル50を{EOS}"
	.if (. - gRibbonDescriptionPart1_Winning) > 0xe
	.error "gRibbonDescriptionPart1_Winning may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Winning) < 0xe
	.space 0xe - (. - gRibbonDescriptionPart1_Winning)
	.endif
	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Winning
gRibbonDescriptionPart2_Winning: @ 0x085F5EF5
	.string "かちぬいた きねんのリボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Winning) != 0xe
	.error "gRibbonDescriptionPart2_Winning must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EFF
	.set gText_Rom_5F5EFF, gRibbonDescriptionPart2_Winning + 0xa
	@ Decoded text from ROM range: offset=0x5F5F03, size=0x10
	.string "バトルタワー　オープンレベルを{EOS}"
	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	@ SEMANTIC_ROLE: gRibbonDescriptionPart2_Victory (RIBBON_VICTORY_PART2_SLOT; duplicate provenance gRibbonDescriptionPart2_Winning)
	.globl gRibbonDescriptionPart2_Victory
gRibbonDescriptionPart2_Victory: @ 0x085F5F13
	.string "かちぬいた きねんのリボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Victory) != 0xe
	.error "gRibbonDescriptionPart2_Victory must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F1D
	.set gText_Rom_5F5F1D, gRibbonDescriptionPart2_Victory + 0xa
	@ src/data/text/ribbon_descriptions.h:16 gRibbonDescriptionPart1_Artist
	.globl gRibbonDescriptionPart1_Artist
gRibbonDescriptionPart1_Artist: @ 0x085F5F21
	.string "ごうかな にがおえの モデルに{EOS}"
	.if (. - gRibbonDescriptionPart1_Artist) > 0x10
	.error "gRibbonDescriptionPart1_Artist may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Artist) < 0x10
	.space 0x10 - (. - gRibbonDescriptionPart1_Artist)
	.endif
	@ src/data/text/ribbon_descriptions.h:17 gRibbonDescriptionPart2_Artist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Artist
gRibbonDescriptionPart2_Artist: @ 0x085F5F31
	.string "なった きねんの リボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Artist) != 0xd
	.error "gRibbonDescriptionPart2_Artist must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F3A
	.set gText_Rom_5F5F3A, gRibbonDescriptionPart2_Artist + 0x9
	@ src/data/text/ribbon_descriptions.h:18 gRibbonDescriptionPart1_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_Effort
gRibbonDescriptionPart1_Effort: @ 0x085F5F3E
	.string "たくさん どりょく している{EOS}"
	.if (. - gRibbonDescriptionPart1_Effort) != 0xf
	.error "gRibbonDescriptionPart1_Effort must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F49
	.set gText_Rom_5F5F49, gRibbonDescriptionPart1_Effort + 0xb
	@ src/data/text/ribbon_descriptions.h:19 gRibbonDescriptionPart2_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Effort
gRibbonDescriptionPart2_Effort: @ 0x085F5F4D
	.string "ポケモンに おくられる リボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Effort) != 0x10
	.error "gRibbonDescriptionPart2_Effort must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F59
	.set gText_Rom_5F5F59, gRibbonDescriptionPart2_Effort + 0xc
	.space 0x3, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F5F60: pokenav_unk_10.s: sub_081D05AC
	.globl gPokenavUnk10Data_085F5F60
gPokenavUnk10Data_085F5F60: @ 0x085F5F60
	@ confirmed contiguous ROM pointer table: 50 entries from this address
sPointerTable_085F5F60:
	@ analyzed canonical ROM range 0x085F5F60-0x085F6027
	@ pointer/nullable table
	.4byte gRibbonDescriptionPart1_Champion @ +0x0
	.4byte gRibbonDescriptionPart2_Champion @ +0x4
	.4byte gRibbonDescriptionPart1_CoolContest @ +0x8
	.4byte gRibbonDescriptionPart2_NormalRank @ +0xC
	.4byte gRibbonDescriptionPart1_CoolContest @ +0x10
	.4byte gRibbonDescriptionPart2_SuperRank @ +0x14
	.4byte gRibbonDescriptionPart1_CoolContest @ +0x18
	.4byte gRibbonDescriptionPart2_HyperRank @ +0x1C
	.4byte gRibbonDescriptionPart1_CoolContest @ +0x20
	.4byte gRibbonDescriptionPart2_MasterRank @ +0x24
	.4byte gRibbonDescriptionPart1_BeautyContest @ +0x28
	.4byte gRibbonDescriptionPart2_NormalRank @ +0x2C
	.4byte gRibbonDescriptionPart1_BeautyContest @ +0x30
	.4byte gRibbonDescriptionPart2_SuperRank @ +0x34
	.4byte gRibbonDescriptionPart1_BeautyContest @ +0x38
	.4byte gRibbonDescriptionPart2_HyperRank @ +0x3C
	.4byte gRibbonDescriptionPart1_BeautyContest @ +0x40
	.4byte gRibbonDescriptionPart2_MasterRank @ +0x44
	.4byte gRibbonDescriptionPart1_CuteContest @ +0x48
	.4byte gRibbonDescriptionPart2_NormalRank @ +0x4C
	.4byte gRibbonDescriptionPart1_CuteContest @ +0x50
	.4byte gRibbonDescriptionPart2_SuperRank @ +0x54
	.4byte gRibbonDescriptionPart1_CuteContest @ +0x58
	.4byte gRibbonDescriptionPart2_HyperRank @ +0x5C
	.4byte gRibbonDescriptionPart1_CuteContest @ +0x60
	.4byte gRibbonDescriptionPart2_MasterRank @ +0x64
	.4byte gRibbonDescriptionPart1_SmartContest @ +0x68
	.4byte gRibbonDescriptionPart2_NormalRank @ +0x6C
	.4byte gRibbonDescriptionPart1_SmartContest @ +0x70
	.4byte gRibbonDescriptionPart2_SuperRank @ +0x74
	.4byte gRibbonDescriptionPart1_SmartContest @ +0x78
	.4byte gRibbonDescriptionPart2_HyperRank @ +0x7C
	.4byte gRibbonDescriptionPart1_SmartContest @ +0x80
	.4byte gRibbonDescriptionPart2_MasterRank @ +0x84
	.4byte gRibbonDescriptionPart1_ToughContest @ +0x88
	.4byte gRibbonDescriptionPart2_NormalRank @ +0x8C
	.4byte gRibbonDescriptionPart1_ToughContest @ +0x90
	.4byte gRibbonDescriptionPart2_SuperRank @ +0x94
	.4byte gRibbonDescriptionPart1_ToughContest @ +0x98
	.4byte gRibbonDescriptionPart2_HyperRank @ +0x9C
	.4byte gRibbonDescriptionPart1_ToughContest @ +0xA0
	.4byte gRibbonDescriptionPart2_MasterRank @ +0xA4
	.4byte gRibbonDescriptionPart1_Winning @ +0xA8
	.4byte gRibbonDescriptionPart2_Winning @ +0xAC
	.4byte gRibbonDescriptionPart2_Winning + 0xE @ +0xB0
	.4byte gRibbonDescriptionPart2_Victory @ +0xB4
	.4byte gRibbonDescriptionPart1_Artist @ +0xB8
	.4byte gRibbonDescriptionPart2_Artist @ +0xBC
	.4byte gRibbonDescriptionPart1_Effort @ +0xC0
	.4byte gRibbonDescriptionPart2_Effort @ +0xC4
