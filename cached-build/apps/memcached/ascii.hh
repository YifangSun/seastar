
#line 1 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
/*
* This file is open source software, licensed to you under the terms
* of the Apache License, Version 2.0 (the "License").  See the NOTICE file
* distributed with this work for additional information regarding copyright
* ownership.  You may not use this file except in compliance with the License.
*
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*/
/*
* Copyright (C) 2014 Cloudius Systems, Ltd.
*/

#include <seastar/core/ragel.hh>
#include "memcached.hh"
#include <memory>
#include <algorithm>
#include <functional>

using namespace seastar;


#line 95 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"


class memcache_ascii_parser : public ragel_parser_base<memcache_ascii_parser> {
	
	static const int start = 1;
	static const int error = 0;
	
	static const int en_blob = 195;
	static const int en_main = 1;
	
	
	
	
	
	
	
	
	
	
	#line 99 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
	
	public:
	enum class state {
		error,
		eof,
		cmd_set,
		cmd_cas,
		cmd_add,
		cmd_replace,
		cmd_get,
		cmd_gets,
		cmd_delete,
		cmd_flush_all,
		cmd_version,
		cmd_stats,
		cmd_stats_hash,
		cmd_incr,
		cmd_decr,
	};
	state _state;
	uint32_t _u32;
	uint64_t _u64;
	memcache::item_key _key;
	sstring _flags_str;
	uint32_t _expiration;
	uint32_t _size;
	sstring _size_str;
	uint32_t _size_left;
	uint64_t _version;
	sstring _blob;
	bool _noreply;
	std::vector<memcache::item_key> _keys;
	public:
	void init() {
		init_base();
		_state = state::error;
		_keys.clear();
		
		{
			_fsm_cs = (int)start;
			_fsm_top = 0;
		}
		
		#line 136 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
		
	}
	
