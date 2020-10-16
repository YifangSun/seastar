
#line 1 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
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
* Copyright (C) 2015 Cloudius Systems, Ltd.
*/

#include <seastar/core/ragel.hh>
#include <memory>
#include <unordered_map>

namespace seastar {
	
	struct http_response {
		sstring _version;
		std::unordered_map<sstring, sstring> _headers;
	};
	
	
	#line 34 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
	
	
	
	#line 89 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
	
	
	class http_response_parser : public ragel_parser_base<http_response_parser> {
		
		static const int start = 1;
		static const int error = 0;
		
		static const int en_main = 1;
		
		
		
		
		
		
		
		
		
		
		#line 93 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
		
		public:
		enum class state {
			error,
			eof,
			done,
		};
		std::unique_ptr<http_response> _rsp;
		sstring _field_name;
		sstring _value;
		state _state;
		public:
		void init() {
			init_base();
			_rsp.reset(new http_response());
			_state = state::eof;
			
			{
				_fsm_cs = (int)start;
			}
			
			#line 109 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
			
		}
		char* parse(char* p, char* pe, char* eof) {
			sstring_builder::guard g(_builder, p, pe);
			auto str = [this, &g, &p] { g.mark_end(p); return get_str(); };
			bool done = false;
			if (p != pe) {
				_state = state::error;
			}
			#ifdef __clang__
			#pragma clang diagnostic push
			#pragma clang diagnostic ignored "-Wmisleading-indentation"
			#endif
			
			{
				if ( p == pe )
				goto _test_eof;
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
					case 16:
					goto st_case_16;
					case 17:
					goto st_case_17;
					case 34:
					goto st_case_34;
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
				}
				goto st_out;
				st_case_1:
				if ( ( (*( p))) == 72 ) {
					goto st2;
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
				if ( ( (*( p))) == 84 ) {
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
				if ( ( (*( p))) == 84 ) {
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
				if ( ( (*( p))) == 80 ) {
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
				if ( ( (*( p))) == 47 ) {
					goto st6;
				}
				{
					goto st0;
				}
				st6:
				p+= 1;
				if ( p == pe )
				goto _test_eof6;
				st_case_6:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto ctr6;
				}
				{
					goto st0;
				}
				ctr6:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st7;
				st7:
				p+= 1;
				if ( p == pe )
				goto _test_eof7;
				st_case_7:
				if ( ( (*( p))) == 46 ) {
					goto st8;
				}
				{
					goto st0;
				}
				st8:
				p+= 1;
				if ( p == pe )
				goto _test_eof8;
				st_case_8:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto st9;
				}
				{
					goto st0;
				}
				st9:
				p+= 1;
				if ( p == pe )
				goto _test_eof9;
				st_case_9:
				if ( ( (*( p))) == 32 ) {
					goto ctr9;
				}
				if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
					goto ctr9;
				}
				{
					goto st0;
				}
				ctr9:
				{
					#line 43 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_version = str();
				}
				
				goto st10;
				st10:
				p+= 1;
				if ( p == pe )
				goto _test_eof10;
				st_case_10:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto st11;
				}
				{
					goto st0;
				}
				st11:
				p+= 1;
				if ( p == pe )
				goto _test_eof11;
				st_case_11:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto st12;
				}
				{
					goto st0;
				}
				st12:
				p+= 1;
				if ( p == pe )
				goto _test_eof12;
				st_case_12:
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto st13;
				}
				{
					goto st0;
				}
				st13:
				p+= 1;
				if ( p == pe )
				goto _test_eof13;
				st_case_13:
				if ( ( (*( p))) == 32 ) {
					goto st14;
				}
				if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
					goto st14;
				}
				{
					goto st0;
				}
				st14:
				p+= 1;
				if ( p == pe )
				goto _test_eof14;
				st_case_14:
				switch( ( (*( p))) ) {
					case 10: {
						goto st0;
					}
					case 13: {
						goto st15;
					}
				}
				{
					goto st14;
				}
				st15:
				p+= 1;
				if ( p == pe )
				goto _test_eof15;
				st_case_15:
				if ( ( (*( p))) == 10 ) {
					goto st16;
				}
				{
					goto st0;
				}
				st16:
				p+= 1;
				if ( p == pe )
				goto _test_eof16;
				st_case_16:
				switch( ( (*( p))) ) {
					case 13: {
						goto st17;
					}
					case 33: {
						goto ctr17;
					}
					case 124: {
						goto ctr17;
					}
					case 126: {
						goto ctr17;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr17;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr17;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr17;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr17;
						}
					} else {
						goto ctr17;
					}
				} else {
					goto ctr17;
				}
				{
					goto st0;
				}
				ctr30:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				
				goto st17;
				ctr40:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st17;
				ctr55:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st17;
				st17:
				p+= 1;
				if ( p == pe )
				goto _test_eof17;
				st_case_17:
				if ( ( (*( p))) == 10 ) {
					goto ctr18;
				}
				{
					goto st0;
				}
				ctr18:
				{
					#line 63 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					done = true;
					{p+= 1; _fsm_cs = 34; goto _out;}
				}
				
				goto st34;
				st34:
				p+= 1;
				if ( p == pe )
				goto _test_eof34;
				st_case_34:
				{
					goto st0;
				}
				ctr17:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st18;
				ctr31:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st18;
				st18:
				p+= 1;
				if ( p == pe )
				goto _test_eof18;
				st_case_18:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr19;
					}
					case 32: {
						goto ctr19;
					}
					case 33: {
						goto st18;
					}
					case 58: {
						goto ctr21;
					}
					case 124: {
						goto st18;
					}
					case 126: {
						goto st18;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto st18;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto st18;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto st18;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto st18;
						}
					} else {
						goto st18;
					}
				} else {
					goto st18;
				}
				{
					goto st0;
				}
				ctr19:
				{
					#line 47 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_field_name = str();
				}
				
				goto st19;
				st19:
				p+= 1;
				if ( p == pe )
				goto _test_eof19;
				st_case_19:
				switch( ( (*( p))) ) {
					case 9: {
						goto st19;
					}
					case 32: {
						goto st19;
					}
					case 58: {
						goto st20;
					}
				}
				{
					goto st0;
				}
				ctr21:
				{
					#line 47 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_field_name = str();
				}
				
				goto st20;
				st20:
				p+= 1;
				if ( p == pe )
				goto _test_eof20;
				st_case_20:
				if ( ( (*( p))) == 13 ) {
					goto ctr25;
				}
				{
					goto ctr24;
				}
				ctr24:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st21;
				st21:
				p+= 1;
				if ( p == pe )
				goto _test_eof21;
				st_case_21:
				if ( ( (*( p))) == 13 ) {
					goto ctr27;
				}
				{
					goto st21;
				}
				ctr25:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st22;
				ctr27:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st22;
				st22:
				p+= 1;
				if ( p == pe )
				goto _test_eof22;
				st_case_22:
				if ( ( (*( p))) == 10 ) {
					goto st23;
				}
				{
					goto st0;
				}
				st23:
				p+= 1;
				if ( p == pe )
				goto _test_eof23;
				st_case_23:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr29;
					}
					case 13: {
						goto ctr30;
					}
					case 32: {
						goto ctr29;
					}
					case 33: {
						goto ctr31;
					}
					case 124: {
						goto ctr31;
					}
					case 126: {
						goto ctr31;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr31;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr31;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr31;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr31;
						}
					} else {
						goto ctr31;
					}
				} else {
					goto ctr31;
				}
				{
					goto st0;
				}
				ctr33:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st24;
				ctr29:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				
				goto st24;
				ctr39:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st24;
				ctr54:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				
				goto st24;
				st24:
				p+= 1;
				if ( p == pe )
				goto _test_eof24;
				st_case_24:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr33;
					}
					case 13: {
						goto ctr34;
					}
					case 32: {
						goto ctr33;
					}
				}
				{
					goto ctr32;
				}
				ctr32:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st25;
				ctr36:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st25;
				st25:
				p+= 1;
				if ( p == pe )
				goto _test_eof25;
				st_case_25:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr36;
					}
					case 13: {
						goto ctr37;
					}
					case 32: {
						goto ctr36;
					}
				}
				{
					goto st25;
				}
				ctr34:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st26;
				ctr37:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st26;
				st26:
				p+= 1;
				if ( p == pe )
				goto _test_eof26;
				st_case_26:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr36;
					}
					case 10: {
						goto st27;
					}
					case 13: {
						goto ctr37;
					}
					case 32: {
						goto ctr36;
					}
				}
				{
					goto st25;
				}
				st27:
				p+= 1;
				if ( p == pe )
				goto _test_eof27;
				st_case_27:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr39;
					}
					case 13: {
						goto ctr40;
					}
					case 32: {
						goto ctr39;
					}
					case 33: {
						goto ctr41;
					}
					case 124: {
						goto ctr41;
					}
					case 126: {
						goto ctr41;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr41;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr41;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr41;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr41;
						}
					} else {
						goto ctr41;
					}
				} else {
					goto ctr41;
				}
				{
					goto st25;
				}
				ctr41:
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st28;
				ctr56:
				{
					#line 55 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] = std::move(_value);
				}
				{
					#line 59 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_rsp->_headers[_field_name] += sstring(" ") + std::move(_value);
				}
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st28;
				st28:
				p+= 1;
				if ( p == pe )
				goto _test_eof28;
				st_case_28:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr42;
					}
					case 13: {
						goto ctr37;
					}
					case 32: {
						goto ctr42;
					}
					case 33: {
						goto st28;
					}
					case 58: {
						goto ctr44;
					}
					case 124: {
						goto st28;
					}
					case 126: {
						goto st28;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto st28;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto st28;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto st28;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto st28;
						}
					} else {
						goto st28;
					}
				} else {
					goto st28;
				}
				{
					goto st25;
				}
				ctr45:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st29;
				ctr42:
				{
					#line 47 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_field_name = str();
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st29;
				st29:
				p+= 1;
				if ( p == pe )
				goto _test_eof29;
				st_case_29:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr45;
					}
					case 13: {
						goto ctr37;
					}
					case 32: {
						goto ctr45;
					}
					case 58: {
						goto st30;
					}
				}
				{
					goto st25;
				}
				ctr44:
				{
					#line 47 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_field_name = str();
				}
				
				goto st30;
				st30:
				p+= 1;
				if ( p == pe )
				goto _test_eof30;
				st_case_30:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr48;
					}
					case 13: {
						goto ctr49;
					}
					case 32: {
						goto ctr48;
					}
				}
				{
					goto ctr47;
				}
				ctr47:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				
				goto st31;
				ctr48:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st31;
				ctr51:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st31;
				st31:
				p+= 1;
				if ( p == pe )
				goto _test_eof31;
				st_case_31:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr51;
					}
					case 13: {
						goto ctr52;
					}
					case 32: {
						goto ctr51;
					}
				}
				{
					goto st31;
				}
				ctr49:
				{
					#line 39 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					g.mark_start(p);
				}
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st32;
				ctr52:
				{
					#line 51 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
					
					_value = str();
				}
				
				goto st32;
				st32:
				p+= 1;
				if ( p == pe )
				goto _test_eof32;
				st_case_32:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr36;
					}
					case 10: {
						goto st33;
					}
					case 13: {
						goto ctr37;
					}
					case 32: {
						goto ctr36;
					}
				}
				{
					goto st25;
				}
				st33:
				p+= 1;
				if ( p == pe )
				goto _test_eof33;
				st_case_33:
				switch( ( (*( p))) ) {
					case 9: {
						goto ctr54;
					}
					case 13: {
						goto ctr55;
					}
					case 32: {
						goto ctr54;
					}
					case 33: {
						goto ctr56;
					}
					case 124: {
						goto ctr56;
					}
					case 126: {
						goto ctr56;
					}
				}
				if ( ( (*( p))) < 45 ) {
					if ( ( (*( p))) > 39 ) {
						if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
							goto ctr56;
						}
					} else if ( ( (*( p))) >= 35 ) {
						goto ctr56;
					}
				} else if ( ( (*( p))) > 46 ) {
					if ( ( (*( p))) < 65 ) {
						if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto ctr56;
						}
					} else if ( ( (*( p))) > 90 ) {
						if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto ctr56;
						}
					} else {
						goto ctr56;
					}
				} else {
					goto ctr56;
				}
				{
					goto st25;
				}
				st_out:
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
				_test_eof16: _fsm_cs = 16; goto _test_eof; 
				_test_eof17: _fsm_cs = 17; goto _test_eof; 
				_test_eof34: _fsm_cs = 34; goto _test_eof; 
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
				
				_test_eof: {}
				_out: {}
			}
			
			#line 122 "/home/work/feeds-seastar/seastar-20.05/seastar/src/http/response_parser.rl"
			
			#ifdef __clang__
			#pragma clang diagnostic pop
			#endif
			if (!done) {
				p = nullptr;
			} else {
				_state = state::done;
			}
			return p;
		}
		auto get_parsed_response() {
			return std::move(_rsp);
		}
		bool eof() const {
			return _state == state::eof;
		}
	};
	
}