	char* parse(char* p, char* pe, char* eof) {
		sstring_builder::guard g(_builder, p, pe);
		auto str = [this, &g, &p] { g.mark_end(p); return get_str(); };
		#ifdef __clang__
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Wmisleading-indentation"
		#endif
		
		{
			if ( p == pe )
			goto _test_eof;
			goto _resume;
			
			_again:
			switch ( _fsm_cs ) {
				case 1: goto st1;
				case 0: goto st0;
				case 2: goto st2;
				case 3: goto st3;
				case 4: goto st4;
				case 5: goto st5;
				case 6: goto st6;
				case 7: goto st7;
				case 8: goto st8;
				case 9: goto st9;
				case 10: goto st10;
				case 11: goto st11;
				case 12: goto st12;
				case 13: goto st13;
				case 14: goto st14;
				case 15: goto st15;
				case 196: goto st196;
				case 16: goto st16;
				case 17: goto st17;
				case 18: goto st18;
				case 19: goto st19;
				case 20: goto st20;
				case 21: goto st21;
				case 22: goto st22;
				case 23: goto st23;
				case 24: goto st24;
				case 25: goto st25;
				case 26: goto st26;
				case 27: goto st27;
				case 28: goto st28;
				case 29: goto st29;
				case 30: goto st30;
				case 31: goto st31;
				case 32: goto st32;
				case 33: goto st33;
				case 34: goto st34;
				case 35: goto st35;
				case 36: goto st36;
				case 37: goto st37;
				case 38: goto st38;
				case 39: goto st39;
				case 40: goto st40;
				case 41: goto st41;
				case 42: goto st42;
				case 43: goto st43;
				case 44: goto st44;
				case 45: goto st45;
				case 46: goto st46;
				case 47: goto st47;
				case 48: goto st48;
				case 49: goto st49;
				case 50: goto st50;
				case 51: goto st51;
				case 52: goto st52;
				case 53: goto st53;
				case 54: goto st54;
				case 55: goto st55;
				case 56: goto st56;
				case 57: goto st57;
				case 58: goto st58;
				case 59: goto st59;
				case 60: goto st60;
				case 61: goto st61;
				case 62: goto st62;
				case 63: goto st63;
				case 64: goto st64;
				case 65: goto st65;
				case 66: goto st66;
				case 67: goto st67;
				case 68: goto st68;
				case 69: goto st69;
				case 70: goto st70;
				case 71: goto st71;
				case 197: goto st197;
				case 72: goto st72;
				case 73: goto st73;
				case 74: goto st74;
				case 75: goto st75;
				case 76: goto st76;
				case 77: goto st77;
				case 78: goto st78;
				case 79: goto st79;
				case 80: goto st80;
				case 81: goto st81;
				case 82: goto st82;
				case 83: goto st83;
				case 84: goto st84;
				case 85: goto st85;
				case 86: goto st86;
				case 87: goto st87;
				case 88: goto st88;
				case 89: goto st89;
				case 90: goto st90;
				case 91: goto st91;
				case 92: goto st92;
				case 93: goto st93;
				case 94: goto st94;
				case 95: goto st95;
				case 96: goto st96;
				case 97: goto st97;
				case 98: goto st98;
				case 99: goto st99;
				case 100: goto st100;
				case 101: goto st101;
				case 102: goto st102;
				case 103: goto st103;
				case 104: goto st104;
				case 105: goto st105;
				case 106: goto st106;
				case 198: goto st198;
				case 107: goto st107;
				case 108: goto st108;
				case 109: goto st109;
				case 110: goto st110;
				case 199: goto st199;
				case 111: goto st111;
				case 112: goto st112;
				case 113: goto st113;
				case 114: goto st114;
				case 115: goto st115;
				case 116: goto st116;
				case 117: goto st117;
				case 118: goto st118;
				case 119: goto st119;
				case 120: goto st120;
				case 121: goto st121;
				case 122: goto st122;
				case 123: goto st123;
				case 124: goto st124;
				case 125: goto st125;
				case 126: goto st126;
				case 127: goto st127;
				case 128: goto st128;
				case 129: goto st129;
				case 130: goto st130;
				case 131: goto st131;
				case 132: goto st132;
				case 133: goto st133;
				case 134: goto st134;
				case 135: goto st135;
				case 136: goto st136;
				case 137: goto st137;
				case 138: goto st138;
				case 139: goto st139;
				case 140: goto st140;
				case 141: goto st141;
				case 142: goto st142;
				case 143: goto st143;
				case 144: goto st144;
				case 145: goto st145;
				case 146: goto st146;
				case 147: goto st147;
				case 148: goto st148;
				case 149: goto st149;
				case 150: goto st150;
				case 151: goto st151;
				case 152: goto st152;
				case 153: goto st153;
				case 154: goto st154;
				case 155: goto st155;
				case 156: goto st156;
				case 157: goto st157;
				case 158: goto st158;
				case 159: goto st159;
				case 160: goto st160;
				case 161: goto st161;
				case 162: goto st162;
				case 163: goto st163;
				case 164: goto st164;
				case 165: goto st165;
				case 166: goto st166;
				case 167: goto st167;
				case 168: goto st168;
				case 169: goto st169;
				case 170: goto st170;
				case 171: goto st171;
				case 172: goto st172;
				case 173: goto st173;
				case 174: goto st174;
				case 175: goto st175;
				case 176: goto st176;
				case 177: goto st177;
				case 178: goto st178;
				case 179: goto st179;
				case 180: goto st180;
				case 181: goto st181;
				case 182: goto st182;
				case 183: goto st183;
				case 184: goto st184;
				case 185: goto st185;
				case 186: goto st186;
				case 187: goto st187;
				case 188: goto st188;
				case 189: goto st189;
				case 190: goto st190;
				case 191: goto st191;
				case 192: goto st192;
				case 193: goto st193;
				case 194: goto st194;
				case 195: goto st195;
				case 200: goto st200;
			}
			
			_resume:
			switch ( _fsm_cs )
			{
				case 1:
				goto st_case_1;
				case 0:
				goto st_case_0;
				case 2:
				goto st_case_2;
				case 3:
				goto st_case_3;
				case 4:
				goto st_case_4;
				case 5:
				goto st_case_5;
				case 6:
				goto st_case_6;
				case 7:
				goto st_case_7;
				case 8:
				goto st_case_8;
				case 9:
				goto st_case_9;
				case 10:
				goto st_case_10;
				case 11:
				goto st_case_11;
				case 12:
				goto st_case_12;
				case 13:
				goto st_case_13;
				case 14:
				goto st_case_14;
				case 15:
				goto st_case_15;
				case 196:
				goto st_case_196;
				case 16:
				goto st_case_16;
				case 17:
				goto st_case_17;
				case 18:
				goto st_case_18;
				case 19:
				goto st_case_19;
				case 20:
				goto st_case_20;
				case 21:
				goto st_case_21;
				case 22:
				goto st_case_22;
				case 23:
				goto st_case_23;
				case 24:
				goto st_case_24;
				case 25:
				goto st_case_25;
				case 26:
				goto st_case_26;
				case 27:
				goto st_case_27;
				case 28:
				goto st_case_28;
				case 29:
				goto st_case_29;
				case 30:
				goto st_case_30;
				case 31:
				goto st_case_31;
				case 32:
				goto st_case_32;
				case 33:
				goto st_case_33;
				case 34:
				goto st_case_34;
				case 35:
				goto st_case_35;
				case 36:
				goto st_case_36;
				case 37:
				goto st_case_37;
				case 38:
				goto st_case_38;
				case 39:
				goto st_case_39;
				case 40:
				goto st_case_40;
				case 41:
				goto st_case_41;
				case 42:
				goto st_case_42;
				case 43:
				goto st_case_43;
				case 44:
				goto st_case_44;
				case 45:
				goto st_case_45;
				case 46:
				goto st_case_46;
				case 47:
				goto st_case_47;
				case 48:
				goto st_case_48;
				case 49:
				goto st_case_49;
				case 50:
				goto st_case_50;
				case 51:
				goto st_case_51;
				case 52:
				goto st_case_52;
				case 53:
				goto st_case_53;
				case 54:
				goto st_case_54;
				case 55:
				goto st_case_55;
				case 56:
				goto st_case_56;
				case 57:
				goto st_case_57;
				case 58:
				goto st_case_58;
				case 59:
				goto st_case_59;
				case 60:
				goto st_case_60;
				case 61:
				goto st_case_61;
				case 62:
				goto st_case_62;
				case 63:
				goto st_case_63;
				case 64:
				goto st_case_64;
				case 65:
				goto st_case_65;
				case 66:
				goto st_case_66;
				case 67:
				goto st_case_67;
				case 68:
				goto st_case_68;
				case 69:
				goto st_case_69;
				case 70:
				goto st_case_70;
				case 71:
				goto st_case_71;
				case 197:
				goto st_case_197;
				case 72:
				goto st_case_72;
				case 73:
				goto st_case_73;
				case 74:
				goto st_case_74;
				case 75:
				goto st_case_75;
				case 76:
				goto st_case_76;
				case 77:
				goto st_case_77;
				case 78:
				goto st_case_78;
				case 79:
				goto st_case_79;
				case 80:
				goto st_case_80;
				case 81:
				goto st_case_81;
				case 82:
				goto st_case_82;
				case 83:
				goto st_case_83;
				case 84:
				goto st_case_84;
				case 85:
				goto st_case_85;
				case 86:
				goto st_case_86;
				case 87:
				goto st_case_87;
				case 88:
				goto st_case_88;
				case 89:
				goto st_case_89;
				case 90:
				goto st_case_90;
				case 91:
				goto st_case_91;
				case 92:
				goto st_case_92;
				case 93:
				goto st_case_93;
				case 94:
				goto st_case_94;
				case 95:
				goto st_case_95;
				case 96:
				goto st_case_96;
				case 97:
				goto st_case_97;
				case 98:
				goto st_case_98;
				case 99:
				goto st_case_99;
				case 100:
				goto st_case_100;
				case 101:
				goto st_case_101;
				case 102:
				goto st_case_102;
				case 103:
				goto st_case_103;
				case 104:
				goto st_case_104;
				case 105:
				goto st_case_105;
				case 106:
				goto st_case_106;
				case 198:
				goto st_case_198;
				case 107:
				goto st_case_107;
				case 108:
				goto st_case_108;
				case 109:
				goto st_case_109;
				case 110:
				goto st_case_110;
				case 199:
				goto st_case_199;
				case 111:
				goto st_case_111;
				case 112:
				goto st_case_112;
				case 113:
				goto st_case_113;
				case 114:
				goto st_case_114;
				case 115:
				goto st_case_115;
				case 116:
				goto st_case_116;
				case 117:
				goto st_case_117;
				case 118:
				goto st_case_118;
				case 119:
				goto st_case_119;
				case 120:
				goto st_case_120;
				case 121:
				goto st_case_121;
				case 122:
				goto st_case_122;
				case 123:
				goto st_case_123;
				case 124:
				goto st_case_124;
				case 125:
				goto st_case_125;
				case 126:
				goto st_case_126;
				case 127:
				goto st_case_127;
				case 128:
				goto st_case_128;
				case 129:
				goto st_case_129;
				case 130:
				goto st_case_130;
				case 131:
				goto st_case_131;
				case 132:
				goto st_case_132;
				case 133:
				goto st_case_133;
				case 134:
				goto st_case_134;
				case 135:
				goto st_case_135;
				case 136:
				goto st_case_136;
				case 137:
				goto st_case_137;
				case 138:
				goto st_case_138;
				case 139:
				goto st_case_139;
				case 140:
				goto st_case_140;
				case 141:
				goto st_case_141;
				case 142:
				goto st_case_142;
				case 143:
				goto st_case_143;
				case 144:
				goto st_case_144;
				case 145:
				goto st_case_145;
				case 146:
				goto st_case_146;
				case 147:
				goto st_case_147;
				case 148:
				goto st_case_148;
				case 149:
				goto st_case_149;
				case 150:
				goto st_case_150;
				case 151:
				goto st_case_151;
				case 152:
				goto st_case_152;
				case 153:
				goto st_case_153;
				case 154:
				goto st_case_154;
				case 155:
				goto st_case_155;
				case 156:
				goto st_case_156;
				case 157:
				goto st_case_157;
				case 158:
				goto st_case_158;
				case 159:
				goto st_case_159;
				case 160:
				goto st_case_160;
				case 161:
				goto st_case_161;
				case 162:
				goto st_case_162;
				case 163:
				goto st_case_163;
				case 164:
				goto st_case_164;
				case 165:
				goto st_case_165;
				case 166:
				goto st_case_166;
				case 167:
				goto st_case_167;
				case 168:
				goto st_case_168;
				case 169:
				goto st_case_169;
				case 170:
				goto st_case_170;
				case 171:
				goto st_case_171;
				case 172:
				goto st_case_172;
				case 173:
				goto st_case_173;
				case 174:
				goto st_case_174;
				case 175:
				goto st_case_175;
				case 176:
				goto st_case_176;
				case 177:
				goto st_case_177;
				case 178:
				goto st_case_178;
				case 179:
				goto st_case_179;
				case 180:
				goto st_case_180;
				case 181:
				goto st_case_181;
				case 182:
				goto st_case_182;
				case 183:
				goto st_case_183;
				case 184:
				goto st_case_184;
				case 185:
				goto st_case_185;
				case 186:
				goto st_case_186;
				case 187:
				goto st_case_187;
				case 188:
				goto st_case_188;
				case 189:
				goto st_case_189;
				case 190:
				goto st_case_190;
				case 191:
				goto st_case_191;
				case 192:
				goto st_case_192;
				case 193:
				goto st_case_193;
				case 194:
				goto st_case_194;
				case 195:
				goto st_case_195;
				case 200:
				goto st_case_200;
			}
			goto st_out;
			st1:
			p+= 1;
			if ( p == pe )
			goto _test_eof1;
			st_case_1:
			switch( ( (*( p))) ) {
				case 97: {
					goto st2;
				}
				case 99: {
					goto st24;
				}
				case 100: {
					goto st48;
				}
				case 102: {
					goto st81;
				}
				case 103: {
					goto st101;
				}
				case 105: {
					goto st111;
				}
				case 114: {
					goto st128;
				}
				case 115: {
					goto st154;
				}
				case 118: {
					goto st187;
				}
			}
			{
				goto st0;
			}
			st_case_0:
			st0:
			_fsm_cs = 0;
			goto _out;
			st2:
			p+= 1;
			if ( p == pe )
			goto _test_eof2;
			st_case_2:
			if ( ( (*( p))) == 100 ) {
				goto st3;
			}
			{
				goto st0;
			}
			st3:
			p+= 1;
			if ( p == pe )
			goto _test_eof3;
			st_case_3:
			if ( ( (*( p))) == 100 ) {
				goto st4;
			}
			{
				goto st0;
			}
			st4:
			p+= 1;
			if ( p == pe )
			goto _test_eof4;
			st_case_4:
			if ( ( (*( p))) == 32 ) {
				goto st5;
			}
			{
				goto st0;
			}
			st5:
			p+= 1;
			if ( p == pe )
			goto _test_eof5;
			st_case_5:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr13;
			}
			ctr13:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st6;
			st6:
			p+= 1;
			if ( p == pe )
			goto _test_eof6;
			st_case_6:
			if ( ( (*( p))) == 32 ) {
				goto ctr15;
			}
			{
				goto st6;
			}
			ctr15:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st7;
			st7:
			p+= 1;
			if ( p == pe )
			goto _test_eof7;
			st_case_7:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr16;
			}
			{
				goto st0;
			}
			ctr16:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st8;
			st8:
			p+= 1;
			if ( p == pe )
			goto _test_eof8;
			st_case_8:
			if ( ( (*( p))) == 32 ) {
				goto ctr17;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto st8;
			}
			{
				goto st0;
			}
			ctr17:
			{
				#line 62 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_flags_str = str(); }
			
			goto st9;
			st9:
			p+= 1;
			if ( p == pe )
			goto _test_eof9;
			st_case_9:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr19;
			}
			{
				goto st0;
			}
			ctr19:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st10;
			ctr21:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st10;
			st10:
			p+= 1;
			if ( p == pe )
			goto _test_eof10;
			st_case_10:
			if ( ( (*( p))) == 32 ) {
				goto ctr20;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr21;
			}
			{
				goto st0;
			}
			ctr20:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			
			goto st11;
			st11:
			p+= 1;
			if ( p == pe )
			goto _test_eof11;
			st_case_11:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr22;
			}
			{
				goto st0;
			}
			ctr25:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st12;
			ctr22:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st12;
			st12:
			p+= 1;
			if ( p == pe )
			goto _test_eof12;
			st_case_12:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr23;
				}
				case 32: {
					goto ctr24;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr25;
			}
			{
				goto st0;
			}
			ctr23:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st13;
			st13:
			p+= 1;
			if ( p == pe )
			goto _test_eof13;
			st_case_13:
			if ( ( (*( p))) == 10 ) {
				goto ctr26;
			}
			{
				goto st0;
			}
			ctr26:
			{
				#line 70 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				{{
						#line 87 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
						
						prepush();
					}_fsm_stack[_fsm_top] = 14; _fsm_top+= 1; goto st195;}}
			
			goto st14;
			st14:
			p+= 1;
			if ( p == pe )
			goto _test_eof14;
			st_case_14:
			if ( ( (*( p))) == 13 ) {
				goto st15;
			}
			{
				goto st0;
			}
			st15:
			p+= 1;
			if ( p == pe )
			goto _test_eof15;
			st_case_15:
			if ( ( (*( p))) == 10 ) {
				goto ctr28;
			}
			{
				goto st0;
			}
			ctr28:
			{
				#line 72 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_add; }
			
			goto st196;
			ctr58:
			{
				#line 74 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_cas; }
			
			goto st196;
			ctr79:
			{
				#line 83 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_decr; }
			
			goto st196;
			ctr105:
			{
				#line 77 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_delete; }
			
			goto st196;
			ctr116:
			{
				#line 78 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_flush_all; }
			
			goto st196;
			ctr155:
			{
				#line 82 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_incr; }
			
			goto st196;
			ctr186:
			{
				#line 73 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_replace; }
			
			goto st196;
			ctr214:
			{
				#line 71 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_set; }
			
			goto st196;
			ctr228:
			{
				#line 80 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_stats; }
			
			goto st196;
			ctr234:
			{
				#line 81 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_stats_hash; }
			
			goto st196;
			ctr242:
			{
				#line 79 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_version; }
			
			goto st196;
			st196:
			p+= 1;
			if ( p == pe )
			goto _test_eof196;
			st_case_196:
			{
				goto st0;
			}
			ctr24:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st16;
			st16:
			p+= 1;
			if ( p == pe )
			goto _test_eof16;
			st_case_16:
			if ( ( (*( p))) == 110 ) {
				goto st17;
			}
			{
				goto st0;
			}
			st17:
			p+= 1;
			if ( p == pe )
			goto _test_eof17;
			st_case_17:
			if ( ( (*( p))) == 111 ) {
				goto st18;
			}
			{
				goto st0;
			}
			st18:
			p+= 1;
			if ( p == pe )
			goto _test_eof18;
			st_case_18:
			if ( ( (*( p))) == 114 ) {
				goto st19;
			}
			{
				goto st0;
			}
			st19:
			p+= 1;
			if ( p == pe )
			goto _test_eof19;
			st_case_19:
			if ( ( (*( p))) == 101 ) {
				goto st20;
			}
			{
				goto st0;
			}
			st20:
			p+= 1;
			if ( p == pe )
			goto _test_eof20;
			st_case_20:
			if ( ( (*( p))) == 112 ) {
				goto st21;
			}
			{
				goto st0;
			}
			st21:
			p+= 1;
			if ( p == pe )
			goto _test_eof21;
			st_case_21:
			if ( ( (*( p))) == 108 ) {
				goto st22;
			}
			{
				goto st0;
			}
			st22:
			p+= 1;
			if ( p == pe )
			goto _test_eof22;
			st_case_22:
			if ( ( (*( p))) == 121 ) {
				goto ctr35;
			}
			{
				goto st0;
			}
			ctr35:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st23;
			st23:
			p+= 1;
			if ( p == pe )
			goto _test_eof23;
			st_case_23:
			if ( ( (*( p))) == 13 ) {
				goto st13;
			}
			{
				goto st0;
			}
			st24:
			p+= 1;
			if ( p == pe )
			goto _test_eof24;
			st_case_24:
			if ( ( (*( p))) == 97 ) {
				goto st25;
			}
			{
				goto st0;
			}
			st25:
			p+= 1;
			if ( p == pe )
			goto _test_eof25;
			st_case_25:
			if ( ( (*( p))) == 115 ) {
				goto st26;
			}
			{
				goto st0;
			}
			st26:
			p+= 1;
			if ( p == pe )
			goto _test_eof26;
			st_case_26:
			if ( ( (*( p))) == 32 ) {
				goto st27;
			}
			{
				goto st0;
			}
			st27:
			p+= 1;
			if ( p == pe )
			goto _test_eof27;
			st_case_27:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr40;
			}
			ctr40:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st28;
			st28:
			p+= 1;
			if ( p == pe )
			goto _test_eof28;
			st_case_28:
			if ( ( (*( p))) == 32 ) {
				goto ctr42;
			}
			{
				goto st28;
			}
			ctr42:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st29;
			st29:
			p+= 1;
			if ( p == pe )
			goto _test_eof29;
			st_case_29:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr43;
			}
			{
				goto st0;
			}
			ctr43:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st30;
			st30:
			p+= 1;
			if ( p == pe )
			goto _test_eof30;
			st_case_30:
			if ( ( (*( p))) == 32 ) {
				goto ctr44;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto st30;
			}
			{
				goto st0;
			}
			ctr44:
			{
				#line 62 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_flags_str = str(); }
			
			goto st31;
			st31:
			p+= 1;
			if ( p == pe )
			goto _test_eof31;
			st_case_31:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr46;
			}
			{
				goto st0;
			}
			ctr46:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st32;
			ctr48:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st32;
			st32:
			p+= 1;
			if ( p == pe )
			goto _test_eof32;
			st_case_32:
			if ( ( (*( p))) == 32 ) {
				goto ctr47;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr48;
			}
			{
				goto st0;
			}
			ctr47:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			
			goto st33;
			st33:
			p+= 1;
			if ( p == pe )
			goto _test_eof33;
			st_case_33:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr49;
			}
			{
				goto st0;
			}
			ctr51:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st34;
			ctr49:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st34;
			st34:
			p+= 1;
			if ( p == pe )
			goto _test_eof34;
			st_case_34:
			if ( ( (*( p))) == 32 ) {
				goto ctr50;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr51;
			}
			{
				goto st0;
			}
			ctr50:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			
			goto st35;
			st35:
			p+= 1;
			if ( p == pe )
			goto _test_eof35;
			st_case_35:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr52;
			}
			{
				goto st0;
			}
			ctr52:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 = 0; }
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st36;
			ctr55:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st36;
			st36:
			p+= 1;
			if ( p == pe )
			goto _test_eof36;
			st_case_36:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr53;
				}
				case 32: {
					goto ctr54;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr55;
			}
			{
				goto st0;
			}
			ctr53:
			{
				#line 68 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_version = _u64; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st37;
			st37:
			p+= 1;
			if ( p == pe )
			goto _test_eof37;
			st_case_37:
			if ( ( (*( p))) == 10 ) {
				goto ctr56;
			}
			{
				goto st0;
			}
			ctr56:
			{
				#line 74 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				{{
						#line 87 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
						
						prepush();
					}_fsm_stack[_fsm_top] = 38; _fsm_top+= 1; goto st195;}}
			
			goto st38;
			st38:
			p+= 1;
			if ( p == pe )
			goto _test_eof38;
			st_case_38:
			if ( ( (*( p))) == 13 ) {
				goto st39;
			}
			{
				goto st0;
			}
			st39:
			p+= 1;
			if ( p == pe )
			goto _test_eof39;
			st_case_39:
			if ( ( (*( p))) == 10 ) {
				goto ctr58;
			}
			{
				goto st0;
			}
			ctr54:
			{
				#line 68 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_version = _u64; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st40;
			st40:
			p+= 1;
			if ( p == pe )
			goto _test_eof40;
			st_case_40:
			if ( ( (*( p))) == 110 ) {
				goto st41;
			}
			{
				goto st0;
			}
			st41:
			p+= 1;
			if ( p == pe )
			goto _test_eof41;
			st_case_41:
			if ( ( (*( p))) == 111 ) {
				goto st42;
			}
			{
				goto st0;
			}
			st42:
			p+= 1;
			if ( p == pe )
			goto _test_eof42;
			st_case_42:
			if ( ( (*( p))) == 114 ) {
				goto st43;
			}
			{
				goto st0;
			}
			st43:
			p+= 1;
			if ( p == pe )
			goto _test_eof43;
			st_case_43:
			if ( ( (*( p))) == 101 ) {
				goto st44;
			}
			{
				goto st0;
			}
			st44:
			p+= 1;
			if ( p == pe )
			goto _test_eof44;
			st_case_44:
			if ( ( (*( p))) == 112 ) {
				goto st45;
			}
			{
				goto st0;
			}
			st45:
			p+= 1;
			if ( p == pe )
			goto _test_eof45;
			st_case_45:
			if ( ( (*( p))) == 108 ) {
				goto st46;
			}
			{
				goto st0;
			}
			st46:
			p+= 1;
			if ( p == pe )
			goto _test_eof46;
			st_case_46:
			if ( ( (*( p))) == 121 ) {
				goto ctr65;
			}
			{
				goto st0;
			}
			ctr65:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st47;
			st47:
			p+= 1;
			if ( p == pe )
			goto _test_eof47;
			st_case_47:
			if ( ( (*( p))) == 13 ) {
				goto st37;
			}
			{
				goto st0;
			}
			st48:
			p+= 1;
			if ( p == pe )
			goto _test_eof48;
			st_case_48:
			if ( ( (*( p))) == 101 ) {
				goto st49;
			}
			{
				goto st0;
			}
			st49:
			p+= 1;
			if ( p == pe )
			goto _test_eof49;
			st_case_49:
			switch( ( (*( p))) ) {
				case 99: {
					goto st50;
				}
				case 108: {
					goto st65;
				}
			}
			{
				goto st0;
			}
			st50:
			p+= 1;
			if ( p == pe )
			goto _test_eof50;
			st_case_50:
			if ( ( (*( p))) == 114 ) {
				goto st51;
			}
			{
				goto st0;
			}
			st51:
			p+= 1;
			if ( p == pe )
			goto _test_eof51;
			st_case_51:
			if ( ( (*( p))) == 32 ) {
				goto st52;
			}
			{
				goto st0;
			}
			st52:
			p+= 1;
			if ( p == pe )
			goto _test_eof52;
			st_case_52:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr72;
			}
			ctr72:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st53;
			st53:
			p+= 1;
			if ( p == pe )
			goto _test_eof53;
			st_case_53:
			if ( ( (*( p))) == 32 ) {
				goto ctr74;
			}
			{
				goto st53;
			}
			ctr74:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st54;
			st54:
			p+= 1;
			if ( p == pe )
			goto _test_eof54;
			st_case_54:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr75;
			}
			{
				goto st0;
			}
			ctr75:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 = 0; }
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st55;
			ctr78:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st55;
			st55:
			p+= 1;
			if ( p == pe )
			goto _test_eof55;
			st_case_55:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr76;
				}
				case 32: {
					goto ctr77;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr78;
			}
			{
				goto st0;
			}
			ctr76:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st56;
			st56:
			p+= 1;
			if ( p == pe )
			goto _test_eof56;
			st_case_56:
			if ( ( (*( p))) == 10 ) {
				goto ctr79;
			}
			{
				goto st0;
			}
			ctr77:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st57;
			st57:
			p+= 1;
			if ( p == pe )
			goto _test_eof57;
			st_case_57:
			if ( ( (*( p))) == 110 ) {
				goto st58;
			}
			{
				goto st0;
			}
			st58:
			p+= 1;
			if ( p == pe )
			goto _test_eof58;
			st_case_58:
			if ( ( (*( p))) == 111 ) {
				goto st59;
			}
			{
				goto st0;
			}
			st59:
			p+= 1;
			if ( p == pe )
			goto _test_eof59;
			st_case_59:
			if ( ( (*( p))) == 114 ) {
				goto st60;
			}
			{
				goto st0;
			}
			st60:
			p+= 1;
			if ( p == pe )
			goto _test_eof60;
			st_case_60:
			if ( ( (*( p))) == 101 ) {
				goto st61;
			}
			{
				goto st0;
			}
			st61:
			p+= 1;
			if ( p == pe )
			goto _test_eof61;
			st_case_61:
			if ( ( (*( p))) == 112 ) {
				goto st62;
			}
			{
				goto st0;
			}
			st62:
			p+= 1;
			if ( p == pe )
			goto _test_eof62;
			st_case_62:
			if ( ( (*( p))) == 108 ) {
				goto st63;
			}
			{
				goto st0;
			}
			st63:
			p+= 1;
			if ( p == pe )
			goto _test_eof63;
			st_case_63:
			if ( ( (*( p))) == 121 ) {
				goto ctr86;
			}
			{
				goto st0;
			}
			ctr86:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st64;
			st64:
			p+= 1;
			if ( p == pe )
			goto _test_eof64;
			st_case_64:
			if ( ( (*( p))) == 13 ) {
				goto st56;
			}
			{
				goto st0;
			}
			st65:
			p+= 1;
			if ( p == pe )
			goto _test_eof65;
			st_case_65:
			if ( ( (*( p))) == 101 ) {
				goto st66;
			}
			{
				goto st0;
			}
			st66:
			p+= 1;
			if ( p == pe )
			goto _test_eof66;
			st_case_66:
			if ( ( (*( p))) == 116 ) {
				goto st67;
			}
			{
				goto st0;
			}
			st67:
			p+= 1;
			if ( p == pe )
			goto _test_eof67;
			st_case_67:
			if ( ( (*( p))) == 101 ) {
				goto st68;
			}
			{
				goto st0;
			}
			st68:
			p+= 1;
			if ( p == pe )
			goto _test_eof68;
			st_case_68:
			if ( ( (*( p))) == 32 ) {
				goto st69;
			}
			{
				goto st0;
			}
			st69:
			p+= 1;
			if ( p == pe )
			goto _test_eof69;
			st_case_69:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr92;
			}
			ctr92:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st70;
			st70:
			p+= 1;
			if ( p == pe )
			goto _test_eof70;
			st_case_70:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr94;
				}
				case 32: {
					goto ctr95;
				}
			}
			{
				goto st70;
			}
			ctr94:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st71;
			st71:
			p+= 1;
			if ( p == pe )
			goto _test_eof71;
			st_case_71:
			switch( ( (*( p))) ) {
				case 10: {
					goto ctr96;
				}
				case 13: {
					goto ctr94;
				}
				case 32: {
					goto ctr95;
				}
			}
			{
				goto st70;
			}
			ctr96:
			{
				#line 77 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_delete; }
			
			goto st197;
			st197:
			p+= 1;
			if ( p == pe )
			goto _test_eof197;
			st_case_197:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr94;
				}
				case 32: {
					goto ctr95;
				}
			}
			{
				goto st70;
			}
			ctr95:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st72;
			st72:
			p+= 1;
			if ( p == pe )
			goto _test_eof72;
			st_case_72:
			if ( ( (*( p))) == 110 ) {
				goto st73;
			}
			{
				goto st0;
			}
			st73:
			p+= 1;
			if ( p == pe )
			goto _test_eof73;
			st_case_73:
			if ( ( (*( p))) == 111 ) {
				goto st74;
			}
			{
				goto st0;
			}
			st74:
			p+= 1;
			if ( p == pe )
			goto _test_eof74;
			st_case_74:
			if ( ( (*( p))) == 114 ) {
				goto st75;
			}
			{
				goto st0;
			}
			st75:
			p+= 1;
			if ( p == pe )
			goto _test_eof75;
			st_case_75:
			if ( ( (*( p))) == 101 ) {
				goto st76;
			}
			{
				goto st0;
			}
			st76:
			p+= 1;
			if ( p == pe )
			goto _test_eof76;
			st_case_76:
			if ( ( (*( p))) == 112 ) {
				goto st77;
			}
			{
				goto st0;
			}
			st77:
			p+= 1;
			if ( p == pe )
			goto _test_eof77;
			st_case_77:
			if ( ( (*( p))) == 108 ) {
				goto st78;
			}
			{
				goto st0;
			}
			st78:
			p+= 1;
			if ( p == pe )
			goto _test_eof78;
			st_case_78:
			if ( ( (*( p))) == 121 ) {
				goto ctr103;
			}
			{
				goto st0;
			}
			ctr103:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st79;
			st79:
			p+= 1;
			if ( p == pe )
			goto _test_eof79;
			st_case_79:
			if ( ( (*( p))) == 13 ) {
				goto st80;
			}
			{
				goto st0;
			}
			st80:
			p+= 1;
			if ( p == pe )
			goto _test_eof80;
			st_case_80:
			if ( ( (*( p))) == 10 ) {
				goto ctr105;
			}
			{
				goto st0;
			}
			st81:
			p+= 1;
			if ( p == pe )
			goto _test_eof81;
			st_case_81:
			if ( ( (*( p))) == 108 ) {
				goto st82;
			}
			{
				goto st0;
			}
			st82:
			p+= 1;
			if ( p == pe )
			goto _test_eof82;
			st_case_82:
			if ( ( (*( p))) == 117 ) {
				goto st83;
			}
			{
				goto st0;
			}
			st83:
			p+= 1;
			if ( p == pe )
			goto _test_eof83;
			st_case_83:
			if ( ( (*( p))) == 115 ) {
				goto st84;
			}
			{
				goto st0;
			}
			st84:
			p+= 1;
			if ( p == pe )
			goto _test_eof84;
			st_case_84:
			if ( ( (*( p))) == 104 ) {
				goto st85;
			}
			{
				goto st0;
			}
			st85:
			p+= 1;
			if ( p == pe )
			goto _test_eof85;
			st_case_85:
			if ( ( (*( p))) == 95 ) {
				goto st86;
			}
			{
				goto st0;
			}
			st86:
			p+= 1;
			if ( p == pe )
			goto _test_eof86;
			st_case_86:
			if ( ( (*( p))) == 97 ) {
				goto st87;
			}
			{
				goto st0;
			}
			st87:
			p+= 1;
			if ( p == pe )
			goto _test_eof87;
			st_case_87:
			if ( ( (*( p))) == 108 ) {
				goto st88;
			}
			{
				goto st0;
			}
			st88:
			p+= 1;
			if ( p == pe )
			goto _test_eof88;
			st_case_88:
			if ( ( (*( p))) == 108 ) {
				goto st89;
			}
			{
				goto st0;
			}
			st89:
			p+= 1;
			if ( p == pe )
			goto _test_eof89;
			st_case_89:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr114;
				}
				case 32: {
					goto ctr115;
				}
			}
			{
				goto st0;
			}
			ctr114:
			{
				#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = 0; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st90;
			ctr119:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st90;
			st90:
			p+= 1;
			if ( p == pe )
			goto _test_eof90;
			st_case_90:
			if ( ( (*( p))) == 10 ) {
				goto ctr116;
			}
			{
				goto st0;
			}
			ctr115:
			{
				#line 67 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = 0; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st91;
			st91:
			p+= 1;
			if ( p == pe )
			goto _test_eof91;
			st_case_91:
			if ( ( (*( p))) == 110 ) {
				goto st94;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr117;
			}
			{
				goto st0;
			}
			ctr117:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st92;
			ctr121:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st92;
			st92:
			p+= 1;
			if ( p == pe )
			goto _test_eof92;
			st_case_92:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr119;
				}
				case 32: {
					goto ctr120;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr121;
			}
			{
				goto st0;
			}
			ctr120:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st93;
			st93:
			p+= 1;
			if ( p == pe )
			goto _test_eof93;
			st_case_93:
			if ( ( (*( p))) == 110 ) {
				goto st94;
			}
			{
				goto st0;
			}
			st94:
			p+= 1;
			if ( p == pe )
			goto _test_eof94;
			st_case_94:
			if ( ( (*( p))) == 111 ) {
				goto st95;
			}
			{
				goto st0;
			}
			st95:
			p+= 1;
			if ( p == pe )
			goto _test_eof95;
			st_case_95:
			if ( ( (*( p))) == 114 ) {
				goto st96;
			}
			{
				goto st0;
			}
			st96:
			p+= 1;
			if ( p == pe )
			goto _test_eof96;
			st_case_96:
			if ( ( (*( p))) == 101 ) {
				goto st97;
			}
			{
				goto st0;
			}
			st97:
			p+= 1;
			if ( p == pe )
			goto _test_eof97;
			st_case_97:
			if ( ( (*( p))) == 112 ) {
				goto st98;
			}
			{
				goto st0;
			}
			st98:
			p+= 1;
			if ( p == pe )
			goto _test_eof98;
			st_case_98:
			if ( ( (*( p))) == 108 ) {
				goto st99;
			}
			{
				goto st0;
			}
			st99:
			p+= 1;
			if ( p == pe )
			goto _test_eof99;
			st_case_99:
			if ( ( (*( p))) == 121 ) {
				goto ctr127;
			}
			{
				goto st0;
			}
			ctr127:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st100;
			st100:
			p+= 1;
			if ( p == pe )
			goto _test_eof100;
			st_case_100:
			if ( ( (*( p))) == 13 ) {
				goto st90;
			}
			{
				goto st0;
			}
			st101:
			p+= 1;
			if ( p == pe )
			goto _test_eof101;
			st_case_101:
			if ( ( (*( p))) == 101 ) {
				goto st102;
			}
			{
				goto st0;
			}
			st102:
			p+= 1;
			if ( p == pe )
			goto _test_eof102;
			st_case_102:
			if ( ( (*( p))) == 116 ) {
				goto st103;
			}
			{
				goto st0;
			}
			st103:
			p+= 1;
			if ( p == pe )
			goto _test_eof103;
			st_case_103:
			switch( ( (*( p))) ) {
				case 32: {
					goto st104;
				}
				case 115: {
					goto st107;
				}
			}
			{
				goto st0;
			}
			ctr136:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 75 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_keys.emplace_back(std::move(_key)); }
			
			goto st104;
			st104:
			p+= 1;
			if ( p == pe )
			goto _test_eof104;
			st_case_104:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr133;
			}
			ctr133:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st105;
			st105:
			p+= 1;
			if ( p == pe )
			goto _test_eof105;
			st_case_105:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr135;
				}
				case 32: {
					goto ctr136;
				}
			}
			{
				goto st105;
			}
			ctr135:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 75 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_keys.emplace_back(std::move(_key)); }
			
			goto st106;
			st106:
			p+= 1;
			if ( p == pe )
			goto _test_eof106;
			st_case_106:
			switch( ( (*( p))) ) {
				case 10: {
					goto ctr137;
				}
				case 13: {
					goto ctr135;
				}
				case 32: {
					goto ctr136;
				}
			}
			{
				goto st105;
			}
			ctr137:
			{
				#line 75 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_get; }
			
			goto st198;
			st198:
			p+= 1;
			if ( p == pe )
			goto _test_eof198;
			st_case_198:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr135;
				}
				case 32: {
					goto ctr136;
				}
			}
			{
				goto st105;
			}
			st107:
			p+= 1;
			if ( p == pe )
			goto _test_eof107;
			st_case_107:
			if ( ( (*( p))) == 32 ) {
				goto st108;
			}
			{
				goto st0;
			}
			ctr142:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 76 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_keys.emplace_back(std::move(_key)); }
			
			goto st108;
			st108:
			p+= 1;
			if ( p == pe )
			goto _test_eof108;
			st_case_108:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr139;
			}
			ctr139:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st109;
			st109:
			p+= 1;
			if ( p == pe )
			goto _test_eof109;
			st_case_109:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr141;
				}
				case 32: {
					goto ctr142;
				}
			}
			{
				goto st109;
			}
			ctr141:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			{
				#line 76 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_keys.emplace_back(std::move(_key)); }
			
			goto st110;
			st110:
			p+= 1;
			if ( p == pe )
			goto _test_eof110;
			st_case_110:
			switch( ( (*( p))) ) {
				case 10: {
					goto ctr143;
				}
				case 13: {
					goto ctr141;
				}
				case 32: {
					goto ctr142;
				}
			}
			{
				goto st109;
			}
			ctr143:
			{
				#line 76 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_state = state::cmd_gets; }
			
			goto st199;
			st199:
			p+= 1;
			if ( p == pe )
			goto _test_eof199;
			st_case_199:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr141;
				}
				case 32: {
					goto ctr142;
				}
			}
			{
				goto st109;
			}
			st111:
			p+= 1;
			if ( p == pe )
			goto _test_eof111;
			st_case_111:
			if ( ( (*( p))) == 110 ) {
				goto st112;
			}
			{
				goto st0;
			}
			st112:
			p+= 1;
			if ( p == pe )
			goto _test_eof112;
			st_case_112:
			if ( ( (*( p))) == 99 ) {
				goto st113;
			}
			{
				goto st0;
			}
			st113:
			p+= 1;
			if ( p == pe )
			goto _test_eof113;
			st_case_113:
			if ( ( (*( p))) == 114 ) {
				goto st114;
			}
			{
				goto st0;
			}
			st114:
			p+= 1;
			if ( p == pe )
			goto _test_eof114;
			st_case_114:
			if ( ( (*( p))) == 32 ) {
				goto st115;
			}
			{
				goto st0;
			}
			st115:
			p+= 1;
			if ( p == pe )
			goto _test_eof115;
			st_case_115:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr148;
			}
			ctr148:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st116;
			st116:
			p+= 1;
			if ( p == pe )
			goto _test_eof116;
			st_case_116:
			if ( ( (*( p))) == 32 ) {
				goto ctr150;
			}
			{
				goto st116;
			}
			ctr150:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st117;
			st117:
			p+= 1;
			if ( p == pe )
			goto _test_eof117;
			st_case_117:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr151;
			}
			{
				goto st0;
			}
			ctr151:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 = 0; }
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st118;
			ctr154:
			{
				#line 60 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u64 *= 10; _u64 += (( (*( p)))) - '0'; }
			
			goto st118;
			st118:
			p+= 1;
			if ( p == pe )
			goto _test_eof118;
			st_case_118:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr152;
				}
				case 32: {
					goto ctr153;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr154;
			}
			{
				goto st0;
			}
			ctr152:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st119;
			st119:
			p+= 1;
			if ( p == pe )
			goto _test_eof119;
			st_case_119:
			if ( ( (*( p))) == 10 ) {
				goto ctr155;
			}
			{
				goto st0;
			}
			ctr153:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st120;
			st120:
			p+= 1;
			if ( p == pe )
			goto _test_eof120;
			st_case_120:
			if ( ( (*( p))) == 110 ) {
				goto st121;
			}
			{
				goto st0;
			}
			st121:
			p+= 1;
			if ( p == pe )
			goto _test_eof121;
			st_case_121:
			if ( ( (*( p))) == 111 ) {
				goto st122;
			}
			{
				goto st0;
			}
			st122:
			p+= 1;
			if ( p == pe )
			goto _test_eof122;
			st_case_122:
			if ( ( (*( p))) == 114 ) {
				goto st123;
			}
			{
				goto st0;
			}
			st123:
			p+= 1;
			if ( p == pe )
			goto _test_eof123;
			st_case_123:
			if ( ( (*( p))) == 101 ) {
				goto st124;
			}
			{
				goto st0;
			}
			st124:
			p+= 1;
			if ( p == pe )
			goto _test_eof124;
			st_case_124:
			if ( ( (*( p))) == 112 ) {
				goto st125;
			}
			{
				goto st0;
			}
			st125:
			p+= 1;
			if ( p == pe )
			goto _test_eof125;
			st_case_125:
			if ( ( (*( p))) == 108 ) {
				goto st126;
			}
			{
				goto st0;
			}
			st126:
			p+= 1;
			if ( p == pe )
			goto _test_eof126;
			st_case_126:
			if ( ( (*( p))) == 121 ) {
				goto ctr162;
			}
			{
				goto st0;
			}
			ctr162:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st127;
			st127:
			p+= 1;
			if ( p == pe )
			goto _test_eof127;
			st_case_127:
			if ( ( (*( p))) == 13 ) {
				goto st119;
			}
			{
				goto st0;
			}
			st128:
			p+= 1;
			if ( p == pe )
			goto _test_eof128;
			st_case_128:
			if ( ( (*( p))) == 101 ) {
				goto st129;
			}
			{
				goto st0;
			}
			st129:
			p+= 1;
			if ( p == pe )
			goto _test_eof129;
			st_case_129:
			if ( ( (*( p))) == 112 ) {
				goto st130;
			}
			{
				goto st0;
			}
			st130:
			p+= 1;
			if ( p == pe )
			goto _test_eof130;
			st_case_130:
			if ( ( (*( p))) == 108 ) {
				goto st131;
			}
			{
				goto st0;
			}
			st131:
			p+= 1;
			if ( p == pe )
			goto _test_eof131;
			st_case_131:
			if ( ( (*( p))) == 97 ) {
				goto st132;
			}
			{
				goto st0;
			}
			st132:
			p+= 1;
			if ( p == pe )
			goto _test_eof132;
			st_case_132:
			if ( ( (*( p))) == 99 ) {
				goto st133;
			}
			{
				goto st0;
			}
			st133:
			p+= 1;
			if ( p == pe )
			goto _test_eof133;
			st_case_133:
			if ( ( (*( p))) == 101 ) {
				goto st134;
			}
			{
				goto st0;
			}
			st134:
			p+= 1;
			if ( p == pe )
			goto _test_eof134;
			st_case_134:
			if ( ( (*( p))) == 32 ) {
				goto st135;
			}
			{
				goto st0;
			}
			st135:
			p+= 1;
			if ( p == pe )
			goto _test_eof135;
			st_case_135:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr171;
			}
			ctr171:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st136;
			st136:
			p+= 1;
			if ( p == pe )
			goto _test_eof136;
			st_case_136:
			if ( ( (*( p))) == 32 ) {
				goto ctr173;
			}
			{
				goto st136;
			}
			ctr173:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st137;
			st137:
			p+= 1;
			if ( p == pe )
			goto _test_eof137;
			st_case_137:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr174;
			}
			{
				goto st0;
			}
			ctr174:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st138;
			st138:
			p+= 1;
			if ( p == pe )
			goto _test_eof138;
			st_case_138:
			if ( ( (*( p))) == 32 ) {
				goto ctr175;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto st138;
			}
			{
				goto st0;
			}
			ctr175:
			{
				#line 62 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_flags_str = str(); }
			
			goto st139;
			st139:
			p+= 1;
			if ( p == pe )
			goto _test_eof139;
			st_case_139:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr177;
			}
			{
				goto st0;
			}
			ctr177:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st140;
			ctr179:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st140;
			st140:
			p+= 1;
			if ( p == pe )
			goto _test_eof140;
			st_case_140:
			if ( ( (*( p))) == 32 ) {
				goto ctr178;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr179;
			}
			{
				goto st0;
			}
			ctr178:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			
			goto st141;
			st141:
			p+= 1;
			if ( p == pe )
			goto _test_eof141;
			st_case_141:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr180;
			}
			{
				goto st0;
			}
			ctr183:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st142;
			ctr180:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st142;
			st142:
			p+= 1;
			if ( p == pe )
			goto _test_eof142;
			st_case_142:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr181;
				}
				case 32: {
					goto ctr182;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr183;
			}
			{
				goto st0;
			}
			ctr181:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st143;
			st143:
			p+= 1;
			if ( p == pe )
			goto _test_eof143;
			st_case_143:
			if ( ( (*( p))) == 10 ) {
				goto ctr184;
			}
			{
				goto st0;
			}
			ctr184:
			{
				#line 70 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				{{
						#line 87 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
						
						prepush();
					}_fsm_stack[_fsm_top] = 144; _fsm_top+= 1; goto st195;}}
			
			goto st144;
			st144:
			p+= 1;
			if ( p == pe )
			goto _test_eof144;
			st_case_144:
			if ( ( (*( p))) == 13 ) {
				goto st145;
			}
			{
				goto st0;
			}
			st145:
			p+= 1;
			if ( p == pe )
			goto _test_eof145;
			st_case_145:
			if ( ( (*( p))) == 10 ) {
				goto ctr186;
			}
			{
				goto st0;
			}
			ctr182:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st146;
			st146:
			p+= 1;
			if ( p == pe )
			goto _test_eof146;
			st_case_146:
			if ( ( (*( p))) == 110 ) {
				goto st147;
			}
			{
				goto st0;
			}
			st147:
			p+= 1;
			if ( p == pe )
			goto _test_eof147;
			st_case_147:
			if ( ( (*( p))) == 111 ) {
				goto st148;
			}
			{
				goto st0;
			}
			st148:
			p+= 1;
			if ( p == pe )
			goto _test_eof148;
			st_case_148:
			if ( ( (*( p))) == 114 ) {
				goto st149;
			}
			{
				goto st0;
			}
			st149:
			p+= 1;
			if ( p == pe )
			goto _test_eof149;
			st_case_149:
			if ( ( (*( p))) == 101 ) {
				goto st150;
			}
			{
				goto st0;
			}
			st150:
			p+= 1;
			if ( p == pe )
			goto _test_eof150;
			st_case_150:
			if ( ( (*( p))) == 112 ) {
				goto st151;
			}
			{
				goto st0;
			}
			st151:
			p+= 1;
			if ( p == pe )
			goto _test_eof151;
			st_case_151:
			if ( ( (*( p))) == 108 ) {
				goto st152;
			}
			{
				goto st0;
			}
			st152:
			p+= 1;
			if ( p == pe )
			goto _test_eof152;
			st_case_152:
			if ( ( (*( p))) == 121 ) {
				goto ctr193;
			}
			{
				goto st0;
			}
			ctr193:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st153;
			st153:
			p+= 1;
			if ( p == pe )
			goto _test_eof153;
			st_case_153:
			if ( ( (*( p))) == 13 ) {
				goto st143;
			}
			{
				goto st0;
			}
			st154:
			p+= 1;
			if ( p == pe )
			goto _test_eof154;
			st_case_154:
			switch( ( (*( p))) ) {
				case 101: {
					goto st155;
				}
				case 116: {
					goto st176;
				}
			}
			{
				goto st0;
			}
			st155:
			p+= 1;
			if ( p == pe )
			goto _test_eof155;
			st_case_155:
			if ( ( (*( p))) == 116 ) {
				goto st156;
			}
			{
				goto st0;
			}
			st156:
			p+= 1;
			if ( p == pe )
			goto _test_eof156;
			st_case_156:
			if ( ( (*( p))) == 32 ) {
				goto st157;
			}
			{
				goto st0;
			}
			st157:
			p+= 1;
			if ( p == pe )
			goto _test_eof157;
			st_case_157:
			if ( ( (*( p))) == 32 ) {
				goto st0;
			}
			{
				goto ctr199;
			}
			ctr199:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st158;
			st158:
			p+= 1;
			if ( p == pe )
			goto _test_eof158;
			st_case_158:
			if ( ( (*( p))) == 32 ) {
				goto ctr201;
			}
			{
				goto st158;
			}
			ctr201:
			{
				#line 61 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_key = memcache::item_key(str()); }
			
			goto st159;
			st159:
			p+= 1;
			if ( p == pe )
			goto _test_eof159;
			st_case_159:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr202;
			}
			{
				goto st0;
			}
			ctr202:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			
			goto st160;
			st160:
			p+= 1;
			if ( p == pe )
			goto _test_eof160;
			st_case_160:
			if ( ( (*( p))) == 32 ) {
				goto ctr203;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto st160;
			}
			{
				goto st0;
			}
			ctr203:
			{
				#line 62 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_flags_str = str(); }
			
			goto st161;
			st161:
			p+= 1;
			if ( p == pe )
			goto _test_eof161;
			st_case_161:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr205;
			}
			{
				goto st0;
			}
			ctr205:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st162;
			ctr207:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st162;
			st162:
			p+= 1;
			if ( p == pe )
			goto _test_eof162;
			st_case_162:
			if ( ( (*( p))) == 32 ) {
				goto ctr206;
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr207;
			}
			{
				goto st0;
			}
			ctr206:
			{
				#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_expiration = _u32; }
			
			goto st163;
			st163:
			p+= 1;
			if ( p == pe )
			goto _test_eof163;
			st_case_163:
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr208;
			}
			{
				goto st0;
			}
			ctr211:
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st164;
			ctr208:
			{
				#line 36 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
			}
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 = 0; }
			{
				#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_u32 *= 10; _u32 += (( (*( p)))) - '0'; }
			
			goto st164;
			st164:
			p+= 1;
			if ( p == pe )
			goto _test_eof164;
			st_case_164:
			switch( ( (*( p))) ) {
				case 13: {
					goto ctr209;
				}
				case 32: {
					goto ctr210;
				}
			}
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto ctr211;
			}
			{
				goto st0;
			}
			ctr209:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st165;
			st165:
			p+= 1;
			if ( p == pe )
			goto _test_eof165;
			st_case_165:
			if ( ( (*( p))) == 10 ) {
				goto ctr212;
			}
			{
				goto st0;
			}
			ctr212:
			{
				#line 70 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				{{
						#line 87 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
						
						prepush();
					}_fsm_stack[_fsm_top] = 166; _fsm_top+= 1; goto st195;}}
			
			goto st166;
			st166:
			p+= 1;
			if ( p == pe )
			goto _test_eof166;
			st_case_166:
			if ( ( (*( p))) == 13 ) {
				goto st167;
			}
			{
				goto st0;
			}
			st167:
			p+= 1;
			if ( p == pe )
			goto _test_eof167;
			st_case_167:
			if ( ( (*( p))) == 10 ) {
				goto ctr214;
			}
			{
				goto st0;
			}
			ctr210:
			{
				#line 64 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_size = _u32; _size_str = str(); }
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = false; }
			
			goto st168;
			st168:
			p+= 1;
			if ( p == pe )
			goto _test_eof168;
			st_case_168:
			if ( ( (*( p))) == 110 ) {
				goto st169;
			}
			{
				goto st0;
			}
			st169:
			p+= 1;
			if ( p == pe )
			goto _test_eof169;
			st_case_169:
			if ( ( (*( p))) == 111 ) {
				goto st170;
			}
			{
				goto st0;
			}
			st170:
			p+= 1;
			if ( p == pe )
			goto _test_eof170;
			st_case_170:
			if ( ( (*( p))) == 114 ) {
				goto st171;
			}
			{
				goto st0;
			}
			st171:
			p+= 1;
			if ( p == pe )
			goto _test_eof171;
			st_case_171:
			if ( ( (*( p))) == 101 ) {
				goto st172;
			}
			{
				goto st0;
			}
			st172:
			p+= 1;
			if ( p == pe )
			goto _test_eof172;
			st_case_172:
			if ( ( (*( p))) == 112 ) {
				goto st173;
			}
			{
				goto st0;
			}
			st173:
			p+= 1;
			if ( p == pe )
			goto _test_eof173;
			st_case_173:
			if ( ( (*( p))) == 108 ) {
				goto st174;
			}
			{
				goto st0;
			}
			st174:
			p+= 1;
			if ( p == pe )
			goto _test_eof174;
			st_case_174:
			if ( ( (*( p))) == 121 ) {
				goto ctr221;
			}
			{
				goto st0;
			}
			ctr221:
			{
				#line 66 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				_noreply = true; }
			
			goto st175;
			st175:
			p+= 1;
			if ( p == pe )
			goto _test_eof175;
			st_case_175:
			if ( ( (*( p))) == 13 ) {
				goto st165;
			}
			{
				goto st0;
			}
			st176:
			p+= 1;
			if ( p == pe )
			goto _test_eof176;
			st_case_176:
			if ( ( (*( p))) == 97 ) {
				goto st177;
			}
			{
				goto st0;
			}
			st177:
			p+= 1;
			if ( p == pe )
			goto _test_eof177;
			st_case_177:
			if ( ( (*( p))) == 116 ) {
				goto st178;
			}
			{
				goto st0;
			}
			st178:
			p+= 1;
			if ( p == pe )
			goto _test_eof178;
			st_case_178:
			if ( ( (*( p))) == 115 ) {
				goto st179;
			}
			{
				goto st0;
			}
			st179:
			p+= 1;
			if ( p == pe )
			goto _test_eof179;
			st_case_179:
			switch( ( (*( p))) ) {
				case 13: {
					goto st180;
				}
				case 32: {
					goto st181;
				}
			}
			{
				goto st0;
			}
			st180:
			p+= 1;
			if ( p == pe )
			goto _test_eof180;
			st_case_180:
			if ( ( (*( p))) == 10 ) {
				goto ctr228;
			}
			{
				goto st0;
			}
			st181:
			p+= 1;
			if ( p == pe )
			goto _test_eof181;
			st_case_181:
			if ( ( (*( p))) == 104 ) {
				goto st182;
			}
			{
				goto st0;
			}
			st182:
			p+= 1;
			if ( p == pe )
			goto _test_eof182;
			st_case_182:
			if ( ( (*( p))) == 97 ) {
				goto st183;
			}
			{
				goto st0;
			}
			st183:
			p+= 1;
			if ( p == pe )
			goto _test_eof183;
			st_case_183:
			if ( ( (*( p))) == 115 ) {
				goto st184;
			}
			{
				goto st0;
			}
			st184:
			p+= 1;
			if ( p == pe )
			goto _test_eof184;
			st_case_184:
			if ( ( (*( p))) == 104 ) {
				goto st185;
			}
			{
				goto st0;
			}
			st185:
			p+= 1;
			if ( p == pe )
			goto _test_eof185;
			st_case_185:
			if ( ( (*( p))) == 13 ) {
				goto st186;
			}
			{
				goto st0;
			}
			st186:
			p+= 1;
			if ( p == pe )
			goto _test_eof186;
			st_case_186:
			if ( ( (*( p))) == 10 ) {
				goto ctr234;
			}
			{
				goto st0;
			}
			st187:
			p+= 1;
			if ( p == pe )
			goto _test_eof187;
			st_case_187:
			if ( ( (*( p))) == 101 ) {
				goto st188;
			}
			{
				goto st0;
			}
			st188:
			p+= 1;
			if ( p == pe )
			goto _test_eof188;
			st_case_188:
			if ( ( (*( p))) == 114 ) {
				goto st189;
			}
			{
				goto st0;
			}
			st189:
			p+= 1;
			if ( p == pe )
			goto _test_eof189;
			st_case_189:
			if ( ( (*( p))) == 115 ) {
				goto st190;
			}
			{
				goto st0;
			}
			st190:
			p+= 1;
			if ( p == pe )
			goto _test_eof190;
			st_case_190:
			if ( ( (*( p))) == 105 ) {
				goto st191;
			}
			{
				goto st0;
			}
			st191:
			p+= 1;
			if ( p == pe )
			goto _test_eof191;
			st_case_191:
			if ( ( (*( p))) == 111 ) {
				goto st192;
			}
			{
				goto st0;
			}
			st192:
			p+= 1;
			if ( p == pe )
			goto _test_eof192;
			st_case_192:
			if ( ( (*( p))) == 110 ) {
				goto st193;
			}
			{
				goto st0;
			}
			st193:
			p+= 1;
			if ( p == pe )
			goto _test_eof193;
			st_case_193:
			if ( ( (*( p))) == 13 ) {
				goto st194;
			}
			{
				goto st0;
			}
			st194:
			p+= 1;
			if ( p == pe )
			goto _test_eof194;
			st_case_194:
			if ( ( (*( p))) == 10 ) {
				goto ctr242;
			}
			{
				goto st0;
			}
			st195:
			p+= 1;
			if ( p == pe )
			goto _test_eof195;
			st_case_195:
			{
				goto ctr243;
			}
			ctr243:
			{
				#line 40 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				g.mark_start(p);
				_size_left = _size;
			}
			{
				#line 45 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				auto len = std::min((uint32_t)(pe - p), _size_left);
				_size_left -= len;
				p += len;
				if (_size_left == 0) {
					_blob = str();
					p--;
					{_fsm_top -= 1;_fsm_cs = _fsm_stack[_fsm_top];{
							#line 91 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
							
							postpop();
						}goto _again;}
				}
				p--;
			}
			
			goto st200;
			ctr244:
			{
				#line 45 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
				
				auto len = std::min((uint32_t)(pe - p), _size_left);
				_size_left -= len;
				p += len;
				if (_size_left == 0) {
					_blob = str();
					p--;
					{_fsm_top -= 1;_fsm_cs = _fsm_stack[_fsm_top];{
							#line 91 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
							
							postpop();
						}goto _again;}
				}
				p--;
			}
			
			goto st200;
			st200:
			p+= 1;
			if ( p == pe )
			goto _test_eof200;
			st_case_200:
			{
				goto ctr244;
			}
			st_out:
			_test_eof1: _fsm_cs = 1; goto _test_eof; 
			_test_eof2: _fsm_cs = 2; goto _test_eof; 
			_test_eof3: _fsm_cs = 3; goto _test_eof; 
			_test_eof4: _fsm_cs = 4; goto _test_eof; 
			_test_eof5: _fsm_cs = 5; goto _test_eof; 
			_test_eof6: _fsm_cs = 6; goto _test_eof; 
			_test_eof7: _fsm_cs = 7; goto _test_eof; 
			_test_eof8: _fsm_cs = 8; goto _test_eof; 
			_test_eof9: _fsm_cs = 9; goto _test_eof; 
			_test_eof10: _fsm_cs = 10; goto _test_eof; 
			_test_eof11: _fsm_cs = 11; goto _test_eof; 
			_test_eof12: _fsm_cs = 12; goto _test_eof; 
			_test_eof13: _fsm_cs = 13; goto _test_eof; 
			_test_eof14: _fsm_cs = 14; goto _test_eof; 
			_test_eof15: _fsm_cs = 15; goto _test_eof; 
			_test_eof196: _fsm_cs = 196; goto _test_eof; 
			_test_eof16: _fsm_cs = 16; goto _test_eof; 
			_test_eof17: _fsm_cs = 17; goto _test_eof; 
			_test_eof18: _fsm_cs = 18; goto _test_eof; 
			_test_eof19: _fsm_cs = 19; goto _test_eof; 
			_test_eof20: _fsm_cs = 20; goto _test_eof; 
			_test_eof21: _fsm_cs = 21; goto _test_eof; 
			_test_eof22: _fsm_cs = 22; goto _test_eof; 
			_test_eof23: _fsm_cs = 23; goto _test_eof; 
			_test_eof24: _fsm_cs = 24; goto _test_eof; 
			_test_eof25: _fsm_cs = 25; goto _test_eof; 
			_test_eof26: _fsm_cs = 26; goto _test_eof; 
			_test_eof27: _fsm_cs = 27; goto _test_eof; 
			_test_eof28: _fsm_cs = 28; goto _test_eof; 
			_test_eof29: _fsm_cs = 29; goto _test_eof; 
			_test_eof30: _fsm_cs = 30; goto _test_eof; 
			_test_eof31: _fsm_cs = 31; goto _test_eof; 
			_test_eof32: _fsm_cs = 32; goto _test_eof; 
			_test_eof33: _fsm_cs = 33; goto _test_eof; 
			_test_eof34: _fsm_cs = 34; goto _test_eof; 
			_test_eof35: _fsm_cs = 35; goto _test_eof; 
			_test_eof36: _fsm_cs = 36; goto _test_eof; 
			_test_eof37: _fsm_cs = 37; goto _test_eof; 
			_test_eof38: _fsm_cs = 38; goto _test_eof; 
			_test_eof39: _fsm_cs = 39; goto _test_eof; 
			_test_eof40: _fsm_cs = 40; goto _test_eof; 
			_test_eof41: _fsm_cs = 41; goto _test_eof; 
			_test_eof42: _fsm_cs = 42; goto _test_eof; 
			_test_eof43: _fsm_cs = 43; goto _test_eof; 
			_test_eof44: _fsm_cs = 44; goto _test_eof; 
			_test_eof45: _fsm_cs = 45; goto _test_eof; 
			_test_eof46: _fsm_cs = 46; goto _test_eof; 
			_test_eof47: _fsm_cs = 47; goto _test_eof; 
			_test_eof48: _fsm_cs = 48; goto _test_eof; 
			_test_eof49: _fsm_cs = 49; goto _test_eof; 
			_test_eof50: _fsm_cs = 50; goto _test_eof; 
			_test_eof51: _fsm_cs = 51; goto _test_eof; 
			_test_eof52: _fsm_cs = 52; goto _test_eof; 
			_test_eof53: _fsm_cs = 53; goto _test_eof; 
			_test_eof54: _fsm_cs = 54; goto _test_eof; 
			_test_eof55: _fsm_cs = 55; goto _test_eof; 
			_test_eof56: _fsm_cs = 56; goto _test_eof; 
			_test_eof57: _fsm_cs = 57; goto _test_eof; 
			_test_eof58: _fsm_cs = 58; goto _test_eof; 
			_test_eof59: _fsm_cs = 59; goto _test_eof; 
			_test_eof60: _fsm_cs = 60; goto _test_eof; 
			_test_eof61: _fsm_cs = 61; goto _test_eof; 
			_test_eof62: _fsm_cs = 62; goto _test_eof; 
			_test_eof63: _fsm_cs = 63; goto _test_eof; 
			_test_eof64: _fsm_cs = 64; goto _test_eof; 
			_test_eof65: _fsm_cs = 65; goto _test_eof; 
			_test_eof66: _fsm_cs = 66; goto _test_eof; 
			_test_eof67: _fsm_cs = 67; goto _test_eof; 
			_test_eof68: _fsm_cs = 68; goto _test_eof; 
			_test_eof69: _fsm_cs = 69; goto _test_eof; 
			_test_eof70: _fsm_cs = 70; goto _test_eof; 
			_test_eof71: _fsm_cs = 71; goto _test_eof; 
			_test_eof197: _fsm_cs = 197; goto _test_eof; 
			_test_eof72: _fsm_cs = 72; goto _test_eof; 
			_test_eof73: _fsm_cs = 73; goto _test_eof; 
			_test_eof74: _fsm_cs = 74; goto _test_eof; 
			_test_eof75: _fsm_cs = 75; goto _test_eof; 
			_test_eof76: _fsm_cs = 76; goto _test_eof; 
			_test_eof77: _fsm_cs = 77; goto _test_eof; 
			_test_eof78: _fsm_cs = 78; goto _test_eof; 
			_test_eof79: _fsm_cs = 79; goto _test_eof; 
			_test_eof80: _fsm_cs = 80; goto _test_eof; 
			_test_eof81: _fsm_cs = 81; goto _test_eof; 
			_test_eof82: _fsm_cs = 82; goto _test_eof; 
			_test_eof83: _fsm_cs = 83; goto _test_eof; 
			_test_eof84: _fsm_cs = 84; goto _test_eof; 
			_test_eof85: _fsm_cs = 85; goto _test_eof; 
			_test_eof86: _fsm_cs = 86; goto _test_eof; 
			_test_eof87: _fsm_cs = 87; goto _test_eof; 
			_test_eof88: _fsm_cs = 88; goto _test_eof; 
			_test_eof89: _fsm_cs = 89; goto _test_eof; 
			_test_eof90: _fsm_cs = 90; goto _test_eof; 
			_test_eof91: _fsm_cs = 91; goto _test_eof; 
			_test_eof92: _fsm_cs = 92; goto _test_eof; 
			_test_eof93: _fsm_cs = 93; goto _test_eof; 
			_test_eof94: _fsm_cs = 94; goto _test_eof; 
			_test_eof95: _fsm_cs = 95; goto _test_eof; 
			_test_eof96: _fsm_cs = 96; goto _test_eof; 
			_test_eof97: _fsm_cs = 97; goto _test_eof; 
			_test_eof98: _fsm_cs = 98; goto _test_eof; 
			_test_eof99: _fsm_cs = 99; goto _test_eof; 
			_test_eof100: _fsm_cs = 100; goto _test_eof; 
			_test_eof101: _fsm_cs = 101; goto _test_eof; 
			_test_eof102: _fsm_cs = 102; goto _test_eof; 
			_test_eof103: _fsm_cs = 103; goto _test_eof; 
			_test_eof104: _fsm_cs = 104; goto _test_eof; 
			_test_eof105: _fsm_cs = 105; goto _test_eof; 
			_test_eof106: _fsm_cs = 106; goto _test_eof; 
			_test_eof198: _fsm_cs = 198; goto _test_eof; 
			_test_eof107: _fsm_cs = 107; goto _test_eof; 
			_test_eof108: _fsm_cs = 108; goto _test_eof; 
			_test_eof109: _fsm_cs = 109; goto _test_eof; 
			_test_eof110: _fsm_cs = 110; goto _test_eof; 
			_test_eof199: _fsm_cs = 199; goto _test_eof; 
			_test_eof111: _fsm_cs = 111; goto _test_eof; 
			_test_eof112: _fsm_cs = 112; goto _test_eof; 
			_test_eof113: _fsm_cs = 113; goto _test_eof; 
			_test_eof114: _fsm_cs = 114; goto _test_eof; 
			_test_eof115: _fsm_cs = 115; goto _test_eof; 
			_test_eof116: _fsm_cs = 116; goto _test_eof; 
			_test_eof117: _fsm_cs = 117; goto _test_eof; 
			_test_eof118: _fsm_cs = 118; goto _test_eof; 
			_test_eof119: _fsm_cs = 119; goto _test_eof; 
			_test_eof120: _fsm_cs = 120; goto _test_eof; 
			_test_eof121: _fsm_cs = 121; goto _test_eof; 
			_test_eof122: _fsm_cs = 122; goto _test_eof; 
			_test_eof123: _fsm_cs = 123; goto _test_eof; 
			_test_eof124: _fsm_cs = 124; goto _test_eof; 
			_test_eof125: _fsm_cs = 125; goto _test_eof; 
			_test_eof126: _fsm_cs = 126; goto _test_eof; 
			_test_eof127: _fsm_cs = 127; goto _test_eof; 
			_test_eof128: _fsm_cs = 128; goto _test_eof; 
			_test_eof129: _fsm_cs = 129; goto _test_eof; 
			_test_eof130: _fsm_cs = 130; goto _test_eof; 
			_test_eof131: _fsm_cs = 131; goto _test_eof; 
			_test_eof132: _fsm_cs = 132; goto _test_eof; 
			_test_eof133: _fsm_cs = 133; goto _test_eof; 
			_test_eof134: _fsm_cs = 134; goto _test_eof; 
			_test_eof135: _fsm_cs = 135; goto _test_eof; 
			_test_eof136: _fsm_cs = 136; goto _test_eof; 
			_test_eof137: _fsm_cs = 137; goto _test_eof; 
			_test_eof138: _fsm_cs = 138; goto _test_eof; 
			_test_eof139: _fsm_cs = 139; goto _test_eof; 
			_test_eof140: _fsm_cs = 140; goto _test_eof; 
			_test_eof141: _fsm_cs = 141; goto _test_eof; 
			_test_eof142: _fsm_cs = 142; goto _test_eof; 
			_test_eof143: _fsm_cs = 143; goto _test_eof; 
			_test_eof144: _fsm_cs = 144; goto _test_eof; 
			_test_eof145: _fsm_cs = 145; goto _test_eof; 
			_test_eof146: _fsm_cs = 146; goto _test_eof; 
			_test_eof147: _fsm_cs = 147; goto _test_eof; 
			_test_eof148: _fsm_cs = 148; goto _test_eof; 
			_test_eof149: _fsm_cs = 149; goto _test_eof; 
			_test_eof150: _fsm_cs = 150; goto _test_eof; 
			_test_eof151: _fsm_cs = 151; goto _test_eof; 
			_test_eof152: _fsm_cs = 152; goto _test_eof; 
			_test_eof153: _fsm_cs = 153; goto _test_eof; 
			_test_eof154: _fsm_cs = 154; goto _test_eof; 
			_test_eof155: _fsm_cs = 155; goto _test_eof; 
			_test_eof156: _fsm_cs = 156; goto _test_eof; 
			_test_eof157: _fsm_cs = 157; goto _test_eof; 
			_test_eof158: _fsm_cs = 158; goto _test_eof; 
			_test_eof159: _fsm_cs = 159; goto _test_eof; 
			_test_eof160: _fsm_cs = 160; goto _test_eof; 
			_test_eof161: _fsm_cs = 161; goto _test_eof; 
			_test_eof162: _fsm_cs = 162; goto _test_eof; 
			_test_eof163: _fsm_cs = 163; goto _test_eof; 
			_test_eof164: _fsm_cs = 164; goto _test_eof; 
			_test_eof165: _fsm_cs = 165; goto _test_eof; 
			_test_eof166: _fsm_cs = 166; goto _test_eof; 
			_test_eof167: _fsm_cs = 167; goto _test_eof; 
			_test_eof168: _fsm_cs = 168; goto _test_eof; 
			_test_eof169: _fsm_cs = 169; goto _test_eof; 
			_test_eof170: _fsm_cs = 170; goto _test_eof; 
			_test_eof171: _fsm_cs = 171; goto _test_eof; 
			_test_eof172: _fsm_cs = 172; goto _test_eof; 
			_test_eof173: _fsm_cs = 173; goto _test_eof; 
			_test_eof174: _fsm_cs = 174; goto _test_eof; 
			_test_eof175: _fsm_cs = 175; goto _test_eof; 
			_test_eof176: _fsm_cs = 176; goto _test_eof; 
			_test_eof177: _fsm_cs = 177; goto _test_eof; 
			_test_eof178: _fsm_cs = 178; goto _test_eof; 
			_test_eof179: _fsm_cs = 179; goto _test_eof; 
			_test_eof180: _fsm_cs = 180; goto _test_eof; 
			_test_eof181: _fsm_cs = 181; goto _test_eof; 
			_test_eof182: _fsm_cs = 182; goto _test_eof; 
			_test_eof183: _fsm_cs = 183; goto _test_eof; 
			_test_eof184: _fsm_cs = 184; goto _test_eof; 
			_test_eof185: _fsm_cs = 185; goto _test_eof; 
			_test_eof186: _fsm_cs = 186; goto _test_eof; 
			_test_eof187: _fsm_cs = 187; goto _test_eof; 
			_test_eof188: _fsm_cs = 188; goto _test_eof; 
			_test_eof189: _fsm_cs = 189; goto _test_eof; 
			_test_eof190: _fsm_cs = 190; goto _test_eof; 
			_test_eof191: _fsm_cs = 191; goto _test_eof; 
			_test_eof192: _fsm_cs = 192; goto _test_eof; 
			_test_eof193: _fsm_cs = 193; goto _test_eof; 
			_test_eof194: _fsm_cs = 194; goto _test_eof; 
			_test_eof195: _fsm_cs = 195; goto _test_eof; 
			_test_eof200: _fsm_cs = 200; goto _test_eof; 
			
			_test_eof: {}
			if ( p == eof )
			{
				switch ( _fsm_cs ) {
					case 1: 
					{
						#line 85 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
						_state = state::eof; }
					break;
				}
			}
			
			_out: {}
		}
		
		#line 146 "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/ascii.rl"
		
		#ifdef __clang__
		#pragma clang diagnostic pop
		#endif
		if (_state != state::error) {
			return p;
		}
		if (p != pe) {
			p = pe;
			return p;
		}
		return nullptr;
	}
	bool eof() const {
		return _state == state::eof;
	}
};
